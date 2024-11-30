#pragma once

#include <iostream>
#include "LinkedList.h"
#include "Branch.h"
#include "Node.h"

class BranchManager:public LinkedList<Branch>
{
public:
	Branch search_by_id(string id) {
		Node<Branch>* temp = this->head;

		while (temp != NULL) {
			if (temp->data.get_id() == id) {
				return (temp->data);
			}
			temp = temp->next;
		}
	}

	void display() {
		Node<Branch>* temp = this->head;
		int counter = 0;

		while (temp != NULL) {
			cout << "information for branch #" << counter << endl;
			cout << "name : " << temp->data.get_name() << endl;
			cout << "id : " << temp->data.get_id() << endl;
			cout << "location : " << temp->data.get_Location() << endl << endl;

			counter++;
			temp = temp->next;
		}

	}

};
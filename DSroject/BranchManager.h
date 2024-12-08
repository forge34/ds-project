#pragma once

#include <iostream>
#include "LinkedList.h"
#include "Branch.h"
#include "Node.h"
#include "PatientManager.h"
#include "DoctorManager.h"
#include "AppointmentManager.h"

class BranchManager : public LinkedList<Branch>
{
public:
	Branch *search_by_id(string);
	void remove_branch(string);
	void display_info();
};

Branch *BranchManager::search_by_id(string id)
{
	Node<Branch> *temp = this->head;

	while (temp != NULL)
	{
		if (temp->data.get_id() == id)
		{
			//Branch *data = new Branch(temp->data);
			return &temp->data;// data;
		}
		temp = temp->next;
	}
	return NULL;
}

void BranchManager::remove_branch(string id)
{
	Node<Branch> *delptr = this->head;

	if (delptr->data.get_id() == id)
	{
		head = head->next;
		delete delptr;
	}

	else
	{
		Node<Branch> *prev;
		while (delptr != NULL && delptr->data.get_id() != id)
		{
			prev = delptr;
			prev->next = delptr->next;
			delptr = delptr->next;
		}

		delete delptr;
	}
}

void BranchManager::display_info()
{
	Node<Branch> *temp = this->head;
	int counter = 0;

	cout << "All branches info" << endl;

	while (temp != NULL)
	{
		cout << "information for branch #" << counter << endl;
		cout << "name : " << temp->data.get_name() << endl;
		cout << "id : " << temp->data.get_id() << endl;
		cout << "location : " << temp->data.get_Location() << endl
			 << endl;

		counter++;
		temp = temp->next;
	}
}

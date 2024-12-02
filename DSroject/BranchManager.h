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
	AppointmentManager *appointments = new AppointmentManager();
	void display_info();
	void display_appointments();
};

Branch *BranchManager::search_by_id(string id)
{
	Node<Branch> *temp = this->head;

	while (temp != NULL)
	{
		if (temp->data.get_id() == id)
		{
			Branch *data = new Branch(temp->data);
			return data;
		}
		temp = temp->next;
	}
	return NULL;
}

void BranchManager::display_info()
{
	Node<Branch> *temp = this->head;
	int counter = 0;

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

void BranchManager::display_appointments() {
	this->appointments->display();
}
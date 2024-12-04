#pragma once

#include "LinkedList.h"
#include "Node.h"
#include "Patient.h"

class PatientManager:public LinkedList<Patient>
{
public:
	void remove_patient(string);
    void update_patient(string, Patient);
	Patient* search_by_name(string);
};

void PatientManager::remove_patient(string id) {
    Node<Patient>* delptr = this->head;

    if (delptr->data.get_id() == id)
    {
        head = head->next;
        delete delptr;
    }

    else
    {
        Node<Patient>* prev;
        while (delptr != NULL && delptr->data.get_id() != id)
        {
            prev = delptr;
            prev->next = delptr->next;
            delptr = delptr->next;
        }

        delete delptr;
    }
}

void PatientManager::update_patient(string id, Patient new_data) {
    Node<Patient>* temp = head;

    while (temp != NULL) {
        if (temp->data.get_id() == id) {
            temp->data = new_data;
            cout << "patient updated" << endl;
            return;
        }
        else
            temp = temp->next;
    }
}

Patient* PatientManager::search_by_name(string name) {
	Node<Patient>* temp = head;

	while (temp != NULL) {
        if (temp->data.get_name() == name) {
            Patient* data = new Patient(temp->data);

            return data;
        }else
            temp = temp->next;
	}

    return NULL;
}
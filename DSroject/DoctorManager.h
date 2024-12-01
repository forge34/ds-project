#pragma once
#include <iostream>
#include "LinkedList.h"
#include "Doctor.h"
#include "Node.h"

class DoctorManager : public LinkedList<Doctor>
{
public:
    void remove_doctor(string);
    void display_doctors();
   
};

void DoctorManager::remove_doctor(string id) 
    {
        Node<Doctor>* temp = this->head;
        Node<Doctor>* delptr = this->head;

        if (temp->data.get_id() == id)
        {
            head = head->next;
            delete delptr;
        }

        else
        {
            Node<Doctor>* prev;
            while (delptr != NULL && delptr->data.get_id() != id)
            {
                prev = delptr;
                prev->next = delptr->next;
                delptr = delptr->next;
            }

            delete delptr;

        }
}

void DoctorManager::display_doctors() 
    {
        Node<Doctor>* temp = this->head;
        int counter = 0;

        while (temp != NULL) {
            cout << "information for Doctor #" << counter << endl;
            cout << "name : " << temp->data.get_name() << endl;
            cout << "id : " << temp->data.get_id() << endl;
            cout << "specialization : " << temp->data.get_spec() << endl << endl;

            counter++;
            temp = temp->next;
        }
    }
#pragma once

#include "Node.h"
#include "Appointment.h"
#include "LinkedList.h"

class AppointmentManager :public LinkedList<Appointment>
{
public:

	void create_appointment(Doctor, Patient, string);
	void display();
};

void AppointmentManager::create_appointment(Doctor d, Patient p, string time) {
	Node<Appointment>* newnode = new Node<Appointment>;

	Appointment* ap = new  Appointment(d, p, time);
	newnode->data = *ap;
	if (this->is_empty()) {
		this->head = newnode;
	}
	else {
		newnode->next = this->head;
		this->head = newnode;
	}
}

void AppointmentManager::display() {


}

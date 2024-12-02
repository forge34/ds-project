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

	Node<Appointment>* temp = head;

	while (temp != NULL) {
		cout << "Appointment doctor : " << temp->data.doctor.get_name() << endl;
		cout << "Appointemnt patient : " << temp->data.patient.get_name() << endl;
		cout << "Appointemnt time : " << temp->data.time << endl;

		temp = temp->next;
	}
}

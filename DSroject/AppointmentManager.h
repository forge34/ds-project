#pragma once

#include "Node.h"
#include "Appointment.h"
#include "LinkedList.h"

class AppointmentManager :public LinkedList<Appointment>
{
public:

	void create_appointment(Doctor, Patient, string);
	void get_doctor_appointments(string name);
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

void AppointmentManager::get_doctor_appointments(string name)
{
	Node<Appointment>* temp = head;

	cout << "All appointments for doctor " << name << endl;
	while (temp != NULL) {
		if (temp->data.doctor.get_name() == name) {

			cout << "Appointment doctor : " << temp->data.doctor.get_name() << endl;
			cout << "Appointemnt patient : " << temp->data.patient.get_name() << endl;
			cout << "Appointemnt time : " << temp->data.time << endl;
		}

		cout << endl;

		temp = temp->next;
	}
}

void AppointmentManager::display() {

	Node<Appointment>* temp = head;

	cout << "All appointments" << endl;
	while (temp != NULL) {
		cout << "Appointment doctor : " << temp->data.doctor.get_name() << endl;
		cout << "Appointemnt patient : " << temp->data.patient.get_name() << endl;
		cout << "Appointemnt time : " << temp->data.time << endl;

		temp = temp->next;
	}
}

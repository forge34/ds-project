// DSroject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Branch.h"
#include "BranchManager.h"
#include "Doctor.h"
#include "DoctorManager.h"
#include "PatientManager.h"
#include "AppointmentManager.h"


int main()
{
	Branch b;
	Doctor d,d1,d2,d3;
	Patient p,p1;

	AppointmentManager app;

	d.set_name("Mo");
	d.set_id("1");
	d.set_spec("Neuro");

	d1.set_name("Mo");
	d1.set_id("1");
	d1.set_spec("Neuro");

	d2.set_name("Mo");
	d2.set_id("1");
	d2.set_spec("Neuro");

	d3.set_name("Mo");
	d3.set_id("1");
	d3.set_spec("Neuro");

	p.set_name("ahmed");
	p.set_id("1");
	p1.set_name("medo");
	p1.set_id("2");

	app.create_appointment(d, p, "6:30");
	app.create_appointment(d, p1, "6:30");
	app.get_doctor_appointments(d.get_name());

}

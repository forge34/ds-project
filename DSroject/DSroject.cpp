// DSroject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Branch.h"
#include "BranchManager.h"
#include "Doctor.h"
#include "DoctorManager.h"
#include "PatientManager.h"


int main()
{
	Branch b;
	Doctor d;
	Patient p;

	d.set_name("Mo");
	d.set_id("1");
	d.set_spec("Neuro");

	p.set_name("ahmed");
	p.set_id("1");

	b.appointments->create_appointment(d, p, "6:30");
	b.display_appointments();
}

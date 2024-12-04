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


void main_logic1() {
	BranchManager branchManager1;
	Branch b1;

	b1.set_id("B-1");
	b1.set_Location("Cairo");
	b1.set_name("Grand Cairo Hostital branch 1");

	Doctor d1, d2;
	d1.set_id("D-1");
	d1.set_name("Mohamed Omar");
	d1.set_spec("Neurologist");
	

	d2.set_id("D-2");
	d1.set_name("Mohamed Sheriff");
	d1.set_spec("Dentist");

	Patient p1;
	p1.set_id("P-1");
	p1.set_name("Ahmed");

	b1.doctors->insert_first(d1);
	b1.doctors->insert_first(d2);
	b1.patients->insert_first(p1);
	b1.appointments->create_appointment(d1, p1, "6:30");

	branchManager1.insert_first(b1);

	branchManager1.display_info();
	b1.doctors->display_doctors();
	b1.display_appointments();
}

int main()
{
	main_logic1();
}

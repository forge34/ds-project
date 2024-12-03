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
	Branch b1, b2;
	BranchManager bm;

	b1.set_id("1");
	b1.set_name("Cairod");
	b1.set_Location("Cairo");

	b2.set_id("2");
	b2.set_name("October6th");
	b2.set_Location("Oct");

	bm.insert_first(b1);
	bm.insert_first(b2);

	bm.display_info();

	bm.remove_branch("2");
	bm.display_info();

}

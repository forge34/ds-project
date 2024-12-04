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

void main_logic2()
{
	int number;

	DoctorManager dm;
	PatientManager pm;
	BranchManager bm;
	bool flag = false;

	while (flag != true)
	{
		cout << "List : " << endl;
		cout << "Add & Update Menu :\n1 : Add Doctor\n2 : Add Patient\n3 : Add Hospital Branch\n4 : Update Patient Information\n";
		cout << "Remove Menu :\n5 : Remove Doctor \n6 : Remove Patient \n7 : Remove Hospital Branch \n";
		cout << "Search Menu :\n8 : Search Doctor by ID \n9 : Search Patient by ID \n10 : Search Hospital Branch by ID";
		cout << "\nDisplay Menu : \n11 : Display Doctors \n12 : Display Pateints \n13 : Display Branchs\n14 : Exit\n";
		cout << "Enter number to choose from the list : ";

		cin >> number;
		if (number == 1)
		{
			string info;

			Doctor d;
			cout << "Enter Doctor's name : ";
			cin >> info;
			d.set_name(info);
			cout << "Enter Doctor's ID : ";
			cin >> info;
			d.set_id(info);
			cout << "Enter Doctor's specialization : ";
			cin >> info;
			d.set_spec(info);
			cout << "Enter Doctor's branch : ";
			cin >> info;
			d.set_branch(info);
			dm.insert_first(d);
		}
		else if (number == 2)
		{
			Patient p;
			string info;

			cout << "Enter Patient's name : ";
			cin >> info;
			p.set_name(info);
			cout << "Enter Patient's id : ";
			cin >> info;
			p.set_id(info);
			cout << "Enter Patient's address : ";
			cin >> info;
			p.set_address(info);
		}
		else if (number == 3)
		{
			Branch b;
			string info;

			cout << "Enter Branch name : ";
			cin >> info;
			b.set_name(info);
			cout << "Enter Branch id : ";
			cin >> info;
			b.set_id(info);
			cout << "Enter Branch location : ";
			cin >> info;
			b.set_Location(info);
		}
		else if (number == 6)
		{
			try
			{
				string info;

				cout << "Enter Patient id to remove : ";
				cin >> info;
				pm.remove_patient(info);
			}
			catch (...)
			{
				cout << "Error ! " << endl;
			}
		}
		else if (number == 7)
		{
			try
			{
				string info;

				cout << "Enter Branch id to remove : ";
				cin >> info;
				bm.remove_branch(info);
			}
			catch (...)
			{
				cout << "Error ! " << endl;
			}
		}
		else if (number == 5)
		{
			try
			{
				string info;

				cout << "Enter Doctor id to remove : ";
				cin >> info;
				dm.remove_doctor(info);
			}
			catch (...)
			{
				cout << "Error ! " << endl;
			}
		}
		else if (number == 8)
		{
		}
		else if (number == 9)
		{
			try
			{
				string info;

				cout << "Enter patient id to search : ";
				cin >> info;
				pm.search_by_name(info);
			}
			catch (...)
			{
				cout << "Error ! " << endl;
			}
		}
		else if (number == 10)
		{
			try
			{
				string info;

				cout << "Enter branch id to search : ";
				cin >> info;
				bm.search_by_id(info);
			}
			catch (...)
			{
				cout << "Error ! " << endl;
			}
		}
		else if (number == 11)
		{
			try
			{
				dm.display_doctors();
			}
			catch (...)
			{
				cout << "Error ! " << endl;
			}
		}
	else if (number == 14)
		{
			cout << "Exited !";
			flag = true;
			return;
		}
		else
		{
			cout << "Invalid input ! " << endl;
			return;
		}
	}
}


int main()
{
	//main_logic1();
	//main_logic2();

	PatientManager bm;
	Patient b1;

	b1.set_id("D-4");
	b1.set_name("Grand cair");

	bm.insert_first(b1);

	cout << (bm.search_by_name("Grand cairo"));
}

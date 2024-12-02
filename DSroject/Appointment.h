#pragma once

#include "Doctor.h"
#include "Patient.h"

class Appointment
{
public :
	Doctor doctor;
	Patient patient;
	string time;

	Appointment(Doctor,Patient,string);
};

Appointment::Appointment(Doctor doctor,Patient patient , string time){
	this->doctor = doctor;
	this->patient = patient;
	this->time = time;
}


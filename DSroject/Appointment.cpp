#include "Doctor.h"
#include "Patient.h"
#include "Appointment.h"

Appointment::Appointment(Doctor doctor, Patient patient, string time) {
	this->doctor = doctor;
	this->patient = patient;
	this->time = time;
}
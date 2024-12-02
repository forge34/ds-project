#pragma once

#include <iostream>
using namespace std;

class Patient
{
private:
	string id;
	string name;
	string address;
	string appointment;

public:

	void set_id(string);
	void set_name(string);
	void set_address(string);
	void set_appointment(string);
	string get_id();
	string get_name();
	string get_address();
	string get_appointment();
};
void Patient::set_id(string id) {
	this->id = id;
}
void Patient::set_name(string name) {
	this->name = name;
}
void Patient::set_address(string address) {
	this->address = address;
}
void Patient::set_appointment(string appointment) {
	this->appointment = appointment;
}
string Patient::get_id() {
	return id;
}
string Patient::get_name() {
	return name;
}
string Patient::get_address() {
	return address;
}
string Patient::get_appointment() {
	return appointment;
}
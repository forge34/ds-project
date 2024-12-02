#pragma once
#include <iostream>
using namespace std;

class Branch
{
private:
    string id;
    string name;
    string location;
public:
    AppointmentManager* appointments = new AppointmentManager();
    void display_appointments();
    void set_name(string );
    string get_name();
    void set_id(string);
    string get_id();
    void set_Location(string);
    string get_Location();
};


void Branch::display_appointments() {
    this->appointments->display();
}

void Branch::set_id(string new_id)
{
    this->id = new_id;
}

string Branch::get_id()
{
    return this->id;
}

void Branch::set_name(string new_name)
{
    this->name = new_name;
}

string Branch::get_name()
{
    return this->name;
}

void Branch::set_Location(string location)
{
    this->location = location;
}

string Branch::get_Location()
{
    return this->location;
}
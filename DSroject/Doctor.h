#pragma once
#include "Node.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;


class Doctor 
{
private:
    string id;
    string name;
    string spec;
    string branch; /* TODO : connect it with correct branch */
public:
    void set_id(string);
    void set_name(string);
    void set_spec(string);
    void set_branch(string);
    string get_id();
    string get_name();
    string get_spec();
    string get_branch();
};

void Doctor::set_id(string new_id)
{
    this->id = new_id;
}

void Doctor::set_name(string new_name)
{
    this->name = new_name;
}

void Doctor::set_spec(string new_spec)
{
    this->spec = new_spec;
}

void Doctor::set_branch(string new_branch)
{
    this->branch = new_branch;
}

string Doctor::get_id()
{
    return this->id;
}

string Doctor::get_name()
{
    return this->name;
}

string Doctor::get_spec()
{
    return this->spec;
}

string Doctor::get_branch()
{
    return this->branch;
}

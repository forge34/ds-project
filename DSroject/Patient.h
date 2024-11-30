#pragma once

#include <iostream>

class Patient
{
public:
	void hello();
};

void Patient::hello() {
	std::cout << " Hello";
}
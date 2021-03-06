#include "DoctorClass.h"
#include <string>
#include <iostream>

void DoctorClass::Talk()
{

	std::cout << "\n\n" + Name + " says : Hello There! Im Your friendly BMI Calculation Doctor!";


}

void DoctorClass::WhatToSay(std::string stufftosay)
{

	std::cout << Name <<" : " << stufftosay <<std::endl;

}
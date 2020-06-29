#pragma once
#include "Person.h"
class Teacher : public Person
{
	int WorkHours; float Salary;

public:
	void Set_Salary(float s);
	float Get_Slary();

	void Set_WorkHours(int wa);
	int Get_WorkHours();

};


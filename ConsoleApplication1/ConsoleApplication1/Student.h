#pragma once
#include "Person.h"
#include "Subject.h"
class Student : public Person
{private:
	int Grade; float GPA; Subject Subjects[100]; int SFM = 0; int SC = 0;

public:
	void Set_Grade(int g);
	int Get_Grade();

	void Set_GPA(float gpa);
	float Get_GPA();

	void Add_Subject();
	void Change_SubINFO();
	void Print_Info();
};


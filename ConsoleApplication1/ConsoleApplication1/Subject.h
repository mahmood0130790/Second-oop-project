#pragma once
#include <iostream>
#include<string>
using namespace std;
class Subject
{
private:
	string Name; float Full_mark, Studentmark;

public:
	void Set_Name(string name);
	string Get_Name();

	void Set_Fullmark(float fullmark);
	float Get_Fullmark();

	void Set_Studentmark(float studentmark);
	float Get_Studentmark();

	Subject();
	Subject(string name, float fullmark,float studentmark);

	Subject operator+(Subject a);

};


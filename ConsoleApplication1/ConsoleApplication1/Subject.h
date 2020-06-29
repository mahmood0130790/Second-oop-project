#pragma once
#include <iostream>
#include<string>
using namespace std;
class Subject
{
private:
	string Name; int Full_mark, Studentmarks;

public:
	void Set_Name(string name);
	string Get_Name();

	void Set_Fullmark(int fullmark);
	int Get_Fullmark();

	void Set_Studentmarks(int studentmark);
	int Get_Studentmarks();

	Subject();
	Subject(string name, int fullmark,int studentmarks);

	Subject operator+(Subject a);

};


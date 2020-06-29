#pragma once
#include <iostream>
#include<string>
using namespace std;
class Person
{
	int Age,ID; string Name, Mobile, Email, Address;
public:
	static int AllPersons;

	int Get_ID();

	void Set_Age(int a);
	int Get_Age();

	void Set_Name(string n);
	string Get_Name();

	void Set_Mobile(string m);
	string Get_Mobile();

	void Set_Email(string e);
	string Get_Email();

	void Set_Address(string a);
	string Get_Address();

	void PrintInfo();

	Person();
};


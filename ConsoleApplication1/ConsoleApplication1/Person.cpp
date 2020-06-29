#include "Person.h"


int Person::AllPersons = 0;
int Person::Get_ID() {

	return ID;
}

void Person::Set_Age(int a)
{
	Age = a;
}

int Person::Get_Age()
{
	return Age;
}

void Person::Set_Name(string n)
{
	Name = n;
}

string Person::Get_Name()
{
	return Name;
}

void Person::Set_Mobile(string m)
{
	Mobile = m;
}

string Person::Get_Mobile()
{
	return Mobile;
}

void Person::Set_Email(string e)
{
	Email = e;
}

string Person::Get_Email()
{
	return Email;
}

void Person::Set_Address(string a)
{
	Address = a;
}

string Person::Get_Address()
{
	return Address;
}

void Person::PrintInfo()
{
	cout <<ID <<' '<<Name << ' '<<Age << ' '<<Mobile << ' '<<Email << ' '<<Address;
}

Person::Person()
{
	AllPersons++;
	ID = AllPersons;
}

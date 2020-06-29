
#include <iostream>
#include "Subject.h"
#include "Person.h"
#include "Student.h"
using namespace std;
int What() {

	cout << "Add a subject press 1" << endl;
	cout << "Change a subject info press 2" << endl;
	cout << "Print student's info press 3" << endl;
	cout << "Press 0 to quit" << endl;
	int What; cin >> What;
	return What;

}
int main()
{
	Student s; int ETL7_BRA = 1;
	while (ETL7_BRA!=0) {
		int sign = What();
		switch (sign)
		{
		case 1: s.Add_Subject();  cout << endl << endl << endl; break;
		case 2: s.Change_SubINFO();  cout << endl << endl << endl; break;
		case 3: s.Print_Info(); cout << endl << endl << endl; break;
		case 0: ETL7_BRA = sign; cout << endl << endl << endl; break;
		default:cout << "Wrong Ans REENTER"; cout << endl << endl << endl;
			break;
		}
	}
	return 0;
}


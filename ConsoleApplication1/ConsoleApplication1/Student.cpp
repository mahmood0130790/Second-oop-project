#include "Student.h"

void Student::Set_Grade(int g)
{
	Grade = g;
}

int Student::Get_Grade()
{
	return Grade;
}

void Student::Set_GPA(float gpa)
{
	GPA = gpa;
}

float Student::Get_GPA()
{
	return GPA;
}

void Student::Add_Subject()
{
	
	string s; int FM;

	cout << "Waht's the sub name?"<<endl;
	cin >> s;
	Subjects[SC].Set_Name(s);

	cout <<"Enter full mark "<<endl;
	cin >> FM;
	Subjects[SC].Set_Fullmark(FM);

	
	
	SFM = SFM + Subjects[SC].Get_Fullmark();
	
	SC++;
}

void Student:: Change_SubINFO() {
	string s; int FM;
	
	cout << "Waht's the sub name?" << endl;
	cin >> s;
	cout << "Enter full mark " << endl;
	cin >> FM;
	
	for (int i = 1; i <=SC; i++) {
		if (Subjects[i-1].Get_Name() == s) {
			SFM = SFM+  FM - Subjects[i - 1].Get_Fullmark();
			Subjects[i - 1].Set_Fullmark(FM);  break;
		}
	}
}

void Student::Print_Info() {
	
	cout << "Total Marks : " << SFM;
}
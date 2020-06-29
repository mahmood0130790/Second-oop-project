#include "Subject.h"

void Subject::Set_Name(string name)
{
	Name = name;
}
string Subject::Get_Name()
	{
		return Name;
	}

	void Subject::Set_Fullmark(int fullmark)
	{
		Full_mark = fullmark;
	}

	int Subject::Get_Fullmark()
	{
		return Full_mark;
	}

	void Subject::Set_Studentmarks(int studentmarks)
	{
		Studentmarks = studentmarks;
	}

	int Subject::Get_Studentmarks()
	{
		return Studentmarks;
	}

	Subject::Subject()
	{
	}

	Subject::Subject(string name, int fullmark, int studentmarks)
	{
		Name = name; Full_mark = fullmark; Studentmarks = studentmarks;
	}

	Subject Subject::operator+(Subject a)
	{
		Subject Result;
		Result.Set_Name(Name);
		Result.Set_Fullmark(Full_mark);
		Result.Set_Studentmarks(a.Get_Studentmarks() + Full_mark);
		return Result;
	}

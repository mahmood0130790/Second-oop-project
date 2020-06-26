#include "Subject.h"

void Subject::Set_Name(string name)
{
	Name = name;
}
	string Subject::Get_Name()
	{
		return Name;
	}

	void Subject::Set_Fullmark(float fullmark)
	{
		Full_mark = fullmark;
	}

	float Subject::Get_Fullmark()
	{
		return Full_mark;
	}

	void Subject::Set_Studentmark(float studentmark)
	{
		Studentmark = studentmark;
	}

	float Subject::Get_Studentmark()
	{
		return Studentmark;
	}

	Subject::Subject()
	{
	}

	Subject::Subject(string name, float fullmark, float studentmark)
	{
		Name = name; Full_mark = fullmark; Studentmark = studentmark;
	}

	Subject Subject::operator+(Subject a)
	{
		Subject Result;
		Result.Set_Name(Name);
		Result.Set_Fullmark(a.Get_Fullmark()+Full_mark);
		Result.Set_Studentmark(a.Get_Studentmark + Studentmark);
		return Result;
	}

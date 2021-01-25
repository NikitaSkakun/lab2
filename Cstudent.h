#include <iostream>
#include "Cperson.h"

using namespace std;

class Cstudent : protected Cperson
{
private:
	string name_facult;
	int group;

public:
	Cstudent()
	{
		name_facult = "IBAS";
		group = 22;
	}

	void input_stud();

	string GetName_Facult() { return name_facult; }
	int GetGroup() { return group; }

	void SetName_Facult(string Name_Facult) { this->name_facult = Name_Facult; }
	void SetGroup(int Group) { this->group = Group; }

	~Cstudent() { cout << "Destructor(Cstudent) is working" << endl; }

};
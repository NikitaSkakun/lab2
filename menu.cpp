#include <iostream>
#include "Cperson.h"
#include "Cstudent.h"

using namespace std;

Cperson::Cperson()
{
	name = "Skakun";
	year = "23.11.2001";
}
void Cperson::input()
{
	string Name;
	cout << "Enter name: ";
	cin >> Name;
	this->SetName(Name);

	string Year;
	cout << "Enter year: ";
	cin >> Year;
	this->SetYear(Year);
}
Cperson::~Cperson()
{
	cout << "Destructor(Cperson) is working" << endl;
}

void Cstudent::input_stud()
{
	input();

	cout << "\nEnter name of facult: ";
	cin >> name_facult;

	cout << "Enter number group: ";
	cin >> group;
}

void Menu()
{
	Cstudent Nikita;
	Nikita.input_stud();
}
#include "PhoneBook.h"
#include <iostream>
using namespace std;

PhoneBook::PhoneBook()
{
	Name = nullptr;
	inf = nullptr;
}

PhoneBook::~PhoneBook()
{
	if (Name != nullptr)
	{
		delete[]Name;
	}

	if (inf != nullptr)
	{
		delete[]inf;
	}
}

void PhoneBook::NewAbon(const char* n, int mob, const char* i, int home, int rab)
{
	SetName(n);
	SetInfo(i);
	Set_home(home);
	Set_rab (rab);
	Set_mobile (mob);
}

void PhoneBook::Show()
{
	cout << Name <<"\n";
	cout << "��������� " << mobile << "\n";
	cout << "������� " << tel_rab << "\n";
	cout << "��������  " << tel_home << "\n";
	cout << inf << "\n";
	cout << "--------------------------------\n";
}



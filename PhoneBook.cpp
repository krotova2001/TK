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

void PhoneBook::NewAbon(const char* n, int mob, const char* i, int home = 0, int rab = 0)
{
	if (Name != nullptr) delete[]Name;
	Name = new char[strlen(n) + 1];
	strcpy_s(Name, strlen(n) + 1, n);

	if (inf != nullptr) delete[]inf;
	inf = new char[strlen(i) + 1];
	strcpy_s(Name, strlen(i) + 1, i);

	tel_home = home;
	tel_rab = rab;
	mobile = mob;
}

void PhoneBook::Show()
{
	cout << Name <<"\n";
	cout << "Мобильный " << mobile << "\n";
	cout << "Рабочий " << tel_rab << "\n";
	cout << "Домашний  " << tel_home << "\n";
	cout << inf << "\n";
	cout << "--------------------------------\n";

}



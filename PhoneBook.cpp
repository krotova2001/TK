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

void PhoneBook::NewAbon(const char* n, unsigned long long int mob, const char* i, unsigned long long int home, unsigned long long int rab)
{
	SetName(n);
	Set_mobile(mob);
	SetInfo(i);
	Set_home(home);
	Set_rab (rab);
}

void PhoneBook::Show()
{
	cout << "number - " <<id<< "\n";
	cout << Name <<"\n";
	cout << "Мобильный " << mobile << "\n";
	cout << "Рабочий " << tel_rab << "\n";
	cout << "Домашний  " << tel_home << "\n";
	cout << inf << "\n";
	cout << "--------------------------------\n";
}



#include "PhoneBook.h"
#include <iostream>
using namespace std;

PhoneBook::PhoneBook()
{
	
}

PhoneBook::~PhoneBook()
{
	
}

void PhoneBook::NewAbon(char* n, unsigned long long int mob, char* i, unsigned long long int home, unsigned long long int rab)
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



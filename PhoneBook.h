#pragma once
#include <iostream>

class PhoneBook
{
private:
	char* Name;
	unsigned long long int tel_home;
	unsigned long long int tel_rab;
	unsigned long long int mobile;
	char* inf;
	int id;
public:
	PhoneBook(); // конструктор
	~PhoneBook(); // деструктор
	void NewAbon(const char* n, unsigned long long int mob, const char* i, unsigned long long int home, unsigned long long int rab); // инициализатор
	void Show(); // отображение записи

	//ниже идет набор сеттеров для параметров записи
	void SetName(const char* n)
	{
		if (Name != nullptr)
		{
			delete[]Name;
		}
		Name = new char[strlen(n) + 1];
		strcpy_s(Name, strlen(n) + 1, n);
	}

	void SetInfo(const char* i)
	{
		if (inf != nullptr)
		{
			delete[]inf;
		}
		inf = new char[strlen(i) + 1];
		strcpy_s(inf, strlen(i) + 1, i);
	}

	void Set_home(unsigned long long int phone)
	{
		tel_home = phone;
	}
	void Set_rab(unsigned long long int phone)
	{
		tel_rab = phone;
	}
	void Set_mobile(unsigned long long int phone)
	{
		mobile = phone;
	}
	void Set_id(int num)
	{
		id = num;
	}
};


#pragma once
#include <iostream>

class PhoneBook
{
private:
	char* Name;
	int tel_home;
	int tel_rab;
	int mobile;
	char* inf;
public:
	PhoneBook(); // конструктор
	~PhoneBook(); // деструктор
	void NewAbon(const char* n, int mob, const char* i, int home, int rab); // инициализатор
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

	void Set_home(int phone)
	{
		tel_home = phone;
	}
	void Set_rab(int phone)
	{
		tel_rab = phone;
	}
	void Set_mobile(int phone)
	{
		mobile = phone;
	}
};


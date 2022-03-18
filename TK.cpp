﻿#include <iostream>
#include "PhoneBook.h"
using namespace std;

PhoneBook* Add_new(PhoneBook* BD, int* size)
 {
	PhoneBook Abon;
	PhoneBook* BD_new = new PhoneBook[(* size) + 1];
	int mob, rab, home;
	char Name[30];
	char inf[100];
	cout << "Введите имя\n";
	cin >> Name;
	cout << "Введите мобильный телефон\n";
	cin >> mob;
	cout << "Введите домашний телефон\n";
	cin >> home;
	cout << "Введите рабочий телефон\n";
	cin >> rab;
	cout << "Дополнительная информация\n";
	cin >> inf;
	Abon.NewAbon(Name, mob, inf, home, rab);
	for (int i = 0; i < *size; i++)
	{
		BD_new[i] = BD[i];
	}

	BD_new[(* size)] = Abon;
	delete[] BD;
	(* size)++;
	return BD_new;
}

void Show_all(PhoneBook* BD, int size)
{
	for (int i = 0; i < size; i++)
	{
		BD[i].Show();
		cout << "--------------\n";
	}
}



int main()
{
	setlocale(LC_ALL, "Russian");
	int sel; // выбор для меню
	int size = 0;
	PhoneBook* BD = new PhoneBook[size]; // все элементы класса надо хранить организованно, если мы хотим их все вместе показывать 

	do 
	{
		cout << "Просмотр всех абонентов------1\n";
		cout << "Добавление абонента----------2\n";
		cout << "Удаление абонента------------3\n";
		cout << "Поиск абонента по телефону---4\n";
		cout << "Поиск абонента по имени------5\n";
		cout << "Выход------------------------0\n";

	cin >> sel;
	
	switch (sel)
		{
	case 1:
		Show_all(BD, size);
		break;
	case 2:
		BD = Add_new(BD, &size);
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
		}
	} 
	
	while (sel != 0);
}

#include <iostream>
#include "PhoneBook.h"
using namespace std;

PhoneBook* Add_new(PhoneBook* BD, int* size)
 {
	PhoneBook Abon;
	PhoneBook* BD_new = new PhoneBook[(* size) + 1];
	unsigned long long int mob, rab, home;
	char Name[30]; // ������� ������������ ������� ��������� �����
	char inf[100];
	cout << "������� ���\n";
	cin >> Name;
	cout << "������� ��������� �������\n";
	cin >> mob;
	cout << "������� �������� �������\n";
	cin >> home;
	cout << "������� ������� �������\n";
	cin >> rab;
	cout << "�������������� ����������\n";
	cin.get(); // ����� ������� cin.getline ������������ ���������, ����� ����� ��� ��������� \n �� ������, ��� ��� cin>> �� ��� ���������
	cin.getline(inf, 99);
	Abon.NewAbon(Name, mob, inf, home, rab); // ��������� �������������
	Abon.Set_id((*size) + 1);
	for (int i = 0; i < *size; i++)
	{
		BD_new[i] = BD[i];
	}

	BD_new[(* size)] = Abon;
	delete[]BD;
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

PhoneBook* Delete_phone(PhoneBook* BD, int* size, int id) //������� �������� ������. ��������� ������ �������, ������ � ID
{
	PhoneBook* BD_new = new PhoneBook[(*size) - 1]; // ������� ����� ���� ���������, �� 1 ������ ��� ����
	//��������� � ���� ������ ������� ���� �� ���������� ��������
	for (int i = 0; i < (id - 1); i++)
	{
		BD_new[i] = BD[i]; // ��������� �� ����
	}
	//� ����� ���������� ��������
	for (int i = (id - 1); i < (*size) - 1; i++)
	{
		BD_new[i] = BD[i + 1]; // 
	}
	(*size)--; // ������ ����������
	delete[]BD; //������� ������
	return BD_new; // ���������� ��������� �� ��������� ��
}

void Search_tel(PhoneBook* BD, int* size) // ������� ������ �� ��������. ��������� ���� � �������, ���� ����������� �� ���� ����� ���������
{
	unsigned long long int tel; // 
	cout << "������� �������\n";
	cin >> tel; // ��������� ������� ������� ����

	//����������� �� ���� ��������� ���������������� �������� ���� � ������ � ���������� ��� ������� �� ���������
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			unsigned long long temp_tel = BD[i].Get_tel()[j]; // ��������� ��������, ���� ����������� ���� �� ��������� �������
			if (tel == temp_tel) BD[i].Show();
		}
	}
}

void Search_name(PhoneBook* BD, int* size)
{
	char Name_s[30];
	int equal = 0; // ������� ����������
	cout << "������� ���\n";
	cin >> Name_s;
	for (int i = 0; i < *size; i++)
	{
		if (_strnicmp(Name_s, BD[i].Get_name(), 2) == 0)//���� ���� �� ������ ��� ������� � �������� �������� - ������� ���������
		{
			(*BD).Show();
			equal++; // ����������� ������� �����������
		}
	}
	if (equal != 0) cout << "������� " << equal << " ����������\n";
	if (equal == 0)  cout << "���������� �� �������\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int sel; // ����� ��� ����
	int size = 0;
	PhoneBook* BD = new PhoneBook[size]; // ��� �������� ������ ���� ������� �������������, ���� �� ����� �� ��� ������ ���������� 

	do 
	{
		cout << "�������� ���� ���������------1\n";
		cout << "���������� ��������----------2\n";
		cout << "�������� ��������------------3\n";
		cout << "����� �������� �� ��������---4\n";
		cout << "����� �������� �� �����------5\n";
		cout << "�����------------------------0\n";

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
		int choise2;
		cout << "������� ����� ������ \n";
		cin >> choise2;
		BD = Delete_phone(BD, &size, choise2);
		break;
	case 4:
		Search_tel(BD, &size);
		break;
	case 5:
		Search_name(BD, &size);
		break;
		}
	} 
	
	while (sel != 0);
}

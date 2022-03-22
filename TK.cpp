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
		break;
	case 5:
		break;
		}
	} 
	
	while (sel != 0);
}

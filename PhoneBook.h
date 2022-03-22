#pragma once
#include <iostream>

class PhoneBook
{
private:
	char Name[30];
	unsigned long long int tel_home;
	unsigned long long int tel_rab;
	unsigned long long int mobile;
	char inf[100];
	int id;
public:
	PhoneBook(); // �����������
	~PhoneBook(); // ����������
	void NewAbon( char *n, unsigned long long int mob, char *i, unsigned long long int home, unsigned long long int rab); // �������������
	void Show(); // ����������� ������

	//���� ���� ����� �������� ��� ���������� ������
	void SetName(char* n)
	{
		strcpy_s(Name, 30 , n);
	}

	void SetInfo(char* i)
	{
		strcpy_s(inf, 100 ,i);
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


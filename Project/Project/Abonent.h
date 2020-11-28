#pragma once
#include <iostream>

#pragma warning (disable:4996)

class Abonent
{
private:

	char* number; // �����

	char* oparatorCode; // ��� ���������

	double callDuration; // ������������ ������

public:

	Abonent(); // ����������� �����������

	Abonent(char* number); // ����������� ����������� �����

	Abonent(char* number, double callDuration); // ����������� ����������� ����� � ������������ ������

	bool* Equals(Abonent* other); // ����� ���������

	void Show(); // ����� ������ �� �����
};


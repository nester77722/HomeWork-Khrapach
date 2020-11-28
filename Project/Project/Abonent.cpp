#include "Abonent.h"

Abonent::Abonent()
{
	callDuration = 0;

	number = new char[11];
	strcpy(number, "");

	oparatorCode = new char[4];
	strcpy(oparatorCode, "");
}

Abonent::Abonent(char* number)
{
	callDuration = 0;

	this->number = new char[11];
	for (int i = 0; i < 10; i++)
	{
		this->number[i] = number[i];
	}

	this->number[10] = '\0';

	oparatorCode = new char[4];

	for (int i = 0; i < 3; i++)
	{
		oparatorCode[i] = this->number[i];
	}

	oparatorCode[3] = '\0';
}

Abonent::Abonent(char* number, double callDuration)
{
	this->callDuration = callDuration;

	this->number = new char[11];
	for (int i = 0; i < 10; i++)
	{
		this->number[i] = number[i];
	}

	this->number[10] = '\0';

	oparatorCode = new char[4];

	for (int i = 0; i < 3; i++)
	{
		oparatorCode[i] = this->number[i];
	}

	oparatorCode[3] = '\0';
}

bool* Abonent::Equals(Abonent* other)
{
	bool result;

	result = ((strcmp(this->number, other->number) == 0) && (this->callDuration == other->callDuration));

	return &result;
}

void Abonent::Show()
{
	using namespace std;

	cout << "Номер телефона: " << number << "\tКод: " << oparatorCode << "\tДлительность звонка: " << callDuration << endl;
}

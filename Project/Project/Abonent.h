#pragma once
#include <iostream>

#pragma warning (disable:4996)

class Abonent
{
private:

	char* number; // Номер

	char* oparatorCode; // Код оператора

	double callDuration; // Длительность звонка

public:

	Abonent(); // Стандартный конструктор

	Abonent(char* number); // Конструктор принимающий номер

	Abonent(char* number, double callDuration); // Конструктор принимающий номер и длительность звонка

	bool* Equals(Abonent* other); // Метод сравнения

	void Show(); // Метод вывода на экран
};


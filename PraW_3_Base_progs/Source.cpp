//#define _CRT_SECURE_NO_WARNINGS
//#define N 10
#define M 200

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

void main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/*Напишите программу, решающую задачу, соответствующую вашему индивидуальному заданию. 
	Для решения задачи сначала используйте символьный массив как строку, 
	а затем напишите решение с использованием типа string.
	Все результаты работы программ необходимо выводить на экран.*/

	/*Ввести строку с клавиатуры. Проверить, является ли она правильным идентификатором
	(может содержать цифры, символы латинского алфавита, знаки подчеркивания,
	начинается с символа подчеркивания или латинского символа).*/

	char vari[M]{'\0'};
	int len, countE(0), errLen;

	cout << "Enter variable: ";
	cin>>vari;
	len = strlen(vari);
	
	if (isdigit(vari[0])!=0) countE++;

	for (int i = 0; i < len; i++) {

		if ( isalpha(vari[i]) || isdigit(vari[i]) ) countE++;

		if (vari[i] != '_') countE--;

		cout << vari[i];
	}

	cout << endl;

	if (countE == 0) {
		cout << "можно использовать";
	}

	else {
		cout << "нельзя использовать";
	}

	cout << endl << "Кол-во ошибок: " << abs(countE) << endl << endl;
}

void main2() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string vari;
	int len, countE(0), errLen;

	cout << "Enter variable: ";
	getline(cin, vari);
	len = vari.length();

	if (isdigit(vari[0]) != 0) countE++;

	for (int i = 0; i < len; i++) {

		if (isalpha(vari[i]) || isdigit(vari[i])) countE++;

		if (vari[i] != '_') countE--;

		cout << vari[i];
	}

	cout << endl;

	if (countE == 0) {
		cout << "можно использовать";
	}

	else {
		cout << "нельзя использовать";
	}

	cout << endl << "Кол-во ошибок: " << abs(countE) << endl << endl;
}
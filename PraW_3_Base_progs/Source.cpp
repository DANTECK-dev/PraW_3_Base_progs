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

	/*�������� ���������, �������� ������, ��������������� ������ ��������������� �������. 
	��� ������� ������ ������� ����������� ���������� ������ ��� ������, 
	� ����� �������� ������� � �������������� ���� string.
	��� ���������� ������ �������� ���������� �������� �� �����.*/

	/*������ ������ � ����������. ���������, �������� �� ��� ���������� ���������������
	(����� ��������� �����, ������� ���������� ��������, ����� �������������,
	���������� � ������� ������������� ��� ���������� �������).*/

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
		cout << "����� ������������";
	}

	else {
		cout << "������ ������������";
	}

	cout << endl;

	//cout << countE << endl;

	
}
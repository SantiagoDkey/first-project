// sorting_choices.cpp: ���������� ����� ����� ��� ����������� ����������.

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void choicesSort(int*, int); // �������� ������� ���������� �������

int main(int argc, char* argv[])
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "������� ������ ������� : ";
	int size_array; // ������ �������
	cin >> size_array;

	int *sorted_array = new int[size_array]; // ���������� ������������ ������
	for (int counter = 0; counter < size_array; counter++)
	{
		sorted_array[counter] = rand() % 100; // ��������� ������ ���������� �������
		cout << setw(2) << sorted_array[counter] << "  "; // ����� ������� �� �����
	}
	cout << "\n\n";

	choicesSort(sorted_array, size_array); 

	for (int counter = 0; counter < size_array; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; // ������ ���������������� �������
	}
	cout << "\n";
	delete[] sorted_array; // ������������ ������
	system("pause");
	return 0;
}

void choicesSort(int* arrayPtr, int length_array) // ���������� �������
{
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
	{
		int temp = arrayPtr[0]; // ��������� ���������� ��� �������� �������� ������������
		for (int element_counter = repeat_counter + 1; element_counter < length_array; element_counter++)
		{
			if (arrayPtr[repeat_counter] > arrayPtr[element_counter])
			{
				temp = arrayPtr[repeat_counter];
				arrayPtr[repeat_counter] = arrayPtr[element_counter];
				arrayPtr[element_counter] = temp;
			}
		}
	}
}
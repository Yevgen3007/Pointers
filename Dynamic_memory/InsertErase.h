#pragma once
#include"stdafx.h"
int* Insert(int arr[], int& n)
{
	int insert_erase_index;
	cout << "Куда вставляем? : "; cin >> insert_erase_index; cout << endl;
	int n_new = n + 1;
	int* arr_temp = new int[n_new];
	for (int i = 0; i < insert_erase_index; i++)
	{
		*(arr_temp + i) = arr[i];
	}
	cout << "Введите дополнительное значение: "; cin >> arr_temp[insert_erase_index]; cout << endl;
	for (int i = insert_erase_index + 1; i < n_new; i++)
	{
		*(arr_temp + i) = arr[i - 1];
	}
	delete[]arr;
	n = n_new;
	return arr_temp;
}
int* Erase(int arr[], int& n)
{
	int insert_erase_index;
	cout << "Откуда удаляем? : "; cin >> insert_erase_index; cout << endl;
	int n_new = n - 1;
	int* arr_temp = new int[n_new];
	for (int i = 0; i < insert_erase_index; i++)
	{
		*(arr_temp + i) = arr[i];
	}
	for (int i = insert_erase_index + 1; i < n_new; i++)
	{
		*(arr_temp + i) = arr[i + 1];
	}
	delete[]arr;
	n = n_new;
	return arr_temp;
}
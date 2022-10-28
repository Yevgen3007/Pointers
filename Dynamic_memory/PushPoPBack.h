#pragma once
#include"stdafx.h"
int* Push_back(int arr[], int& n)
{
	int plus_minus_elem;
	cout << "На сколько расширяем? : "; cin >> plus_minus_elem; cout << endl;
	int n_new = n + plus_minus_elem;
	int* arr_temp = new int[n_new];
	for (int i = 0; i < n; i++)
	{
		*(arr_temp + i) = arr[i];
	}
	for (int i = n; i < n_new; i++)
	{
		cout << "Введите дополнительное значение: "; cin >> arr_temp[i]; cout << endl;
	}
	delete[]arr;
	n = n_new;
	return arr_temp;
}
int* Pop_back(int arr[], int& n)
{
	int plus_minus_elem;
	cout << "Cколько удаляем? : "; cin >> plus_minus_elem; cout << endl;
	int n_new = n - plus_minus_elem;
	int* arr_temp = new int[n_new];
	for (int i = 0; i < n_new; i++)
	{
		*(arr_temp + i) = arr[i];
	}
	delete[]arr;
	n = n_new;
	return arr_temp;
}
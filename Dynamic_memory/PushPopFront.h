#pragma once
#include"stdafx.h"
int* Push_front(int arr[], int& n)
{
	int plus_minus_elem;
	cout << "На сколько расширяем? : "; cin >> plus_minus_elem; cout << endl;
	int n_new = n + plus_minus_elem;
	int* arr_temp = new int[n_new];
	for (int i = plus_minus_elem; i < n_new; i++)
	{
		*(arr_temp + i) = arr[i - plus_minus_elem];
	}
	for (int i = 0; i < plus_minus_elem; i++)
	{
		cout << "Введите дополнительное значение: "; cin >> arr_temp[i]; cout << endl;
	}
	delete[]arr;
	n = n_new;
	return arr_temp;
}
int* Pop_front(int arr[], int& n)
{
	int plus_minus_elem;
	cout << "Cколько удаляем? : "; cin >> plus_minus_elem; cout << endl;
	int n_new = n - plus_minus_elem;
	int* arr_temp = new int[n_new];
	for (int i = 0; i < n_new; i++)
	{
		*(arr_temp + i) = arr[i + plus_minus_elem];
	}
	delete[]arr;
	n = n_new;
	return arr_temp;
}
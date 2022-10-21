#pragma once
#include "Stdafx.h"
#include "PrintArr.h"
void Split(int arr[], int N)
{
	int len_odd = 0;
	int len_even = 0;
	int odd_index = 0;
	int even_index = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 != 0) len_odd++;
		else len_even++;
	}
	int* odd = new int[len_odd];
	int* even = new int[len_even];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 != 0)
		{
			odd[odd_index] = arr[i];
			odd_index++;
		}
		else
		{
			even[even_index] = arr[i];
			even_index++;
		}
	}
	cout << "\t" << "Нечетные значения" << endl;
	PrintArr(odd, len_odd);
	cout << endl;
	cout << "\t" << "Четные значения" << endl;
	PrintArr(even, len_even);
	cout << endl;
	delete[]odd;
	delete[]even;
}

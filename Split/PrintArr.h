#pragma once
#include "Stdafx.h"
template<typename T> void PrintArr(T arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
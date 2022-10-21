#include "Stdafx.h"
#include "FillRand.h"
#include "PrintArr.h"
#include"Split.h"
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N];
	FillRand(arr, N);
	cout << "\t" << "Исходный массив" << endl;
	PrintArr(arr, N);
	cout << endl;
	Split(arr, N);
}

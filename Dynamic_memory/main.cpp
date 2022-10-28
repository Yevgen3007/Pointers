#include "stdafx.h"
#include"FillRand_PrintArr.h"
#include"PushPopBack.h"
#include"PushPopFront.h"
#include"InsertErase.h"
void main()
{
	do
	{

		setlocale(LC_ALL, "");
		cout << '\t' << "Создание массива из случайных чисел" << endl<<endl;
		int n_0;
		cout << "Введите размер массива: "; cin >> n_0;
		int n = n_0;
		int* arr = new int[n];
		FillRand(arr, n);
		PrintArr(arr, n);
		cout << endl;
		cout << '\t' << "Изменение массива" << endl<<endl;
		int what_you_want;
		cout << "Что требуется сделать?" << endl<<endl;
		cout << "1 - добавление элементов в конце" << endl << "2 - добавление элементов в начале" << endl << "3 - добавление элемента по индексу" << endl;
		cout << "4 - удаление элементов в конце" << endl << "5 - удаление элементов в начале" << endl << "6 - удаление элемента по индексу" << endl;
		cout << endl;
		cin >> what_you_want;
		cout << endl;
		switch (what_you_want)
		{
		case 1:
		{
			arr = Push_back(arr, n);
			PrintArr(arr, n);
		} break;
		case 2:
		{
			arr = Push_front(arr, n);
			PrintArr(arr, n);
		} break;
		case 3:
		{
			arr = Insert(arr, n);
			PrintArr(arr, n);
		} break;
		case 4:
		{
			arr = Pop_back(arr, n);
			PrintArr(arr, n);
		} break;
		case 5:
		{
			arr = Pop_front(arr, n);
			PrintArr(arr, n);
		} break;
		case 6:
		{
			arr = Erase(arr, n);
			PrintArr(arr, n);
		} break;
		default:
			exit;
		}
		delete[]arr;
	} while (true); //Бесконечный цикл для проверки функций
}
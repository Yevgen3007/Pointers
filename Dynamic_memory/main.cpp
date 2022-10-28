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
		cout << '\t' << "�������� ������� �� ��������� �����" << endl<<endl;
		int n_0;
		cout << "������� ������ �������: "; cin >> n_0;
		int n = n_0;
		int* arr = new int[n];
		FillRand(arr, n);
		PrintArr(arr, n);
		cout << endl;
		cout << '\t' << "��������� �������" << endl<<endl;
		int what_you_want;
		cout << "��� ��������� �������?" << endl<<endl;
		cout << "1 - ���������� ��������� � �����" << endl << "2 - ���������� ��������� � ������" << endl << "3 - ���������� �������� �� �������" << endl;
		cout << "4 - �������� ��������� � �����" << endl << "5 - �������� ��������� � ������" << endl << "6 - �������� �������� �� �������" << endl;
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
	} while (true); //����������� ���� ��� �������� �������
}
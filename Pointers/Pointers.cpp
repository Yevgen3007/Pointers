#include <iostream>
using namespace std;
void poiters_basics()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;

	int* pb; //создание указателя на int
	int b = 3;
	pb = &b; //инициализация указателя на int
	cout << b << endl;
	cout << pb << endl;
}
void main()
{
	const int n = 5;
	short arr[n] = { 1,3,5,7,9 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << endl;
	}
}
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << '\t';
	}
	delete[] arr;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << '\t';
	}
}
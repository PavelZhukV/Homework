#include"stdafx.h"
#include<iostream>

using namespace std;

void DisplayArray(int array[], int n);
void GenerateRandomArray(int array[], int n, int range);
void EnterArray(int array[], int n);
void SignArray(int array[], int n, int & plus, int & minus, int & zero);


int main()
{
	const int N = 100;
	int array[N] = { 0 };
	int n, plus = 0, minus = 0, zero = 0;
	while (true)
	{
		cout << "Enter n <= " << N << endl;
		cin >> n;
		if (n >= 1 && n <= N)
		{
			break;
		}
		cout << "try again" << endl;
	}
	system("cls");
	//GenerateRandomArray(array, n, 100);
	EnterArray(array, n);
	DisplayArray(array, n);
	cout << endl;
	SignArray(array,n,plus,minus,zero);
	cout << "positive numbers : " << plus << " " << " ; negative numbers : " << minus << " " << " ; zeroes : " << zero << " ";
	system("pause");
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void GenerateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range;
	}
}

void EnterArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}

void SignArray(int array[], int n, int & plus, int & minus, int & zero)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] > 0)
			plus++;
		if (array[i] < 0)
			minus++;
		if (array[i] == 0)
			zero++;
	}
}
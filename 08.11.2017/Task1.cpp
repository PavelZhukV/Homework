#include"stdafx.h"
#include<iostream>

using namespace std;

void Swap(int& a, int& b);
void DisplayArray(int array[], int n);
void GenerateRandomArray(int array[], int n, int range);
void BubbleSortAscending(int array[], int n);

int main()
{
	const int N = 100;
	int array[N] = { 0 };
	int n;
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
	GenerateRandomArray(array, n, 100);
	DisplayArray(array, n);
	cout << endl;
	BubbleSortAscending(array, n);
	DisplayArray(array, n);
	system("pause");
}


void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
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

void BubbleSortAscending(int array[], int n)
{
	for (int k = 0, i = 0;; k = 0, i = 0)
	{
		for (; i < n - 1; i++)
			if (array[i] > array[i + 1])
			{
				Swap(array[i], array[i + 1]);
				k++;
			}
		if (k == 0)
			break;
	}
}
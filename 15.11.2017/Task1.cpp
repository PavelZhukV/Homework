#include "stdafx.h"
#include<iostream>

using namespace std;

void GenerateRandomArray(int array[], int n, int range);
void Swap(int& a, int& b);
void DisplayArray(int array[], int n);
void enterArrayNumber(int array[], int max, int n);
void inclusionSort(int array[], int n);


int main()
{
	int n;
	int const N = 100;
	int array[N] = { 0 };
	while (true)
	{
		cout << "enter n : ";
		cin >> n;
		if ((n > 0) && (n < N))
			break;
		else
		{
			cout << "Invalid data! Try again";
			system("cls");
		}
	}
	GenerateRandomArray(array, n, 100);
	DisplayArray(array, n);
	cout << endl;
	inclusionSort(array, n);
	DisplayArray(array, n);
	system("pause");
    return 0;
}

void inclusionSort(int array[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int value = array[i]; 
		int index = i;  
		while ((index > 0) && (array[index - 1] > value))
		{  
			array[index] = array[index - 1];
			index--;  
		}
		array[index] = value;
	}
}

void enterArrayNumber(int array[], int max, int n)
{
	while (true)
	{
		cout << "enter n : ";
		cin >> n;
		if ((n > 0) && (n < max))
			break;
		else
		{
			cout << "Invalid data! Try again";
			system("cls");
		}
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void GenerateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range;
	}
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
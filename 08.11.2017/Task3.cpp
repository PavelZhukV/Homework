#include"stdafx.h"
#include<iostream>

using namespace std;

void DisplayArray(int array[], int n);
void GenerateRandomArray(int array[], int n, int range);
void IsSequence(int less, int more, int equal);
void Counter(int array[], int n, int & less, int & more, int & equal);
void EnterArray(int array[], int n);


int main()
{
	const int N = 100;
	int array[N] = { 0 };
	int n,less = 0,more = 0,equal = 0;
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
	Counter(array ,n ,less ,more ,equal );
	cout << "This sequence is  " ;
	IsSequence(less, more, equal);
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

void IsSequence(int less, int more, int equal)
{
	if (less == 0 && more == 0 && equal > 0)
		cout << "monotonus";
	if (less == 0 && more > 0 && equal == 0)
		cout << "increasing";
	if (less > 0 && more == 0 && equal == 0)
		cout << "descending";
	if (less > 0 && more == 0 && equal > 0)
		cout << "not strict descending";
	if (less == 0 && more > 0 && equal > 0)
		cout << "not strict increasing";
	if (less > 0 && more > 0 && equal >= 0)
		cout << "not ordered";
}

void Counter(int array[], int n, int & less, int & more, int & equal)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (array[i] == array[i + 1])
			equal++;
		if (array[i] > array[i + 1])
			less++;
		if (array[i] < array[i + 1])
			more++;
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
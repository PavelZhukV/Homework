#include"stdafx.h"
#include<iostream>

void generateRandomArray(int array[], int n, int range);
void displayArray(int array[], int n);
void firstAndLastZeroNumberArray(int array[], int n, int & firstind, int & lastind);
void displayFirstAndLastZero(int array[], int firstind, int lastind);
int secondTask(int array[], int firstind, int lastind);
void Swap(int& a, int& b);
void deleteElement(int array[], int & n, int i);
void thirdTask(int array[], int & n);
void doLastElement(int array[], int & n, int i);
void fourthTask(int array[], int n);

using namespace std;

int main()
{
	const int N = 256;
	int array[N] = { 0 };
	int firstind = -1, lastind = -1,n = N;

	generateRandomArray(array, n, 100);
	displayArray(array, n);

	cout << endl << "First task : " << endl;
	firstAndLastZeroNumberArray(array, n, firstind, lastind);
	displayFirstAndLastZero(array, firstind, lastind);
	cout << endl << endl;

	if (lastind > 0)
	{
		cout << "Second task : " << secondTask(array, firstind, lastind) << endl << endl;
	}


	cout << "Third task : " << endl;
	thirdTask(array, n);
	displayArray(array, n);
	cout << endl;

	cout << "Fourth task : " << endl;
	fourthTask(array, n);
	displayArray(array, n);


	system("pause");
}

void generateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range - range / 2;
	}
}

void displayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void firstAndLastZeroNumberArray(int array[], int n, int & firstind, int & lastind)
{
	firstind = -1;
	for (int i = 0; i < n; i++)
	{
		if (array[i] == 0)
		{
			if (firstind == -1)
				firstind = i;
			else
				lastind = i;
		}
	}
}

void displayFirstAndLastZero(int array[], int firstind, int lastind)
{
	if (firstind >= 0)
	{
		cout << endl << "First zero : array[" << firstind << "] = " << array[firstind] << endl;
		if (lastind >= 0)
			cout << "Last zero : array[" << lastind << "] = " << array[lastind] << endl;
		else
			cout << "There is one zero number";
	}
	else
		cout << "There are no zero numbers";
}

int secondTask(int array[], int firstind, int lastind)
{
	int pr = 1;
	for (int i = firstind + 1; i < lastind; i++)
	{
		if ((array[i] % 2 == 0) && (array[i] < 0) && (i % 2 == 1))
		{
			pr *= array[i];
		}
	}
	return pr;
}

void deleteElement(int array[], int & n, int i)
{
	for (; i < n; i++)
		Swap(array[i], array[i + 1]);
	n--;
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void thirdTask(int array[], int & n)
{
	for (int i = 0; i < n;)
		if (array[i] > 0 && array[i] != 0)
			deleteElement(array, n, i);
		else
			i++;
}

void fourthTask(int array[], int n)
{
	for (int i = 0; i < n;)
	{
		while (1)
		{
			if (array[n - 1] == 0)
				n--;
			else
				break;
		}
		if (array[i] == 0)
		{
			doLastElement(array, n, i);
		}
		else
			i++;
	}
}

void doLastElement(int array[], int & n, int i)
{
	for (; i < n - 1; i++)
		Swap(array[i], array[i + 1]);
}
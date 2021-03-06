#include "stdafx.h"
#include<iostream>

using namespace std;

void checkSign(char lhs[], char rhs[], int & less, int & more);
void compareOfStrings(char lhs[], char rhs[]);
void toUpper(char array[]);
int getLength(char array[]);
bool isAlphabetLowerCase(char ch);

int main()
{
	int const N = 256;
	char lhs[N], rhs[N];

	cout << "Enter first string :";
	cin.getline(lhs, N);
	cout << "Enter second string :";
	cin.getline(rhs, N);
	compareOfStrings(lhs, rhs);

	system("pause");
	return 0;
}

void checkSign(char lhs[], char rhs[], int & less, int & more)
{
	toUpper(lhs);
	toUpper(rhs);
	int i = 0;
	while (lhs[i] == rhs[i] && lhs[i] == 0 && rhs[i] == 0)
	{
		i++;
	}
	if (lhs[i] > rhs[i])
		more++;
	if (lhs[i] < rhs[i])
		less++;
}

void compareOfStrings(char lhs[], char rhs[])
{
	int less = 0, more = 0;
	checkSign(lhs, rhs, less, more);
	if (more == 1)
	{
		cout << "the first string";
	}
	else
	{
		if (less == 1)
		{
			cout << " the second string";
		}
		else
		{
			cout << "strings are equal";
		}
	}
}

void toUpper(char array[])
{
	int l = getLength(array);
	int diff = 'a' - 'A';

	for (int i = 0; i < l; i++)
	{
		char ch = array[i];

		if (isAlphabetLowerCase(ch))
		{
			array[i] = ch + diff;
		}
	}
}

int getLength(char array[])
{
	int i = 0;

	while (array[i])
	{
		i++;
	}

	return i;
}

bool isAlphabetLowerCase(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}
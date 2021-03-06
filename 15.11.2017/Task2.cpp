#include "stdafx.h"
#include<iostream>

using namespace std;

int getLength(char array[]);
bool equals(char lhs[], char rhs[]);
void resultOfCheckingToStrings(char lhs[], char rhs[]);

int main()
{
	int const N = 256;
	char lhs[N], rhs[N];

	cout << "Enter first string :";
	cin.getline(lhs, N);
	cout << "Enter second string :";
	cin.getline(rhs, N);

	resultOfCheckingToStrings(lhs, rhs);

    return 0;
}

bool equals(char lhs[], char rhs[])
{
	if (getLength(lhs) != getLength(rhs))
	{
		return false;
	}

	int length = getLength(lhs);
	for (int i = 0; i < length; i++)
	{
		if (lhs[i] != rhs[i])
		{
			return false;
		}
	}

	return true;
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

void resultOfCheckingToStrings(char lhs[], char rhs[])
{
	if (equals(lhs, rhs))
		cout << "This strings are equal";
	else
		cout << "this strings aren't equal";
	system("pause");
}
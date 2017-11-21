#include "stdafx.h"
#include<iostream>

using namespace std;

void checkIndex(char string[], char undstring[]);
int valueIndex(char string[], char undstring[]);
int getLength(char array[]);

int main()
{
	int const N = 256;
	char str[N], undstr[N];

	cout << "Enter first string :";
	cin.getline(str, N);
	cout << "Enter  understring :";
	cin.getline(undstr, N);

	checkIndex(str, undstr);

	system("pause");

	return 0;
}

void checkIndex(char string[], char undstring[])
{
	int x = valueIndex(string, undstring);
	if (x >= 0)
		cout << x;
	else
		cout << "string don't include this undstring";
}

int valueIndex(char string[], char undstring[])
{
	int index, counter = 0;
	for (int n = getLength(undstring), k = getLength(string), i = 0; i < (k - n + 1); i++)
	{
		if (string[i] == undstring[0])
		{
			index = i;
			while (i < index + n)
			{
				if (string[i] == undstring[counter])
				{
					counter++;
					i++;
				}
			}
			if (counter != n)
			{
				counter = 0;
				index = -1;
			}
		}

	}
	return index;
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
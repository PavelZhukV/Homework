#include "stdafx.h"
#include<iostream>

using namespace std;

void newString(char string[], char oldundstring[], char newundstring[]);
int valueIndex(char string[], char undstring[]);
int getLength(char array[]);
void substitution(char string[], char newundstring[], int index);

int main()
{
	int const N = 10;
	char str[N], oldstr[N],newstr[N];

	cout << "Enter first string :";
	cin.getline(str, N);
	cout << "Enter  old understring :";
	cin.getline(oldstr, N);
	cout << "Enter new understring :";
	cin.getline(oldstr, N);

	newString(str, oldstr, newstr);
	cout << str;

	system("pause");

	return 0;
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

int valueIndex(char string[], char undstring[])
{
	int index = 0, counter = 0;
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

void newString(char string[], char oldundstring[], char newundstring[])
{
	int i = valueIndex(string, oldundstring), s = getLength(string), o = getLength(oldundstring), n = getLength(newundstring);
	for (; i < s - o; i++)
	{
		if (i < 0)
			break;
		substitution(string, newundstring, i);

		i = valueIndex(string, oldundstring);
	}
}

void substitution(char string[], char newundstring[], char oldundstring[], int index)
{
	int n = getLength(newundstring), s = getLength(string),o =  getLength(oldundstring),diff = n - o;

	if (n > o)
	for (int i = s; i < index ; i--)
	{
		string[i + diff - 1] = string[i - 1];
	}

	if (n < o)
	{
		for (int i = s; i - diff < index; i--)
		{
			string[i + diff - 1] = string[i - 1];
		}
		while (diff > 0)
		{
			string[s + diff - 1] = '/0';
			diff++;
		}
	}

	for (;  n > 0; n--)
	{
		string[index + n] = newundstring[n];
	}
}
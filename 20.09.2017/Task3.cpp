#include "stdafx.h"
#include<iostream>

using namespace std;

void writeNumber(int  x);

int main()
{
	int x;
	cout << "enter number <= 100 : ";
	cin >> x;
	writeNumber(x);
	system("pause");
	return 0;
}

void writeNumber(int  x)
{
	if (x == 0)
		cout << "zero";
	if (x == 100)
		cout << " one hundred";
	if (x % 10 == 1)
		switch (x / 10)
		{
		case 0:
			cout << "ten";
			break;
		case 1:
			cout << "eleven";
			break;
		case 2:
			cout << "twelve";
			break;
		case 3:
			cout << "thirteen";
			break;
		case 4:
			cout << "fourteen";
			break;
		case 5:
			cout << "fifteen";
			break;
		case 6:
			cout << "sixteen";
			break;
		case 7:
			cout << "seventeen";
			break;
		case 8:
			cout << "eighteen";
			break;
		case 9:
			cout << "nineteen";
			break;
		}
	if (x % 10 > 1)
		switch (x / 10)
		{
		case 2:
			cout << "twenty ";
			break;
		case 3:
			cout << "thirty ";
			break;
		case 4:
			cout << "fourty ";
			break;
		case 5:
			cout << "fifty ";
			break;
		case 6:
			cout << "sixty ";
			break;
		case 7:
			cout << "seventy ";
			break;
		case 8:
			cout << "eighty ";
			break;
		case 9:
			cout << "ninety ";
			break;
		}
	switch (x % 10)
	{
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	case 3:
		cout << "three";
		break;
	case 4:
		cout << "four";
		break;
	case 5:
		cout << "five";
		break;
	case 6:
		cout << "six";
		break;
	case 7:
		cout << "seven";
		break;
	case 8:
		cout << "eight";
		break;
	case 9:
		cout << "nine";
		break;
	}
}


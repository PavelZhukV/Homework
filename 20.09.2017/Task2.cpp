#include "stdafx.h"
#include<iostream>

using namespace std;

void Month(int  x);

int main()
{
	int x;
	cout << "enter month : ";
	cin >> x;
	Month(x);
	system("pause");
	return 0;
}

void Month(int  x)
{
	switch (x)
	{
	case 12:
	case 1:
	case 2:
		cout << "winter";
		break;
	case 3:
	case 4:
	case 5:
		cout << "sring";
		break;
	case 6:
	case 7:
	case 8:
		cout << "summer";
		break;
	case 9:
	case 10:
	case 11:
		cout << "autumn";
		break;
	default:
		cout << "invalid data!!!!!!";
	}
}


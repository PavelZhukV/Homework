#include "stdafx.h"
#include<iostream>

using namespace std;

void Mark(int  x);

int main()
{
	int x;
	cout << "enter mark : ";
	cin >> x;
	Mark(x);
	system("pause");
    return 0;
}

void Mark(int  x)
{
	switch (x)
	{
	case 1:
	case 2:
		cout << "was absent";
		break;
	case 3:
	case 4:
		cout << "not satisfactorily";
		break;
	case 5:
	case 6:
		cout << "satisfactorily";
		break;
	case 7:
	case 8:
		cout << "good";
		break;
	case 9:
	case 10:
		cout << "exellent";
		break;
	default:
		cout << "invalid data!!!!!!";
	}
}

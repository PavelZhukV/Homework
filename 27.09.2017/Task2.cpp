#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int pr = 1,n;
	cout << "enter n :";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		pr *= 2;
	}
	cout << pr << endl;
	system("pause");
	return 0;
}

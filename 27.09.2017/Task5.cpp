#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int n;
	double sum = 0, num ;
	cout << "enter n :";
	cin >> n;
	for (double i = 1; i <= n; i++)
	{
		num = 1 / (i * i * i * i * i);
		sum += num;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

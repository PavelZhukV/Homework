#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int n;
	double sum = 0, num = 1,dev = 0;
	cout << "enter n :";
	cin >> n;
	for (double i = 1; i <= n; i++)
	{
		dev += 1 / i;
		num *= i;
		sum += num / dev;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

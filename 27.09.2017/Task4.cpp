#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int n;
	double sum = 0.5, num = 0.5;
	cout << "enter n :";
	cin >> n;
	for (double i = 2; i <= n ; i++)
	{
		num = ((- 1)* num * (i - 1)) /  (i + 1) ;
		sum += num;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

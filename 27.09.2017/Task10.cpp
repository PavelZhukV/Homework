#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;


int main()
{
	int n;
	double sum = 0, num = 0 ;
	cout << "enter n :";
	cin >> n;
	for (double i = 1; i <= n; i++)
	{
		num += sin(i);
		sum += 1 / num;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
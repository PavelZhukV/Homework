#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int n;
	double num = 0 ;
	cout << "enter n :";
	cin >> n;
	for (double i = 1; i <= n; i++)
	{
		num = sqrt(2 + num);
	}
	cout << num << endl;
	system("pause");
	return 0;
}
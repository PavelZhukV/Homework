#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int n;
	double pr = 1, num;
	cout << "enter n :";
	cin >> n;
	for (double i = 1; i <= n; i++)
	{
		num = 1 + 1/(i*i);
		pr *= num;
	}
	cout << pr << endl;
	system("pause");
	return 0;
}

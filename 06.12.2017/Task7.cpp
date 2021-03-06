#include"stdafx.h"
#include<iostream>

using namespace std;

const int N = 100;

void GenerateMatrix(int matrix[][N], int n, int m);
void DisplayMatrix(int matrix[][N], int n, int m);
void funkFirstTask(int matrix[][N], int n);
void Swap(int& a, int& b);
void RandomMatrix(int matrix[][N], int n, int m, int k);

int main()
{
	int matrix[N][N] = { 0 };
	int n = 10;
	
	RandomMatrix(matrix, n, n, 100);
	//GenerateMatrix(matrix, n, n);

	DisplayMatrix(matrix, n, n);
	cout << endl<< endl;

	funkFirstTask(matrix, n);

	DisplayMatrix(matrix, n, n);

	system("pause");
    return 0;
}

void DisplayMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void GenerateMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = i + 1;
		}

	}
}

void funkFirstTask(int matrix[][N], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2; j++)
			Swap(matrix[i][j], matrix[(n / 2) + i][(n / 2) + j]);
		for (int j = n / 2; j < n; j++)
			Swap(matrix[i][j], matrix[(n / 2) + i][j - (n / 2)]);
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void RandomMatrix(int matrix[][N], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % k - k / 2;
		}

	}
}
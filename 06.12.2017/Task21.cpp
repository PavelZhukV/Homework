#include"stdafx.h"
#include<iostream>

using namespace std;

const int N = 100;

void GenerateMatrix(int matrix[][N], int n, int m);
void DisplayMatrix(int matrix[][N], int n, int m);
void Swap(int& a, int& b);
void RandomMatrix(int matrix[][N], int n, int m, int k);
void SwapRows(int matrix[][N], int n, int m, int  i, int j);

int main()
{
	int matrix[N][N] = { 0 };
	int n = 10;

	RandomMatrix(matrix, n, n, 100);
	//GenerateMatrix(matrix, n, n);

	DisplayMatrix(matrix, n, n);
	cout << endl << endl;


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

void SwapRows(int matrix[][N], int n, int m, int  i, int j)
{
	for (int k = 0; k < n; k++)
	{
		int temp = matrix[i][k];
		matrix[i][k] = matrix[j][k];
		matrix[j][k] = temp;

	}
}

void indexOfMaxElement(int matrix[][N], int n, int m, int & x, int & y)
{
	int max = maxElements(matrix, n, m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max == matrix[i][j])
			{
				x = i;
				y = j;
			}
		}
	}
}

int maxElements(int matrix[][N], int n, int m)
{
	int max = matrix[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max < matrix[i][j])
				max = matrix[i][j];
		}
	}

}
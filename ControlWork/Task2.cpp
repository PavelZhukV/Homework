#include"stdafx.h"
#include<iostream>

const int N = 256;

void Swap(int& a, int& b);
void randomMatrix(int matrix[][N], int n, int m, int k);
void displayMatrix(int matrix[][N], int n, int m);
void firstTask(int matrix[][N], int n, int m);
void thirdTask(int matrix[][N], int n, int m,int range);
void generateMatrix(int matrix[][N], int n, int m);
void secondTask(int matrix[][N], int n, int m);
void swapColumn(int matrix[][N], int n, int m, int  i, int j);
void foursTask(int matrix[][N], int n, int m);

using namespace std;

int main()
{
	int n, m,range;
	int matrix[N][N] = { 0 };


	while (1)
	{
		cout << "enter n = ";
		cin >> n;
		cout << "enter m = ";
		cin >> m;
		if (n > m)
			break;
		cout << "Invalid data , try again!";
		system("cls");
	}


	system("cls");
	generateMatrix(matrix, n, m);
    displayMatrix(matrix, n, m);
	cout << endl;


	cout << "First task :" << endl;
	firstTask(matrix, n, m);
	displayMatrix(matrix, n, m);
	cout << endl;


	cout << "Second task :" << endl;
	secondTask(matrix, n, m);
	displayMatrix(matrix, n, m);
	cout << endl;


	while (1)
	{
		cout << "enter range of rectangle = ";
		cin >> range;
		if (m  >= range)
			break;
		cout << "Invalid data , try again!";
		system("cls");
	}
	cout << "Third task :" << endl;
	thirdTask(matrix, n, m, range);
	displayMatrix(matrix, n, m);
	cout << endl;


	cout << "Fourth task :" << endl;
	foursTask(matrix, n, m);
	displayMatrix(matrix, n, m);
	cout << endl;


	cout << "Thank for your attantion!!!";


	system("pause");
}


void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void randomMatrix(int matrix[][N], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % k - k / 2;
		}

	}
}

void displayMatrix(int matrix[][N], int n, int m)
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

void firstTask(int matrix[][N], int n, int m)
{
	for (int j = 0; j < m; j++)
	{
		for (int k = 0, minind = 0; k <= j; k++)
		{
			for (int i = k; i < n; i++)
			{
				if (matrix[i][j] < matrix[minind][j])
					minind = i;
			}
			Swap(matrix[k][j], matrix[minind][j]);
		}
	}
}

void thirdTask(int matrix[][N],int n,int m,int range)
{
	for (int j = m - range, i = 0; j < m; i++, j++)
		for (int k = 0; k <= i; k++)
			Swap(matrix[k][j], matrix[n-1-k][m-1-j]);
}

void generateMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = j-i;
		}

	}
}

void secondTask(int matrix[][N],int n,int m)
{
	for(int j = 0;j < m;j++)
		for (int k = 0, i = j+1;; k = 0,i = j + 1)
		{
			for (; i < n - 1; i++)
				if (matrix[i][j] < matrix[i + 1][j])
				{
					Swap(matrix[i][j], matrix[i + 1][j]);
					k++;
				}
			if (k == 0)
				break;
		}

}

void swapColumn(int matrix[][N], int n, int m, int  i, int j)
{
	for (int k = 0; k < n; k++)
	{
		int temp = matrix[k][i];
		matrix[k][i] = matrix[k][j];
		matrix[k][j] = temp;

	}
}

int sumOfAbsValue(int matrix[][N], int n, int j)
{
	int sum = 0;
	for (int k = 0; k < n; k++)
		sum += abs(matrix[k][j]);
	return sum;
}

void foursTask(int matrix[][N],int n,int m)
{
	for (int k = 0, j = 0;; k = 0, j = 0)
	{
		for (; j < m - 1; j++)
			if (sumOfAbsValue(matrix,n,j) > sumOfAbsValue(matrix,n,j+1) )
			{
				swapColumn(matrix, n, m, j, j + 1);
				k++;
			}
		if (k == 0)
			break;
	}
}
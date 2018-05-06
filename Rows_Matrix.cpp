#include "stdafx.h"
#include <math.h>
#include <string>
#include <iomanip>
#include <iostream>
#pragma warning(disable : 4996)
#include <algorithm> 
using namespace std;


int main()
{
	int a[20][100];
	int *p[10];
	int *q[20];
	int n, k;
	cin >> n>>k;

	int i, j;

	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= k - 1; j++)
		{
			cin >> *(*(a + i) + j);
		}
	}

	//Izvejdane na matricata

	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= k - 1; j++)
		{
			cout << *(*(a + i) + j);
		}
		cout << endl;
	}
	cout << endl;

	//Redove-chetni pozicii

	int m = -1;
	for (i = 0; i <= n - 1; i = i + 2)
	{
		m++;
		*(p + m) = *(a + i);
	}

	//Izvejdane na elementite uvelicheni s 1

	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= k - 1; j++)
		{
			cout << *(*(p + i) + j) + 1;
		}
		cout << endl;
	}

	//Nechetni redove

	int l = -1;
	for (i = 1; i <= n - 1; i = i + 2)
	{
		l++;
		q[l] = a[i];
	}

	//Izvejdane na uvelichenite elementi s 2 

	for (i = 0; i <= l; i++)
	{
		for (j = 0; j <= k - 1; j++)
		{
			cout << *(*(q + i) + j) + 2;
		}
		cout << endl;
	}

	//Sumirane na 2-te matrici ako n e chetno 

	if (n % 2 == 0)
	{
		for (i = 0; i <= m; i++)
		{
			for (j = 0; j <= k - 1; j++)
			{
				cout << *(*(p + i) + j) + *(*(q + i) + j);
			}
			cout << endl;
		}
	}


	return 0;
}

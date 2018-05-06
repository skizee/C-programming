// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
#include <algorithm> 
using namespace std;


int main()
{

	int a[20];
	int b[20];
	int c[20];
	int m,n;
	cout << "size: " << endl;
	cin >> m >> n;

	int i;
	int j;

	for ( i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}

	for ( j = 0; j <= m - 1; j++)
	{
		cout << "b[i]: " << endl;
		cin >> b[j];
	}



	int p1 = 0;
	int p2 = 0;
	int p3 = -1;

	while (p1 <= n - 1 && p2 <= m - 1)
	{
		if (a[p1] <= b[p2])
		{
			p3++;
			c[p3] = a[p1];
			p1++;
		}

		else
		{
			p3++;
			c[p3] = b[p2];
			p2++;
		}
	}
		if (p1 > n - 1)
		{
			for (i = p2; i <= m - 1; i++)
			{
				p3++;
				c[p3] = b[i];
			}
		}

		else
		{
			for (i = p1; i <= n - 1; i++)
			{
				p3++;
				c[p3] = a[i];
			}
		}

	

	cout << endl;

	for (i = 0; i <= p3; i++)
	{
		cout << c[i] << endl;
	}

return 0;
}

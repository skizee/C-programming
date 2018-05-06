#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
#include <algorithm> 
using namespace std;


int main()
{

	int arr[20], arr2[20];
	int c[40];
	int size, size2;
	cout << "size: " << endl;
	cin >> size;
	cin >> size2;


	for (int i = 0; i <= size - 1; i++)
	{
		cout << "arr1: ";
		cin >> arr[i];
	}

	for (int j = 0; j <= size2 - 1; j++)
	{
		cout << "arr2: ";
		cin >> arr2[j];
	}

	int p1 = 0;
	int p2 = 0;
	int p3 = -1;

	while (p1 <= size - 1 && p2 <= size2 - 1)
	
		if (arr[p1] <= arr2[p2])
		{
			p3++;
			c[p3] = arr[p1];
			p1++;
		}
		else
		{
			p3++;
			c[p3] = arr2[p2];
			p2++;
		}
	
	if (p1 > size - 1)
	{
		for (int i = p2; i <= size2 - 1; i++)
		{
			p3++;
			c[p3] = arr2[i];
		}

	}
	else
	{
		for (int i = p1; i <= size - 1; i++)
		{
			p3++;
			c[p3] = arr[i];
		}
	}



	for (int i = 0; i <= p3; i++)
	{
		cout << c[i] << endl;
	}
	
	return 0;
}

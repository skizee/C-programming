#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
#include <algorithm> 
using namespace std;


int main()
{

	int arr[20];
	int size;
	cout << "size: " << endl;
	cin >> size;

	int k;

	for (int i = 0; i <= size - 1; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i <= size - 2; i++)
	{
		for (int j = i+1; j <= size - 1; j++)
		{
			if (arr[i] >= arr[j])
			{
				int x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
		}
	}

	cout << endl;
	for (int i = 0; i <= size - 1; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}

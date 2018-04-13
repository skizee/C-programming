// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
using namespace std;


void reverse(const char *arr[30], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		for (int j = strlen(arr[i]) - 1; j >= 0; j--)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{
	const char *array[3] = { "cat", "dog", "mouse" };
	int size = 3;
	reverse(array, size);
	return 0;
}


#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
using namespace std;


void reverse(char arr[10], int size)
{
	char temp[10];


	for (int i = size - 1; i >= 0; i--)
	{
		temp[size - i - 1] = arr[i];
	}

	temp[size] = '\0';

	if (!strcmp(arr, temp))
	{
		cout << "palindrome" << endl;
	}

	else
	{
		cout << "not plaindrome" << endl;
	}

	cout << temp<<endl;
}

int main()
{

	char array[20];
	cout << "array= ";
	cin >> array;

	int n = strlen(array);

	reverse(array, n);
	return 0;
}



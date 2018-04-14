// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
using namespace std;

int factorial(int number)
{
	long double factorial = 1;

	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}
	return factorial;
}

int pow(int x, int n)
{
	int sum=1;

	for (int i = 1; i <= n; i++)
	{
		sum = sum * x;
	}
	return sum;
}

double value(int x, int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum = sum + (pow(x, i) / factorial(i));
	}
	return sum;
}

int main()
{
	int number;
	cout << "Enter number: ";
	cin >> number;
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	cout << "Pow: " << pow(number, n) << endl << " Factorial: " << factorial(number) << endl;
}
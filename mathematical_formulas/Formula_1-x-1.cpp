// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
using namespace std;

double factorial(int number)
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

double value(int number, int n)
{
	double sum = 1;
	double total=1;
	
	for (int i = 1; i <= n; i++)
	{
		sum =  sum *number/i;
		total = total + sum;
	}

	return total;

	
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
	cout << "Sum: " << value(number, n) << endl;
}

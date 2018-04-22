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


	char op = '+';
	double result = 0.0;
	double arg;

	do
	{
		cin >> arg;

		switch (op)
		{
		case'+':result = result + arg;
			break;
		case'-':result = result - arg;
			break;
		case'*':result = result * arg;
			break;
		case'/':result = result / arg;
		} 

		cin >> op;

	} while (op != '=');
	cout << result << endl;

	return 0;
}

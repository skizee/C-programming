// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
using namespace std;






int main()
{
	int number;

	cout << "Number:";
	cin >> number;
	double eps;
	cin >> eps;
	
	double x0;
	double x1 = 1;

	do
	{
		x0 = x1;
		x1 = 0.5*(x0 + number / x0);
		cout << x1 << endl;

	} while (fabs(x1-x0)>=eps);
	
	



	return 0;
}

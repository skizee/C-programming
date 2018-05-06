// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
using namespace std;



int main()
{
	cout << "number";
	double number; cin >> number;
	
	cout << "epsilon:";
	double epsilon; cin >> epsilon;



	double sum = 1;
	double total = 1;
	double temp = 1;
	int i = 1;


	while (fabs(sum)>=epsilon)
	{
		sum = sum * (number / i);
		total = total + sum;
		i++;
		cout << total << endl;

	}
	return 0;
}

// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <string>
#include <iostream>
using namespace std;

void function(int a, int b, int c)
{

	int disc = sqrt(b * b - 4 * a*c);

	int x1 = -(b + disc) / 2 * a;
	int x2 = -(b - disc) / 2 * a;
	if (a == 0)
	{
		int x3 = -c / b;
		cout <<"x= "<<x3<<endl;
	}

	else 
	{

		if (disc < 0)

		cout << "ERROR " << endl;

		else if (disc == 0)
		{
			
		cout << "x1 = x2 = " << x1 << endl;

		}

		else if (disc > 0)
		{
		
		cout << "x1= " << x1 << endl << "x2= " << x2 << endl;
		}

	}
}

int main()
{
	int number;
	
	cout << "Enter a, b, c: ";
	int a, b, c;
	cin >> a >> b >> c;

	function(a, b, c);
}

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
	int a, b,c,d;
	cin >> a >> b>>c>>d;

	if (b < a)
	{
		int x = a; a = b; b = x;
	}

	if (c < a)
	{
		int x = c; c=a; a = x;
	}

	if (c < b)
	{
		int x = c; c = b; b = x;
	}

	if (c < d)
	{
		int x = c; c = d; d = x;
	}

	if (d < a)
	{
		int x = d; d = a; a = x;
	}

	if (d < b)
	{
		int x = d; d = b; b = x;
	}

	if (d < c)
	{
		int x = d; d=c;  c= x;
	}

	cout << endl;

	cout << a << endl << b << endl << c << endl << d << endl;

	return 0;
}

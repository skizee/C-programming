// Assign.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#pragma warning(disable : 4996)
#include <string.h>
using namespace std;



int main()
{
	int n = 10;
	int* pn = &n;


	cout << " n=  " << n << " *pn = " << *pn << endl;

	cout << " &n= " << &n << " pn = " << pn << endl;

	int m = *pn;

	*pn = 20;

	cout << " n= " << n << endl;

	return 0;
}


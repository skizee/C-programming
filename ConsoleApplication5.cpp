// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#pragma warning(disable : 4996)
using namespace std;

int main()
{

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
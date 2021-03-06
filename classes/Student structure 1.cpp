﻿// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
const int NUM = 5;

struct student
{
	int facnom;
	char name[26];
	double marks[NUM];
};

void read_student(student& s)
{
	cout << "fak. nomer: ";
	cin >> s.facnom;
	
	char p[100];
	cin.getline(p, 100);

	cout << "name: ";
	cin.getline(s.name, 40);

	for (int i = 0; i < NUM; i++)
	{
		cout << i << " -the mark: ";
		cin >> s.marks[i];
	}
}

void print_student(const student& stud)
{
	cout << setw(6) << stud.facnom << setw(30) << stud.name;
	for (int i = 0; i < NUM; i++)
	{
		cout << setw(6) << stud.marks[i];
	}
}

double average(double* a)
{
	double s = 0;

	for (int j = 0; j < NUM; j++)
		s += a[j];
	return s / NUM;
}

void sorttable(int n, student a[])
{
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		double max = average(a[i].marks);

		for (int j = i + 1; j < n; j++)
		{
			if (average(a[j].marks) > max)
			{
				max = average(a[j].marks);
				k = j;
			}
			student x = a[i]; a[i] = a[k]; a[k] = x;
		}
	}
	
}




int main() {
	cout << setprecision(2) << setiosflags(ios::fixed);

	student table[30];
	int n;

	do
	{
		cout << "number of students? ";
		cin >> n;
	} while (n < 1 || n>30);

	int i;

	for (i = 0; i < n; i++)
		read_student(table[i]);

	cout << "Table: \n";
	
	for (i = 0; i < n; i++)
	{
		print_student(table[i]);
		cout << endl;
	}

	sorttable(n, table);
	cout << "\n New Table: \n";

	for (i = 0; i < n; i++)
	{
		print_student(table[i]);
		cout << setw(7) << average(table[i].marks) << endl;
	}
	return 0;
} 


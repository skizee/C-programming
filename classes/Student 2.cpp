﻿// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#pragma warning(disable : 4996)
using namespace std;

const int NUM = 5;
const int STUD = 2;

struct student {
	char *name;
	int facnum;
	double semester[NUM];

	student(char *name_, int facnum_, double semester_[NUM]) //  constructor
	{
		semester[NUM] = semester_[NUM];
		name = new char[strlen(name_) + 1];
		strcpy(name, name_);
		facnum = facnum_;

		

		semester[NUM] = semester_[NUM];
	}


	student(student &copy) // Copy constructor
	{
		strcpy(name, name);
		facnum = copy.facnum;
		semester[NUM] = copy.semester[NUM];
	}

	

	void setName(char *name_) {
		if (name != NULL)
			delete[] name;
		name = new char[strlen(name_) + 1];
		strcpy(name, name_);
	}

	void setfacnum(int facnum_)
	{
		facnum = facnum_;
	}

	void read()
	{
		for (int j = 0; j < NUM; j++)
		{
			cout << "Enter marks: ";
			cin >> semester[j];
		}
	}

	void print() {
		cout << "Name " << name << endl;
		cout << "Facnum " << facnum << endl;
		cout << "Semester " << semester << endl;

	}

	double average()
	{
		double average = 0;

		double *semester = new double[NUM];

		for (int i = 0; i < NUM; i++)
		{
			average += semester[i];
		}
		return average / NUM;
	}

	~student() { //Destructor
		delete[] name;
	}
};


	int main() {

		char name_Ivan[] = "Ivan\0";
		int facnum_Ivan = 31542;	

	student student_1(char name_Ivan, int facnum_Ivan, double semester_Ivan);
	 
	student_1.print();
	
	return 0;
}


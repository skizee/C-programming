#include"stdafx.h"
#include <iostream>
using namespace std;

void reverse_array(int *arr, int SIZE)
{
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << " " <<arr[i];
	}
	cout << endl;
}

int main() {

	int SIZE;
	cin >> SIZE;

	int *arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter array element ";
		cin >> arr[i];
	}
	reverse_array(arr, SIZE);


	return 0;
}

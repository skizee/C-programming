#include"stdafx.h"
#include <iostream>
using namespace std;

void reverse_number(int number)
{
	int reverse = 0;
	int temp;

	while (number != 0)
	{
		temp = number % 10;
		reverse = reverse * 10 + temp;
		number = number / 10;
		
		if (number == 0)
		{
			continue;
		}

	}
	cout << reverse<<endl;
}

int main() {

	int n;
	cin >> n;
	reverse_number(n);

	return 0;
}

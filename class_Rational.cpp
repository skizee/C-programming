// Rational.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

class rat
{
private:
	int num, den;						//rat - тип рационално число//
public:
	void makerat(int, int);
	int numer();
	int denom();
	void printrat();

};

void rat::printrat()
{
	cout << num << "/" << den << endl;
}

int gcd(int a, int b)
{
	while (a != b)
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	return a;
	
	
}

void rat::makerat(int a, int b)		//конструира рационалното число a/b
										//чрез свързването на num и den с a и b съответно//
{
	if (a == 0)
	{
		num = 0;
		den = b;
	}
	else
	{
		int g = gcd(abs(a), abs(b));
		if (a > 0 && b > 0 || a < 0 && b < 0)
		{
			num = abs(a) / g;
			den = abs(b) / g;
		}
		else
		{
			num = -abs(a) / g;
			den = abs(b) / g;
		}
	}
}

int rat::numer()			//намира числителя num на рационалното число num/den//
{
	return num;
}

int rat::denom()			//намира знаменателя den на рационалното число num/den//
{
	return den;
}

rat sumrat(rat& r1, rat& r2)    //Събиране
{
	rat r;
	r.makerat(r1.numer() * r2.denom() + r2.numer() * r1.denom(), r1.denom() * r2.denom());
	return r;
}
rat subrat(rat& r1, rat& r2)	//Изваждане
{ 
	rat r;  
	r.makerat(r1.numer()*r2.denom() - r2.numer()*r1.denom(), r1.denom()*r2.denom());
	return r;
}


rat multrat(rat& r1, rat& r2)	//Умножение
{
	rat r; 
	r.makerat(r1.numer()*r2.numer(), r1.denom()*r2.denom());
	return r;
}

rat quotrat(rat& r1, rat& r2)	//Деление
{
	rat r;
	r.makerat(r1.numer()*r2.denom(), r1.denom()*r2.numer());
	return r;
}



int main()
{
	rat r1;
	r1.makerat(-1, 2);

	rat r2;
	r2.makerat(3, 4);

	sumrat(r1, r2).printrat();
	//или rat r = sumrat(r1, r2); 
	//r.print();

	subrat(r1, r2).printrat();
	//или r=subrat(r1, r2); 
	//r.printrat();

	multrat(r1, r2).printrat();
	//или r = multrat(r1, r2); 
	//r.printrat();

	quotrat(r1, r2).printrat();
	//или r=quotrat(r1, r2);
	//r.printrat();

    return 0;
}


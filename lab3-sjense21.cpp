// lab3-sjense21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float factorial(long n);
double factorialDoub(long n);
float f(float n);
double f(double n);

int main()
{
	short sum = 0;
	short i = 0;
	short n;
	cout << "enter a short:";
	cin >> n;
	if (n > 255) //Creates overflow if above 255.
	{
		cout << "overflow error. Enter a number below 256." << endl;
	}
	else
	{
		while (i <= n)
		{
			sum += i;
			i++;
		}
		cout << "n = " << n << endl;
		cout << "sum = " << sum << endl;
	}


	long sum2 = 0;
	long i2 = 0;
	long n2;
	cout << "enter a long:";
	cin >> n2;
	if (n2 > 113512) //Creates overflow if above 113512.
	{
		cout << "overflow error. Enter a number below 113512" << endl;
	}
	else
	{
		while (i2 <= n2)
		{
			sum2 += i2;
			i2++;
		}
		cout << "n = " << n2 << endl;
		cout << "sum = " << sum2 << endl;
	}

	long num;
	cout << "enter a long to calculate the factorial: ";
	cin >> num;
	cout <<"factorial: "<< factorial(num) << endl;

	long num2;
	cout << "enter a long to calculate another factorial: ";
	cin >> num2;
	cout << "factorial 2: " << factorialDoub(num2) << endl;

	float num3;
	cout << "enter a float to calculate a sum: ";
	cin >> num3;
	cout << "sum: " << f(num3) << endl;

	double num4;
	cout << "enter a double to calculate a sum: ";
	cin >> num4;
	cout << "sum: " << f(num4) << endl;

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

    return 0;
};


float factorial(long n)
{
	float i = 1;
	float sum = 1;
	if (n > 35) // overflows if above 34;
	{
		cout << "overflow error. Calculating number for 34: ";
		n = 34;
	}
	while (i <= n)
	{
		sum = sum * i;
		i++;
	}
	return sum;
};

double factorialDoub(long n)
{
	double i = 1;
	double sum = 1;
	if (n > 170) // overflows if above 170;
	{
		cout << "overflow error. Calculating number for 170: ";
		n = 170;
	}
	while (i <= n)
	{
		sum = sum * i;
		i++;
	}
	return sum;
};

float f(float n)
{
	float i = 1;
	float sum = 0;
	while (i <= n)
	{
		sum += (1 / n);
		i++;
	}
	sum = sum - 1.0;
	return sum;
};

double f(double n)
{
	double i = 1;
	double sum = 0;
	while (i <= n)
	{
		sum += (1 / n);
		i++;
	}
	sum = sum - 1.0;
	return sum;
}


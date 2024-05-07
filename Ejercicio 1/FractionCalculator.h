#pragma once
#include <iostream>
#include "Fraction.h"

using namespace std;

class FractionCalculator
{
private:
	Fraction<int> firstFraction = Fraction<int>(4, 5);
	Fraction<short> secondFraction = Fraction<short>(2, 5);

public:
	FractionCalculator()
	{
		int numerator = 0;
		int denominator = 0;
		cout << "Ingrese el primer numero:" << endl;
		firstFraction = Fraction<int>();
		cout << endl << endl;
	}
	void PrintFraction()
	{
		cout << "The fraction is: " << firstFraction.ToString() << endl;
	}
};

#ifndef Fraction_tpp
#define Fraction_tpp

#include <iostream>
#include "Fraction.h"

template<Integer T>
Fraction<T>::Fraction()
{
	cout << "Ingrese el numerador:";
	cin >> numerator;
	cout << "Ingrese el denominador:";
	cin >> denominator;
}

template<Integer T>
Fraction<T>::Fraction(T numerator, T denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

template<Integer T>
Fraction<T>::~Fraction()
{
}

template<Integer T>
string Fraction<T>::ToString()
{
	return to_string(numerator) + "/" + to_string(denominator);
}

#endif // !Fraction_tpp
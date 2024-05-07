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
	return to_string(this->numerator) + "/" + to_string(this->denominator);
}

template<Integer T>
Fraction<T> Fraction<T>::Simplify()
{
	T smallerNum = this->denominator < this->numerator ? this->denominator : this->numerator;

	T auxNumerator = this->numerator;
	T auxDenominator = this->denominator;

	for (int i = smallerNum; i > 1; i--)
	{
		if (auxNumerator % i == 0 && auxDenominator % i == 0)
		{
			auxNumerator /= i;
			auxDenominator /= i;
			i = smallerNum;
		}
	}

	return Fraction<T>(auxNumerator, auxDenominator);
}

template<Integer T>
Fraction<T> Fraction<T>::operator+(Fraction<T> otherFraction)
{
	if (this->denominator == otherFraction.denominator)
		return Fraction<T>(this->numerator + otherFraction.numerator, this->denominator);

	T resNumerator = (this->numerator * otherFraction.denominator) + (otherFraction.numerator * this->denominator);
	T resDenominator = this->denominator * otherFraction.denominator;
	return Fraction<T>(resNumerator, resDenominator);
}

template<Integer T>
Fraction<T> Fraction<T>::operator-(Fraction<T> otherFraction)
{
	if (this->denominator == otherFraction.denominator)
		return Fraction<T>(this->numerator - otherFraction.numerator, this->denominator);

	T resNumerator = (this->numerator * otherFraction.denominator) - (otherFraction.numerator * this->denominator);
	T resDenominator = this->denominator * otherFraction.denominator;
	return Fraction<T>(resNumerator, resDenominator);
}

template<Integer T>
Fraction<T> Fraction<T>::operator*(Fraction<T> otherFraction)
{
	return Fraction<T>(this->numerator * otherFraction.numerator, this->denominator * otherFraction.denominator);
}

template<Integer T>
Fraction<T> Fraction<T>::operator/(Fraction<T> otherFraction)
{
	return Fraction<T>(this->numerator * otherFraction.denominator, this->denominator * otherFraction.numerator);
}

#endif // !Fraction_tpp
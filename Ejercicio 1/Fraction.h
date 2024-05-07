#pragma once
#include <concepts>
#include <string>

using namespace std;

template<typename T>
concept Integer = is_integral<T>::value;

template<Integer T>
class Fraction
{
private:
	T numerator;
	T denominator;

public:

	Fraction();
	Fraction(T numerator, T denominator);
	~Fraction();
	string ToString();


	Fraction<T> operator + (Fraction<T> otherFraction);
	Fraction<T> operator - (Fraction<T> otherFraction);
	Fraction<T> operator * (Fraction<T> otherFraction);
	Fraction<T> operator / (Fraction<T> otherFraction);
};
#include "Fraction.tpp"
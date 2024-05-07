#pragma once

#include "Fraction.h"

template<Integer T>
class FractionCalculator
{
private:
	Fraction<T> firstFraction = Fraction(1, 1);
	Fraction<T> secondFraction = Fraction(1, 1);

	void Sum();
	void Substract();
	void Multiply();
	void Divide();

public:
	FractionCalculator();
	~FractionCalculator();
	void PrintResult(Fraction<T> result);
};

#include "FractionCalculator.tpp"

#pragma once

#include "Fraction.h"

template<Integer T>
class FractionCalculator
{
private:
	Fraction<T> firstFraction = Fraction((T)1, (T)1);
	Fraction<T> secondFraction = Fraction((T)1, (T)1);

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

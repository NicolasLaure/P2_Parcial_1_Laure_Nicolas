#ifndef FractionCalculator_tpp
#define FractionCalculator_tpp

#include <iostream>
#include "FractionCalculator.h"

using namespace std;

template<Integer T>
FractionCalculator<T>::FractionCalculator()
{
	int response = 0;
	do
	{
		system("cls");

		cout << "1. Sum" << endl;
		cout << "2. Substract" << endl;
		cout << "3. Multiply" << endl;
		cout << "4. Divide" << endl;
		cout << "0. QUIT" << endl;

		cin >> response;

		if (response == 0)
			return;

		system("cls");

		cout << "Ingrese la primer fraccion" << endl;
		firstFraction = Fraction<T>();
		cout << "Ingrese la segunda fraccion" << endl;
		secondFraction = Fraction<T>();

		switch (response)
		{
		case 1:
			Sum();
			break;
		case 2:
			Substract();
			break;
		case 3:
			Multiply();
			break;
		case 4:
			Divide();
			break;
		default:
			break;
		}

		system("pause");
	} while (response != 0);
}
template<Integer T>
FractionCalculator<T>::~FractionCalculator()
{
}

template<Integer T>
void FractionCalculator<T>::Sum()
{
	PrintResult(firstFraction + secondFraction);
}

template<Integer T>
void FractionCalculator<T>::Substract()
{
	PrintResult(firstFraction - secondFraction);
}

template<Integer T>
void FractionCalculator<T>::Multiply()
{
	PrintResult(firstFraction * secondFraction);
}

template<Integer T>
void FractionCalculator<T>::Divide()
{
	PrintResult(firstFraction / secondFraction);
}

template<Integer T>
void FractionCalculator<T>::PrintResult(Fraction<T> result)
{
	cout << "The result fraction is: " << result.ToString() << endl;
}
#endif
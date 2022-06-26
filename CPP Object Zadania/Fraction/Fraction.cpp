#include <iostream>
#include "Fraction.hpp"

int Fraction::getNumerator () const
{
	return numerator;
}

int Fraction::getDenominator() const
{
	return denominator;
}

Fraction::Fraction()
{
}

Fraction::Fraction(int _numerator, int _denominator) : numerator(_numerator), denominator(_denominator)
{
}

Fraction Fraction::operator*(const Fraction& another)
{
	Fraction result;
	result.numerator = this->numerator * another.numerator;
	result.denominator = this->denominator * another.denominator;
	return result;
}

std::ostream& operator<<(std::ostream& s, const Fraction& v)
{
	return s << v.getNumerator() << "/" << v.getDenominator();
}

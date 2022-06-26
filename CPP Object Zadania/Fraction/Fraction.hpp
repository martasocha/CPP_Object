#pragma once

class Fraction
{
	int numerator;
	int denominator;
public:
	int getNumerator() const;
	int getDenominator() const;
	Fraction();
	Fraction(int _numerator, int _denominator);
	Fraction operator * (const Fraction& another);

};

std::ostream& operator<<(std::ostream& s, const Fraction& v);
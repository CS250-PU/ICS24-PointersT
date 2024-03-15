//***************************************************************************
// File name:  Rational.cpp
// Author:     CS, Pacific University
// Date:       
// Class:      CS250
// Assignment: Rational 
// Purpose:    Implements constructors & functions of class Rational. There is
//             no real error checking in this implementation.
//***************************************************************************

#include <iostream>
#include "../include/Rational.h"

using namespace std;

Rational::Rational (int numerator, int denominator) {
  this->mNumerator = numerator;
  this->mDenominator = denominator;
}

bool  Rational::operator== (const Rational &rcRational) const {
	return (mNumerator == rcRational.mNumerator) && 
		     (mDenominator == rcRational.mDenominator);
}

ostream & operator<< (ostream &rcOutput, const Rational &crRational) {
	rcOutput << crRational.mNumerator << '/' << crRational.mDenominator;

	return rcOutput;
}

istream & operator>> (istream &rcInput, Rational &rcRational) {
	char ch;

	rcInput >> rcRational.mNumerator >> ch >> rcRational.mDenominator;

	return rcInput;
}
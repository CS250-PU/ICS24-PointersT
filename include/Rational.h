#pragma once

#include <iostream>

using namespace std;

class Rational {                                                                                                   
	public:                                                                                                                                                                                      
		Rational (int numerator = 0, int denominator = 1);                                                                                   
		bool operator== (const Rational &rcRational) const;   

		friend ostream & operator<< (ostream &rcOutput, const Rational &rcRational);    
		friend istream & operator>> (istream &rcInput, Rational &rcRational);

  private:
		int mNumerator, mDenominator;                                                                             
};
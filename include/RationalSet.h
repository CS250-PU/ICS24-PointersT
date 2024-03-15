#pragma once

#include "Rational.h"
#include <iostream>
#include <vector>

using namespace std; 

class RationalSet {                                                                                                   
	public:
    // static const int MAX_RATIONALS = 100;
		RationalSet ();
		bool isIn (const Rational &rcRational) const;
		unsigned int size () const;

    RationalSet add (const Rational &rcRational);
    RationalSet operator* (const RationalSet &rcRationalSet) const;

    friend ostream& operator<< (ostream &rcOutput, 
                                const RationalSet &rcRationalSet);

    friend istream& operator>> (istream &rcInput, 
                                RationalSet &rcRationalSet);

  private:
    vector<Rational> mcRationals;
};
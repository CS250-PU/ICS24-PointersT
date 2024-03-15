//***************************************************************************
// File name:  RationalSet.cpp
// Author:     CS, Pacific University
// Date:       
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Implementation for class RationalSet. A set of Rational numbers 
//             is of the form {}, {1/2}, {1/2 2/3}, ...
//
//***************************************************************************

#include "../include/RationalSet.h"
#include "../include/Rational.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

RationalSet::RationalSet () {

}

bool RationalSet::isIn (const Rational &rcRational) const {
  bool bIsFound = false;

  // Write the logic using a const_iterator
  return bIsFound;
}

unsigned int RationalSet::size () const {
	return mcRationals.size ();
}

RationalSet RationalSet::add (const Rational &rcRational) {
  if (!isIn (rcRational)) {
    mcRationals.push_back (rcRational);
  }
  return *this;
}

// set intersection

RationalSet RationalSet::operator* (const RationalSet &rcRationalSet) const {
  RationalSet cRationalSetIntersection;

  for (const Rational &rcRational : rcRationalSet.mcRationals) {
    if (isIn (rcRational)) {
      cRationalSetIntersection.add (rcRational);
    }
  }
  return cRationalSetIntersection;
}

ostream& operator<< (ostream &rcOutput, const RationalSet &rcRationalSet) {
  bool bIsFirst = true;

  rcOutput << '{';
  for (const Rational &rcRational : rcRationalSet.mcRationals) {
    if (!bIsFirst) {
      rcOutput << ' ';
    }
    else {
      bIsFirst = false;
    }
    rcOutput << rcRational;
  }
  rcOutput << '}';

  return rcOutput;
}

// Assumes RationalSet is well formed ... {}, {1/2}, {1/2 2/3}, ...
istream& operator>> (istream &rcInput, 
                     RationalSet &rcRationalSet) {
  Rational cRational;

  rcInput.get ();
  while (rcInput.peek () != '}') {
    rcInput >> cRational;
    if (!rcRationalSet.isIn (cRational)) {
      rcRationalSet.mcRationals.push_back (cRational);
    }
  }
  return rcInput;
}
//******************************************************************************
// File name:  
// Author:     
// Date:       
// Class:      
// Assignment: 
// Purpose:    
//
//******************************************************************************

#include <iostream>
#include "../include/Rational.h"
#include "../include/RationalSet.h"

using namespace std;

int main () {

  // *** pointer to character example
  char *pCh, ch;

  pCh = &ch; // addressOf
  *pCh = 'A'; // dereference

  cout << "Size of pCh is " << sizeof (pCh) << endl;
  cout << "Size of ch is " << sizeof (ch) << endl;
  cout << ch << " " << *pCh << endl; // dereference}

  // *** pointer to integer example
  int x, *pX;

  x = 8;   // set x to a value of 8

  pX = &x; // set the pointer variable to point
           // to the address of x

  cout << "x is: " << x << endl;
  cout << "Size of x is: " << sizeof (x) << endl;
  cout << "Address of x is: " << pX << endl;
  cout << "Address of x is: " << &x << endl;

  // *** pointers and classes ***

  Rational cR1 (1, 2), cR2 (2, 3);
  cout << "Rational #1: " << cR1 << " Rational #2: " << cR2 << endl;

  RationalSet cRSet;
  cout << "cRSet: " << cRSet.add (cR1) << endl;
  cout << "cRSet: " << cRSet.add (cR2) << endl;

  return EXIT_SUCCESS;

}


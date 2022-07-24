//============================================================================
// Name        : 9-30_Temp.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
// include block
// class goes into header file
#include "Circle.h"
//#include "Circle.cpp"
int main() {
 Circle mycircle; // object mycircle of class Circle
 Circle yourcircle;
 Circle samscircle;
 Circle bettyscircle;
 mycircle.setradius(3);
// joescircle.setradius(3);
 mycircle.calcarea();
 cout << mycircle.getarea() << endl;
float d;
 d = setradius (4);
return 0;
}

/*
 * Circle.h
 *
 * Created on: Sep 25, 2019
 * Author: Paul
 */
#include <string>
using namespace std;
#ifndef CIRCLE_H_
#define CIRCLE_H_
class Circle // declaration - goes into header file
{
private:
float radius; // member
float area; // member
float circumfrence; // member
 string color; // member
float diameter; // member

public: // member functions
void calcarea(); // manipulator
void setradius(float); // setter
float getarea(); // getter
};
#endif /* CIRCLE_H_ */
float setradius(float);

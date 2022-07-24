/*
 * Circle.cpp
 *
 * Created on: Sep 25, 2019
 * Author: Paul
 */
#include "Circle.h"
// Three member functions
void Circle::setradius (float r)
{
 radius = r;
}
void Circle::calcarea()
{
 area = (radius * radius) * 3.14;
}
float Circle::getarea()
{
return area;
}
// A non-member function
float setradius (float r)
{
return 3.3;
}

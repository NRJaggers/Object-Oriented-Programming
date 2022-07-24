//============================================================================
// Name        : 9-23_Circle.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Circle
{
	private:
		float pi = 3.14159265;		//member
		float radius ;				//member
		float area ;				//member
		float circumference ;
		float diameter ;
		string color ;

	public:
		void setRadius(float r)		//member function
			{
				radius = r ;
			}

		float getArea()
			{
				return area ;
			}
		float calcArea()			//member function
			{
				area = pi*radius*radius ;
				return area;
			};
};

int main()
{

	Circle myCircle ;				//object myCircle of class Circle

	myCircle.setRadius(3) ;

	cout << myCircle.calcArea() << endl ;

	cout << myCircle.getArea() << endl ;



	return 0;
}

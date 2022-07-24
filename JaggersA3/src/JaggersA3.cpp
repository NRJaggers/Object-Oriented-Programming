//============================================================================
// Name        : JaggersA3.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "welcome.h"
#include "goodbye.h"
#include "Payroll.h"
using namespace std;

int main()
{
	//declarations
	  float hours, pRate ;
	  Payroll employee ;

	//welcome
	  welcome() ;

	//initial input
	  cout << "Enter the numbers of hours worked : " ;
	  cin  >> hours ;


	  	 while (hours >= 0)
			{
	  		  //pay rate input
	  		 	cout << "Enter the pay rate of the employee : " ;
	  			cin  >> pRate ;

			  //transfer input
	  		 	employee.setHoursWorked(hours) ;
	  		 	employee.setPayrate(pRate) ;

			  //payroll processing
	  		 	employee.calcPay() ;

	  		 //output
	  		 	cout << "\nThe employee worked " << employee.getHoursWorked()
	  		 		 << " hours at  $" << employee.getPayrate() << " per hour.\n"
					 << "This results in a regular pay of " << employee.getRegularPay()
					 << " and an overtime pay of " << employee.getOvertimePay() << ".\n"
					 << "Total : $" << (employee.getRegularPay() + employee.getOvertimePay())
					 <<"\n\n" ;

	  		 //hours input
	  		 	cout << "Enter the numbers of hours worked : " ;
	  		 	cin  >> hours ;

			}

	//goodbye
	  goodbye() ;

	return 0;
}

/*
 * Payroll.h
 *
 *  Created on: Sep 30, 2019
 *      Author: Nathan Jaggers
 */

#ifndef PAYROLL_H_
#define PAYROLL_H_

#include <iostream>

class Payroll
{
private:
	float hoursWorked 	= 0 ;
	float payrate 		= 0 ;
	float regularPay 	= 0 ;
	float overtimePay 	= 0 ;
public:

//setters
	void setHoursWorked(float);
	void setPayrate(float);

//getters

	float getHoursWorked();
	float getPayrate();
	float getRegularPay();
	float getOvertimePay();

//member functions

	void calcPay();
};

#endif /* PAYROLL_H_ */

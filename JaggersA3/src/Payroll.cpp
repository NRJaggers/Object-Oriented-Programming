/*
 * Payroll.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: Nathan Jaggers
 */
#include <iostream>
#include "Payroll.h"
using namespace std;

//setters
	void Payroll :: setHoursWorked(float hours)
		{
			hoursWorked = hours ;
		}
	void Payroll :: setPayrate(float pRate)
		{
			while (pRate <= 0)
			{
				cout << "Pay rate cannot be equal to or less than zero.\n"
					 << "Please re-enter : " ;
				cin  >> pRate ;
			}

			payrate = pRate ;
		}

//getters

	float Payroll :: getHoursWorked()
		{
			return hoursWorked ;
		}
	float Payroll :: getPayrate()
		{
			return payrate ;
		}
	float Payroll :: getRegularPay()
		{
			return regularPay ;
		}
	float Payroll :: getOvertimePay()
		{
			return overtimePay ;
		}

//member functions

	void Payroll :: calcPay()
		{
			if(hoursWorked <= 40)
				{
					regularPay  = (hoursWorked*payrate) ;
					overtimePay = 0 ;
				}
			else
				{
					regularPay  = (40*payrate) ;
					overtimePay = ((hoursWorked - 40)*payrate*1.50) ;
				}
		}

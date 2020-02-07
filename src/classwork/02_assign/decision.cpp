#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double pay;

	if (hours <= 40) 
	{
		pay = hours * hourly_rate;
	}
	else
	{
		pay = 40 * hourly_rate;
		pay = pay + (hourly_rate * ((hours-40) * 1.5)); 

	}


	return pay;
}
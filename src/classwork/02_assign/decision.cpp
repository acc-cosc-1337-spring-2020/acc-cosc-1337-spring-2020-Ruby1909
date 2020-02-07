#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double pay = hours * hourly_rate; 

	if (hours > 40)
	{
		pay = pay + (hourly_rate * ((hours-40) * 1.5)); 

	}


	return pay;
}
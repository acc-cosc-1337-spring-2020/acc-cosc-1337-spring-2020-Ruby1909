#include "bank_account.h"

//bank_account.cpp

void BankAccount::deposit(int amount)
{
	if (amount > 0) 
	{
		balance += amount; 
	}
	else
	{
		throw invalid("Amount must be greater than 0.");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > 0 && amount <= balance)
	{
		balance -= amount;
	}
}
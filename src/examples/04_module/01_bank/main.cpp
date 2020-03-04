#include "bank_account.h"
#include <iostream>
#include <vector>

using std::cout; using std::cin;

int main()
{
	BankAccount a;
	BankAccount account(500);
	auto balance = account.get_balance();
	cout << "Balance is: \n" << balance;

	auto amount{ 0 };
	cout << "Enter deposit amount: \n";
	cin >> amount;

	account.deposit(amount);
	cout << "Balance is: \n" << balance; 
	
	return 0;
}

#include "bankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount( int balance )
{
	if (balance >= 0)
		accountBalance = balance;
	if (balance < 0)
	{
		accountBalance = 0;
		cout << "Initial balance was INvalid, Account balance set to zero (0)";
		cout << endl;
	}
}

int BankAccount::getAccountBalance()
{
	return accountBalance;
}

void BankAccount::credit(int credit)
{
	cout << "You have credited(borrowed) the amount : " << credit << endl;
	accountBalance += credit;
}

void BankAccount::debit(int debit)
{
	if(debit < accountBalance)
	{
		cout << "You debited(deposit) the amount : " << debit << endl;
		accountBalance -= debit;
	}
	if (debit > accountBalance)
	{
		cout << "You cannot withdraw more than you have in your account balance" << endl;
	}


}

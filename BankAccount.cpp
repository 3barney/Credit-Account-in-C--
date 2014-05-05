//============================================================================
// Name        : BankAccount.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "bankAccount.h"
#include <iostream>
using namespace std;

int main()
{
	BankAccount newBank(1001);
	cout << "Your bank account balance is : " << newBank.getAccountBalance()
		 << "\tKenya Shillings";
	cout << endl;

	newBank.credit(100);
	cout << "Account balance after credit is : " <<newBank.getAccountBalance()
		 << "\tKenya Shillings";
	cout << endl;

	newBank.debit(1267);
	cout << "Account balance after debit is : " << newBank.getAccountBalance()
			<< "\tKenya Shillings";
	cout << endl;
}

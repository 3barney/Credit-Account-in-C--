#include <iostream>
using namespace std;

class BankAccount
{
public:
	BankAccount (int);
	int getAccountBalance();
	void credit(int credit);
	void debit(int debit);

private:
	int accountBalance;
	float defaultValue = 0.0;
};

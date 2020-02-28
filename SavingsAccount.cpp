#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	if (initialBalance > 0){
		setBalance(initialBalance);
	}
	else{
		setBalance(0);
	}
}

double SavingsAccount::calculateInterest() {
	
	return getBalance() * rate;
	
} 
void SavingsAccount::display(ostream & os) const
{
	out < "Account Type: Saving" << '\n' << "Balance: $ " << initialBalance
	<<'\n' << "Interest Rate (%): " << rate << endl;
}
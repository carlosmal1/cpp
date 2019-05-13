include <iostream>

using namespace std;

class CashRegister
{
private:
	double taxRate = 0;
	double purchase = 0;
	double taxablePurchase = 0;
	double payment = 0;
	int countItems = 0;

public:
	CashRegister(double rate);

	
	 void recordPurchase(double amount);

	 void recordTaxablePurchase(double amount);

	 void receivePayment(double amount);

	 double getTotalTax();

	 int getCountItems();

	 double giveChange();
};

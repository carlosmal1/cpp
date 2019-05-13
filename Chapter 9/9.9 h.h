#include <iostream>
#include <string>

using namespace std;

class CashRegister
{
private:
	double taxRate = 0;
	double purchase = 0;
	double taxablePurchase = 0;
	double payment = 0;
	string receipt;
	int salesCount = 0;

public:
	CashRegister(double rate);

	void recordPurchase(double amount);

	string printReceipt();

	void recordTaxablePurchase(double amount);

	void receivePayment(double amount);

	double getSalesTax();

	double giveChange();

	double getSalesTotal();

	int getSalesCount();

	void resetSales();
};

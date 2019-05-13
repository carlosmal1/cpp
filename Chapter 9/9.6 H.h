#include <vector>

using namespace std;

class CashRegister
{
private:
	vector<double> prices;
	vector<bool> taxables;
	double taxRate = 0;

public:
	CashRegister(double aTaxRate);


	 void addItem(double price, bool taxable);
	 double getTotal();
	 int getCount();
	 void clear();
};

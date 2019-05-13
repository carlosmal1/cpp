#include <iostream>
#include <string>

using namespace std;

void cashRegister.additem(int num)
{
	prices.push_back(num);
}

int cashRegister.getTotal() {
	int total = 0;
	for (int i = 0; i < prices.size(); i++) {
		total = total + static_cast<int>(prices[i]);
	}
	return total;
}

int cashRegister.getCount() {
	return prices.size();
}

void cashRegister.display() {
	cout << "Prices stored are: " << prices << endl;
}

void cashRegister.clear() {
	prices.clear();
}

void cashRegister.main(vector<string> &args) {

	cashRegister *pricesStore = new cashRegister();
	while (true) {
		cout << "1.addItem 2.getTotal 3.getCount 4.display 5.clear 6.exit" << endl;
		int choice = sc.nextInt(); 
		if (choice == 1) {
			cout << "Enter price: " << endl;
			int price = sc.nextInt();
			pricesStore.additem(price);
		}
		else if (choice == 2) {
			cout << "The total is: " << pricesStore.getTotal() << endl;
		}
		else if (choice == 3) {
			cout << "The count is: " << pricesStore.getCount() << endl;
		}
		else if (choice == 4) {
			pricesStore.display();
		}
		else if (choice == 5) {
			pricesStore.clear();
		}
		else { 
			cout << "Exiting..." << endl;
			break;
		}
	}
	return 0;
}

#include "9.5.h"

using namespace std;

Battery(double capacity) : fullCharge(capacity)
{

	if (capacity < 2000 || capacity > 3000){
		cout << "Cannot create Battery the capacity should be in betweeen 2000 and 3000" << endl;
	   return 0;
}
	batteryCapacity = capacity;

}

		void Battery_drain(double amount) {

	if ((batteryCapacity - amount) < 0 || (batteryCapacity - amount) > 3000)
{
	cout << "The amount is invalid as the battery capacity is going out of range" << endl;
	   return 0;
}
	else {
	batteryCapacity = batteryCapacity - amount;
}
}

	void Battery.charge()
{

batteryCapacity = fullCharge;
}

	double Battery.getRemainingCapacity(){
	
	return batteryCapacity;
}

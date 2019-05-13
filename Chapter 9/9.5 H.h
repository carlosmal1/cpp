
#include <iostream>

using namespace std;

class Battery
{

private:
const double fullCharge;
double batteryCapacity = 0;

public:
Battery(double capacity);
void drain(double amount);

 void charge();

double getRemainingCapacity();

};

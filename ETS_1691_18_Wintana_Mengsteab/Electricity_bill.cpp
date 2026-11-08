/*
TASK 2: ELECTRICITY BILL
INPUT:
1. Electricity unit
OUTPUT:
1. Energy charge
2. Service charge
3. Total electricity bill
PROCESS:
1. Declare variables to hold the input and calculated results.
2. Define the fixed valueslimit = 50,normalRate = 1.50,extraRate = 2.00,serviceCharge = 10.00 )as constants
3. Print a prompt and read the electricity units consumed.
4. Determine the energy charge:If the electricity units are less than or equal to 50, calculate the energy charge by multiplying the electricity units by normalRate
,If the electricity units are greater than 50, calculate the cost of the first 50 units using normalRate and the remaining units using extraRate.
5. Calculate the total bill by adding the energy charge and service charge.
6. Display the energy charge, service charge, and total bill with two decimal places.

C++ PROGRAM
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
  int electricityUnit;
double energyCharge, totalBill;

const int limit = 50;
const double normalRate = 1.50;
const double extraRate = 2.00;
const int serviceCharge = 10;

cout << "Enter electricity unit: ";
cin >> electricityUnit;

energyCharge = (electricityUnit <= limit)?(electricityUnit * normalRate):(limit * normalRate)+((electricityUnit - limit) * extraRate);
totalBill = energyCharge + serviceCharge;

cout << fixed << setprecision(2);
cout << "Energy charge = " << energyCharge << endl;
cout << "Service charge = " << serviceCharge << endl;
cout << "Total bill = " << totalBill << endl;

return 0;

}



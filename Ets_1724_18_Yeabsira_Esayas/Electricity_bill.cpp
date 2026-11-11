/* (a) Inputs and Outputs

Inputs: Electricity units consumed in a month (kWh as a whole number)

Outputs: Energy charge (two decimal places), Service charge (fixed at 10.00 birr, two decimal places), Total bill (two decimal places)

   (b) Process

1. Enter the number of electricity units used.

2. Separate the units into a base tier (up to 50 units) and an excess tier (units above 50) using the conditional operator.

3. Calculate the energy charge by multiplying the base units by 1.50 and the excess units by 2.00, then adding them together.

4. Add the fixed 10.00 birr service charge to the energy charge to get the total bill.

5. Set the output to show two decimal places and print the energy charge, service charge, and total bill.*/


#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // Constants 
    const double FIRST_TIER_RATE = 1.50;
    const double EXTRA_TIER_RATE = 2.00;
    const double SERVICE_CHARGE = 10.0;
    const int TIER_LIMIT = 50;

    // Variables
    int unitsConsumed = 0.0;
    double energyCharge = 0.0;
    double totalBill = 0.0;

    // Input
    cout << "Enter electricity units used (kWh): ";
    cin >> unitsConsumed;

    // Process
    int unitsInFirstTier = (unitsConsumed > TIER_LIMIT) ? TIER_LIMIT : unitsConsumed;
    int unitsInExtraTier = (unitsConsumed > TIER_LIMIT) ? (unitsConsumed - TIER_LIMIT) : 0;
    energyCharge = (static_cast<double>(unitsInFirstTier) * FIRST_TIER_RATE) + 
                   (static_cast<double>(unitsInExtraTier) * EXTRA_TIER_RATE);
    totalBill = energyCharge + SERVICE_CHARGE;

    // Output
    cout << fixed << setprecision(2);
    cout << "\n--- Electricity Bill Summary ---" << endl;
    cout << "Energy Charge: " << energyCharge << " birr" << endl;
    cout << "Total Bill:    " << totalBill << " birr" << endl;

    return 0;
}

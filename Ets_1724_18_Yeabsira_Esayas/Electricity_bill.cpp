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

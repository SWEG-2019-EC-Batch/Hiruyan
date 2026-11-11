#include <iostream>
#include <iomanip>
using namespace std;

/*
IPO ANALYSIS

Input:
i) Read the electricity units consumed in a month (kWh).

Process:
1. Declare variables to store electricity units,
   energy charge, service charge and total bill.
2. Declare constants for the first 50 units rate (1.50),
   additional units rate (2.00) and service charge (10.00).
3. Check whether the electricity units are less than
   or equal to 50 using the conditional operator.
4. Calculate the energy charge:
   - For units less than or equal to 50, multiply units by 1.50.
   - For units greater than 50 calculate the first 50 units at 1.50
     and the remaining units at 2.00.
5. Add the fixed service charge to the energy charge
   to calculate the total bill.

Output:
i) Display the energy charge to two decimal places.
ii) Display the service charge to two decimal places.
iii) Display the total electricity bill to two decimal places.
*/

int main()
{
    // Constant declaration
    const double FIRST_RATE = 1.50;
    const double ADDITIONAL_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;
    const int FIRST_UNITS = 50;

    // Variable declaration
    int units;
    double energyCharge, totalBill;

    // Input section
    cout << "====================================\n";
    cout << "      ELECTRICITY BILL CALCULATOR   \n";
    cout << "====================================\n";

    cout << "Enter electricity units consumed (kWh): ";
    cin >> units;

    // Processing section
    energyCharge = (units <= FIRST_UNITS)
                 ? (units * FIRST_RATE)
                 : (FIRST_UNITS * FIRST_RATE)
                   + ((units - FIRST_UNITS) * ADDITIONAL_RATE);

    totalBill = energyCharge + SERVICE_CHARGE;

    // Output section
    cout << fixed << setprecision(2);

    cout << "\n====================================\n";
    cout << "       ELECTRICITY BILL REPORT      \n";
    cout << "====================================\n";

    cout << "Electricity Units : " << units << " kWh" << endl;
    cout << "Energy Charge     : " << energyCharge << " Birr" << endl;
    cout << "Service Charge    : " << SERVICE_CHARGE << " Birr" << endl;

    cout << "------------------------------------\n";

    cout << "Total Bill        : " << totalBill << " Birr" << endl;

    cout << "====================================\n";

    return 0;
}
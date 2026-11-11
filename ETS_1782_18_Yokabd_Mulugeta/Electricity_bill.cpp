/*
    A. Inputs and outputs
Inputs:Electricity units consumed (whole number in kWh).

Outputs:Energy charge (two decimal places), service charge (two decimal places), total electricity bill (two decimal placeStart the program.
B. Process
1 Declare an integer variable for electricity units.

2 Declare constants for the first 50 units' rate, additional units' rate and service charge.

3 Read the number of electricity units from the user.

4 Use the conditional operator to determine the energy charge:

5 If units are less than or equal to 50, multiply units by 1.50 birr.

Otherwise, calculate the first 50 units at 1.50 birr and the remaining units at 2.00 birr.

6 Add the fixed service charge of 10 birr to the energy charge.

7 Display the energy charge, service charge and total bill using two decimal places.

8 End the program.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double energyCharge, totalBill;

    const double RATE1 = 1.50;
    const double RATE2 = 2.00;
    const double SERVICE_CHARGE = 10.00;

    cout << "Enter electricity units: ";
    cin >> units;

    energyCharge = (units <= 50)
        ? units * RATE1
        : (50 * RATE1) + ((units - 50) * RATE2);

    totalBill = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);

    cout << "Energy Charge: " << energyCharge
         << " birr" << endl;

    cout << "Service Charge: " << SERVICE_CHARGE
         << " birr" << endl;

    cout << "Total Bill: " << totalBill
         << " birr" << endl;

    return 0;
}



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


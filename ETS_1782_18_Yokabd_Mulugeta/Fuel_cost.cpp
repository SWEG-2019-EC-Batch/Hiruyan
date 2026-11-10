
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance;
    int hours, minutes;
    double fuelConsumption, fuelPrice;

    double totalTime;
    double averageSpeed, fuelUsed, fuelCost;

    cout << "Enter trip distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter (birr): ";
    cin >> fuelPrice;

    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * fuelPrice;

    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed
         << " km/h" << endl;

    cout << "Fuel Used: " << fuelUsed
         << " liters" << endl;

    cout << "Fuel Cost: " << fuelCost
         << " birr" << endl;

    return 0;
}


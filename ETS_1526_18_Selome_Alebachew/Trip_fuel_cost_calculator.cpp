#include <iostream>
#include <iomanip>
using namespace std;

/*
IPO ANALYSIS

Input:
i) Read the trip distance in kilometers.
ii) Read the travel time in hours.
iii) Read the remaining travel time in minutes.
iv) Read the car's fuel consumption in liters per 100 km.
v) Read the fuel price per liter in Birr.

Process:
1. Declare variables to store distance, hours, minutes,
   fuel consumption, fuel price, total time, average speed,
   fuel used and fuel cost.
2. Convert the travel time into hours by dividing
   the minutes by 60 and adding the hours.
3. Calculate the average speed by dividing the trip
   distance by the total travel time.
4. Calculate the fuel used by multiplying the trip
   distance by the fuel consumption rate and dividing
   the result by 100.
5. Calculate the fuel cost by multiplying the fuel
   used by the price per liter.

Output:
i) Display the average speed in km/h to two decimal places.
ii) Display the fuel used in liters to two decimal places.
iii) Display the fuel cost in Birr to two decimal places.
*/

int main()
{
    // Variable declaration
    double distance, fuelConsumption, fuelPrice;
    double totalTime, averageSpeed, fuelUsed, fuelCost;
    int hours, minutes;

    // Input section
    cout << "====================================\n";
    cout << "       TRIP FUEL COST CALCULATOR    \n";
    cout << "====================================\n";

    cout << "Enter trip distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter remaining time (minutes): ";
    cin >> minutes;

    cout << "Enter fuel consumption (liters/100 km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter (Birr): ";
    cin >> fuelPrice;

    // Processing section
    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * fuelPrice;

    // Output section
    cout << fixed << setprecision(2);

    cout << "\n====================================\n";
    cout << "           TRIP REPORT              \n";
    cout << "====================================\n";

    cout << "Trip Distance : " << distance << " km" << endl;
    cout << "Travel Time   : " << hours << " hours "
         << minutes << " minutes" << endl;

    cout << "------------------------------------\n";

    cout << "Average Speed : " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used     : " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost     : " << fuelCost << " Birr" << endl;

    cout << "====================================\n";

    return 0;
}
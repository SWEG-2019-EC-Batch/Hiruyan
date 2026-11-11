/*
    A. Inputs and outputs
Inputs:Trip distance in kilometers, Travel time in hours, travel time in minutes, fuel consumption in liters per 100 km, fuel price per liter in birr.

Outputs:Average speed in km/h, fuel consumed in liters, total fuel cost in birr.
    
    Start the program.

1 Declare variables for distance, hours, minutes, fuel consumption and fuel price.

2 Declare variables for total time, average speed, fuel consumed and fuel cost.

3 Read the trip distance and travel time in hours and minutes.

4 Read fuel consumption per 100 km and read the price of one liter of fuel.

5 Convert the travel time into hours by adding hours to minutes divided by 60.

6 Calculate average speed, fuel consumed and total fuel.

7 Display average speed, fuel consumed and total fuel cost using two decimal places.
    
End the program.
*/
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


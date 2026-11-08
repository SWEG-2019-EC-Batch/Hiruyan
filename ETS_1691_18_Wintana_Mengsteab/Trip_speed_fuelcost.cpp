/*
TASK 3: TRIP SPEED AND FUEL COST
INPUT:
1. Distance travelled in kilometers.
2. Travel time in hours.
3. Travel time in minutes.
4. Fuel usage rate in liters per 100 kilometers.
5. Price per liter of fuel in birr.
OUTPUT:
1. Average speed in kilometers per hour (km/h).
2. Total fuel used in liters.
3. Total fuel cost in birr.
PROCESS:
1. Declare variables to hold the input values and calculated results.
2. Define the fixed value (hundredKm) as a constant.
3. Print prompts and read the inputs.
4. Calculate the total travel time using: totalTime = hours + minutes / 60.0
5. Calculate the average speed using:averageSpeed = distance / totalTime
6. Calculate the total fuel used using:totalFuelUsed = (distance * fuelUsageRate) / hundredKm
7. Calculate the total fuel cost using:totalFuelCost = totalFuelUsed * fuelPrice
8. Display the average speed, total fuel used, and total fuel cost to two decimal places.
C++ PROGRAM
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

const int hundredKm = 100;

double distance, hours, minutes;
double fuelUsageRate, fuelPrice;
double totalTime, averageSpeed;
double totalFuelUsed, totalFuelCost;

cout << "Enter distance in km: ";
cin >> distance;
cout << "Enter hours: ";
cin >> hours;
cout << "Enter minutes: ";
cin >> minutes;
cout << "Enter fuel usage rate (L/100km): ";
cin >> fuelUsageRate;
cout << "Enter price per liter: ";
cin >> fuelPrice;

totalTime = hours + minutes / 60.0;

averageSpeed = distance / totalTime;

totalFuelUsed = (distance *fuelUsageRate) / hundredKm;

totalFuelCost = totalFuelUsed * fuelPrice;

cout << fixed << setprecision(2);
cout << "Average speed: " << averageSpeed << " km/h" << endl;
cout << "Total fuel consumed: " << totalFuelUsed << " liters" << endl;
cout << "Total fuel cost: " << totalFuelCost << " birr" << endl;

return 0;

}

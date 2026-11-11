/* (a) Inputs and Outputs

Inputs: Trip distance (km), Travel time hours and minutes, Fuel use (liters per 100 km), Fuel price per liter (birr)

Outputs: Average speed (km/h, two decimal places), Fuel used (liters, two decimal places), Fuel cost (birr, two decimal places)

   (b) Process

1. Enter the trip distance in km, travel hours, travel minutes, fuel consumption rate per 100 km, and fuel price per liter.

2. Convert the travel time into a decimal number of total hours by dividing the minutes by 60 and adding them to the hours.

3. Calculate the average speed by dividing the distance by the total hours.

4. Calculate the total fuel used by dividing the distance by 100 and multiplying by the fuel rate.

5. Calculate the total fuel cost by multiplying the fuel used by the price per liter.

6. Set the output to show two decimal places and print the average speed, fuel used, and fuel cost */


#include <iostream>
#include <iomanip> // Required for fixed and setprecision
using namespace std;
int main() {

    const double MINUTES_PER_HOUR = 60.0;

    // Variables for inputs
    double distance_Km = 0.0;
    int hours = 0;
    int minutes = 0;
    double fuelPer100Km = 0.0;
    double price_Per_Liter = 0.0;

    // Variables for calculations
    double totalHours = 0.0;
    double averageSpeed = 0.0;
    double fuelUsed = 0.0;
    double fuelCost = 0.0;

    // Input
    cout << "Enter trip distance (km): ";
    cin >> distance_Km;

    cout << "Enter travel time in Hours: ";
    cin >> hours;

    cout << "Enter travel time in Minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelPer100Km;

    cout << "Enter price per liter (birr): ";
    cin >> price_Per_Liter;

    totalHours = static_cast<double>(hours) + (static_cast<double>(minutes) / MINUTES_PER_HOUR);
    
    averageSpeed = (totalHours > 0.0) ? (distanceKm / totalHours) : 0.0;

    fuelUsed = (distanceKm / 100.0) * fuelPer100Km;
    
    fuelCost = fuelUsed * pricePerLiter;
    
    cout << fixed << setprecision(2);
    cout << "\n--- Trip Summary ---" << endl;
    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used:     " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost:     " << fuelCost << " birr" << endl;

    return 0;
}

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

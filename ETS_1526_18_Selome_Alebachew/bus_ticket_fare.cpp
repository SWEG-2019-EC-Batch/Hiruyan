
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int destination, age;
    char isStud;

    float base_fare, bag_weight, rate;
    float extraCharge = 0;
    float discount = 0;
    float discountedFare, totalFare;

    const short int WEIGHT_LIMIT = 20;
    string destinationName;

    // Display available destinations
    cout << "===== TRIP DESTINATIONS =====" << endl;
    cout << "Departure: Addis Ababa" << endl;
    cout << "1. Bahirdar" << endl;
    cout << "2. Hawassa" << endl;
    cout << "3. Mekelle" << endl;
    cout << "4. Adama" << endl;
    cout << "5. Jimma" << endl;

    cout << "\nSelect destination (1-5): ";
    cin >> destination;

    // Select destination using switch
    switch (destination) {
        case 1:
            destinationName = "Bahirdar";
            break;

        case 2:
            destinationName = "Hawassa";
            break;

        case 3:
            destinationName = "Mekelle";
            break;

        case 4:
            destinationName = "Adama";
            break;

        case 5:
            destinationName = "Jimma";
            break;

        default:
            cout << "Invalid destination!" << endl;
            return 0;
    }

    // Input route-specific prices
    cout << "Enter base fare for " << destinationName << ": ";
    cin >> base_fare;

    cout << "Enter extra rate per kg: ";
    cin >> rate;

    // Input traveller information
    cout << "Enter age: ";
    cin >> age;

    if (age <= 0) {
        cout << "Invalid age!" << endl;
        return 0;
    }

    cout << "Are you a student (Y/N): ";
    cin >> isStud;

    cout << "Enter bag weight in kg: ";
    cin >> bag_weight;

    if (bag_weight < 0 || base_fare < 0 || rate < 0) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    // Calculate extra luggage charge
    if (bag_weight > WEIGHT_LIMIT)
        extraCharge = (bag_weight - WEIGHT_LIMIT) * rate;

    // Calculate age discount
    if (age <= 12)
        discount = 0.50;
    else if (age >= 60)
        discount = 0.25;

    // Add student discount
    if (isStud == 'Y' || isStud == 'y')
        discount += 0.15;

    // Calculate final fare
    discountedFare = base_fare * discount;
    totalFare = base_fare - discountedFare + extraCharge;

    // Display trip information
    cout << fixed << setprecision(2);

    cout << "\n===== TRIP INFORMATION =====" << endl;
    cout << "Departure: Addis Ababa" << endl;
    cout << "Destination: " << destinationName << endl;
    cout << "Base fare: " << base_fare << " ETB" << endl;
    cout << "Bag weight: " << bag_weight << " kg" << endl;
    cout << "Extra luggage charge: " << extraCharge << " ETB" << endl;
    cout << "Total discount: " << discount * 100 << "%" << endl;
    cout << "Discount amount: " << discountedFare << " ETB" << endl;
    cout << "Total fare: " << totalFare << " ETB" << endl;

    return 0;
}

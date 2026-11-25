#include <iostream>
#include <string>

using namespace std;

int main() {
    int routeChoice;
    double baseFare, bagWeight, extraRate;
    int age;
    char studentChoice;
    bool isStudent = false;

    // 1. Multiple trip routes (5 routes) using a switch case
    cout << "=== SELECT TRIP ROUTE ===" << endl;
    cout << "1. Route A (Addis Ababa to Adama)" << endl;
    cout << "2. Route B (Addis Ababa to Hawassa)" << endl;
    cout << "3. Route C (Addis Ababa to Bahir Dar)" << endl;
    cout << "4. Route D (Addis Ababa to Dire Dawa)" << endl;
    cout << "5. Route E (Addis Ababa to Gondar)" << endl;
    cout << "Enter your route choice (1-5): ";
    cin >> routeChoice;

    string routeName = "";
    switch (routeChoice) {
        case 1:
            routeName = "Route A (Addis Ababa to Adama)";
            break;
        case 2:
            routeName = "Route B (Addis Ababa to Hawassa)";
            break;
        case 3:
            routeName = "Route C (Addis Ababa to Bahir Dar)";
            break;
        case 4:
            routeName = "Route D (Addis Ababa to Dire Dawa)";
            break;
        case 5:
            routeName = "Route E (Addis Ababa to Gondar)";
            break;
        default:
            cout << "Invalid choice! Defaulting to Route A." << endl;
            routeName = "Route A (Default)";
            routeChoice = 1;
            break;
    }

    // 2. Input fares and passenger details
    cout << "\nEnter base fare of the trip (in Birr): ";
    cin >> baseFare;

    cout << "Enter bag weight (in kg): ";
    cin >> bagWeight;

    cout << "Enter rate per kg for extra bag weight: ";
    cin >> extraRate;

    cout << "Enter passenger age: ";
    cin >> age;

    cout << "Is the passenger a student? (y/n): ";
    cin >> studentChoice;
    if (studentChoice == 'y' || studentChoice == 'Y') {
        isStudent = true;
    }

    // 3. Calculate extra bag fee
    double extraWeight = 0.0;
    double extraBagFee = 0.0;
    if (bagWeight > 20.0) {
        extraWeight = bagWeight - 20.0;
        extraBagFee = extraWeight * extraRate;
    }

    // 4. Calculate discount based on age or student status
    double discountPercentage = 0.0;
    string discountType = "None";

    if (age <= 12) {
        discountPercentage = 0.50; // 50% discount for children
        discountType = "Child Discount (50%)";
    } 
    else if (age >= 60) {
        discountPercentage = 0.25; // 25% discount for elders
        discountType = "Elder Discount (25%)";
    } 
    else if (isStudent) {
        discountPercentage = 0.15; // 15% discount for students
        discountType = "Student Discount (15%)";
    }

    double discountedBaseFare = baseFare * (1.0 - discountPercentage);
    double totalFare = discountedBaseFare + extraBagFee;

    // 5. Print comprehensive trip information
    cout << "\n===============================" << endl;
    cout << "       TRIP RECEIPT & INFO     " << endl;
    cout << "===============================" << endl;
    cout << "Selected Route       : " << routeName << endl;
    cout << "Original Base Fare   : " << baseFare << " Birr" << endl;
    cout << "Discount Applied     : " << discountType << endl;
    cout << "Adjusted Base Fare   : " << discountedBaseFare << " Birr" << endl;
    cout << "-------------------------------" << endl;
    cout << "Total Bag Weight     : " << bagWeight << " kg" << endl;
    if (extraWeight > 0) {
        cout << "Extra Bag Weight     : " << extraWeight << " kg" << endl;
        cout << "Extra Bag Payment    : " << extraBagFee << " Birr" << endl;
    } else {
        cout << "Extra Bag Payment    : 0.00 Birr (Under 20kg limit)" << endl;
    }
    cout << "===============================" << endl;
    cout << "TOTAL FARE TO PAY    : " << totalFare << " Birr" << endl;
    cout << "===============================" << endl;

    return 0;
}

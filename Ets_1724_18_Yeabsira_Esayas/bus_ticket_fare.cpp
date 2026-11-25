#include <iostream>
using namespace std;
int main()
{
    float baseFare = 0, ratePerKg = 0, weight = 0;
    const short int MAX_WEIGHT = 20;
    short int age = 0;
    char isStud = 'N';
    float discount = 0;
    int route = 0;

    // Route selection
    cout << "===============================" << endl;
    cout << "       AVAILABLE ROUTES        " << endl;
    cout << "===============================" << endl;
    cout << "1. Addis Ababa to Adama (500 ETB, 20 ETB/kg)" << endl;
    cout << "2. Addis Ababa to Hawassa (1200 ETB, 30 ETB/kg)" << endl;
    cout << "3. Addis Ababa to Bahir Dar (1800 ETB, 35 ETB/kg)" << endl;
    cout << "4. Addis Ababa to Dire Dawa (2000 ETB, 40 ETB/kg)" << endl;
    cout << "5. Addis Ababa to Mekelle (2500 ETB, 45 ETB/kg)" << endl;

    cout << "\nSelect the route you want (1-5): ";
    cin >> route;

    // Assign base fare and rate per Kg automatically based on route
    switch(route)
    {
        case 1:
            baseFare = 500;
            ratePerKg = 20;
            break;
        case 2:
            baseFare = 1200;
            ratePerKg = 30;
            break;
        case 3:
            baseFare = 1800;
            ratePerKg = 35;
            break;
        case 4:
            baseFare = 2000;
            ratePerKg = 40;
            break;
        case 5:
            baseFare = 2500;
            ratePerKg = 45;
            break;
        default:
            cout << "Invalid route selection!" << endl;
            return 0;
    }

    // Input passenger details
    cout << "Enter the luggage(bag) weight (Kg): ";
    cin >> weight;

    cout << "Enter passenger age: ";
    cin >> age;

    cout << "Are you a student (Y/N): ";
    cin >> isStud;

    // Validate inputs
    if(weight < 0 || age <= 0 || 
       (isStud != 'Y' && isStud != 'y' &&
        isStud != 'N' && isStud != 'n'))
    {
        cout << "\nError: Invalid input detected!" << endl;
        return 0;
    }

    // Calculate extra luggage charge
    float extra_charge = 0;
    if(weight > MAX_WEIGHT)
    {
        extra_charge = ratePerKg * (weight - MAX_WEIGHT);
    }

    // Calculate total fare before discount
    float total_fare = baseFare + extra_charge;

    // Calculate combined discount (Student + Age brackets)
    if(isStud == 'Y' || isStud == 'y')
    {
        if(age <= 12)
            discount = 0.65; // Student Child
        else if(age >= 60)
            discount = 0.40; // Student Elder
        else
            discount = 0.15; // Regular Student
    }
    else
    {
        if(age <= 12)
            discount = 0.50; // Child
        else if(age >= 60)
            discount = 0.25; // Elder
        else
            discount = 0;    // Standard adult non-student
    }

    // Apply discount to base fare
    float discounted_fare = baseFare * discount;

    // Final amount to pay
    float final_fare = total_fare - discounted_fare;

    // Display comprehensive trip information
    cout << "\n===============================" << endl;
    cout << "      YOUR TRIP INFORMATION    " << endl;
    cout << "===============================" << endl;

    cout << "Selected route             : ";
    switch(route)
    {
        case 1: cout << "Addis Ababa to Adama"; break;
        case 2: cout << "Addis Ababa to Hawassa"; break;
        case 3: cout << "Addis Ababa to Bahir Dar"; break;
        case 4: cout << "Addis Ababa to Dire Dawa"; break;
        case 5: cout << "Addis Ababa to Mekelle"; break;
    }

    cout << "\nBase fare: " << baseFare << " ETB" << endl;
    cout << "Rate per Kg (Extra Luggage): " << ratePerKg << " ETB" << endl;
    cout << "Luggage(bag) weight: " << weight << " Kg" << endl;
    cout << "Extra charge: " << extra_charge << " ETB" << endl;
    cout << "Total fare before discount: " << total_fare << " ETB" << endl;
    cout << "Discount Applied: " << discount * 100 << "%" << endl;
    cout << "Discount amount: " << discounted_fare << " ETB" << endl;
    cout << "===============================" << endl;
    cout << " FINAL FARE TO PAY          : " << final_fare << " ETB" << endl;
    cout << "===============================" << endl;

    return 0;
}

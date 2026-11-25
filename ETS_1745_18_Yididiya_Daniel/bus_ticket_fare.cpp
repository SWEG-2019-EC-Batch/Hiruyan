#include <iostream>
using namespace std;

int main()
{
    float baseFare, ratePerKg, weight, adama,hawassa,bahirDar, diredawa, mekelle;
    const short int MAX_WEIGHT = 20;
    short int age;
    char isStud;
    float discount = 0;

    int route;

    // Route selection
    cout << "AVAILABLE ROUTES" << endl;
    cout << "1. Addis Ababa to Adama" << endl;
    cout << "2. Addis Ababa to Hawassa" << endl;
    cout << "3. Addis Ababa to Bahir Dar" << endl;
    cout << "4. Addis Ababa to Dire Dawa" << endl;
    cout << "5. Addis Ababa to Mekelle" << endl;

    cout << "Select your route (1-5): ";
    cin >> route;

    // Assign base fare and rate per Kg
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

    cout << "Enter the weight (Kg): ";
    cin >> weight;

    cout << "Enter age: ";
    cin >> age;

    cout << "Are you a student (Y/N): ";
    cin >> isStud;

    // Validate input
    if(weight < 0 || age <= 0 || 
       (isStud != 'Y' && isStud != 'y' &&
        isStud != 'N' && isStud != 'n'))
    {
        cout << "Invalid input!" << endl;
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

    // Calculate discount
    if(isStud == 'Y' || isStud == 'y')
    {
        if(age <= 12)
            discount = 0.65;
        else if(age >= 60)
            discount = 0.40;
        else
            discount = 0.15;
    }
    else
    {
        if(age <= 12)
            discount = 0.50;
        else if(age >= 60)
            discount = 0.25;
        else
            discount = 0;
    }

    // Apply discount to base fare
    float discounted_fare = baseFare * discount;

    // Final amount to pay
    float final_fare = total_fare - discounted_fare;

    // Display trip information
    cout << "YOUR TRIP INFORMATION" << endl;

    cout << "Selected route: ";
    switch(route)
    {
        case 1: cout << "Addis Ababa to Adama"; break;
        case 2: cout << "Addis Ababa to Hawassa"; break;
        case 3: cout << "Addis Ababa to Bahir Dar"; break;
        case 4: cout << "Addis Ababa to Dire Dawa"; break;
        case 5: cout << "Addis Ababa to Mekelle"; break;
    }

    cout << "\nBase fare: " << baseFare << " ETB" << endl;
    cout << "Rate per Kg: " << ratePerKg << " ETB" << endl;
    cout << "Luggage weight: " << weight << " Kg" << endl;
    cout << "Extra charge: " << extra_charge << " ETB" << endl;
    cout << "Total fare before discount: " << total_fare << " ETB" << endl;
    cout << "Discount: " << discount * 100 << "%" << endl;
    cout << "Discount amount: " << discounted_fare << " ETB" << endl;
    cout << "Final fare: " << final_fare << " ETB" << endl;

    return 0;
}
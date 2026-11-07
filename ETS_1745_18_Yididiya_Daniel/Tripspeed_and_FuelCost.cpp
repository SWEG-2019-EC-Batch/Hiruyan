/*
input: distance(Km)(double), trip time(hr and min)(int), car's fuel use(litres per Km)(double), price per litre(birr)(double)
output: average speed(Km/hr), fuel used(litres) and fuel cost(birr)
process: 1. Declare the variables for each inputs and set constant variables for the distance per car's use of litre
         2. prompt  the user to enter the required inputs and read the inputs
         3. convert the time to hour= hr+ min/60
         4. calculate the average speed= distance/hour
         5. calculate the fuel used= distance/100*car's fuel use
         6. calculate the fuel cost= price per litre* fuel used
         7. print average speed, fuel used and fuel cost 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double distance,fuelUse,pricePerLitre;
    int hr, min;
    const int distancePerCarsUse=100;

    cout<<"Enter the distance(Km): ";
    cin>>distance;
    cout<<"trip time(hour, min): ";
    cin>>hr>>min;
    cout<<"car's fuel use(litres per Km): ";
    cin>>fuelUse;
    cout<<"price per litre(birr): ";
    cin>>pricePerLitre;

    double hour= hr+ min/60.0;
    double average_speed= distance/hour;
    double fuel_used= (distance/distancePerCarsUse)*fuelUse;
    double fuel_cost= pricePerLitre*fuel_used;

    cout<<fixed<<setprecision(2);
    cout<<"Average speed: "<<average_speed<<" Km/hr"<<endl;
    cout<<"Fuel used: "<<fuel_used<<" litres"<<endl;
    cout<<"Fuel cost: "<<fuel_cost<<" birr"<<endl;

    return 0;

}

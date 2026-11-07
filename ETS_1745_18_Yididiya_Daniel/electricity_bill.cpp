/*
input: electriciy unit(KWh)
output: energy charge, the service charge, total bill
process: 1. Declare the variable for the inputs(int)
         2. set a constant variable for the fixed charge of service= 10, fixedunit=50, for the firstunits=1.50(double), for the secondunits=2.00(double)
         3. prompt the user to enter the electricity unit and read the input
         4. evaluate if the electicity unit < fixedunit, energy charge= (electriciy unit*firstunits)+fixed charge 
            if elecricity unit > fixedunit, energy charge= (fixedUnit*firstUnitsCost)+((electricityUnit-fixedUnit)*secondUnitsCost)
        5. print energy charge, service charge and totalbill= energy charge + service charge
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int electricityUnit;
    const int fixedCharge=10;
    const int fixedUnit=50;
    const double firstUnitsCost=1.50;
    const double secondUnitsCost=2.00;

    cout<<"Enter the Electricity Unit(KWh): ";
    cin>>electricityUnit;

    double energyCharge= (electricityUnit<fixedUnit)? (electricityUnit*firstUnitsCost): (fixedUnit*firstUnitsCost)+((electricityUnit-fixedUnit)*secondUnitsCost);
    double total= energyCharge+ fixedCharge;
    
    cout<<fixed<<setprecision(2);
    cout<<"Energy charge: "<<energyCharge<<endl;
    cout<<"Service charge: "<<fixedCharge<<endl;
    cout<<"Total bill: "<< total<<endl;

    return 0;

}

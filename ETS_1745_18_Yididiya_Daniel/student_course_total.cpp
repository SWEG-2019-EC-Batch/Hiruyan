/* input: assignment, midterm, final (each out of 100)(double)
   output: total, status(pass or fail)
   process: 1. Declare variables for the inputs(double)
            2. set constant variables for the assignment(0.2), midterm(0.3) and final(0.5)
            3. prompt the user to enter assignment, midterm and final and read the inputs
            4. calculate the total= assignment *constantofassignment+ midterm*constantofmidterm+ final*constantoffinal
            5. print total
            6. evaluate if the total is > 50 then print pass if not print fail

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double assignment, midTerm, finalTerm;
    const double assgnPercent=0.2;
    const double midPercent=0.3;
    const double finalPercent=0.5;

    cout<<"Enter assignment, midterm and finalTerm (separated by space): ";
    cin>>assignment>>midterm>>finalTerm;

    double total = assignment*assgnPercent+ midterm*midPercent+ finalTerm*finalPercent;
    string status = (total>50)? "Pass": "Fail";
    
    cout<<fixed<<setprecision(1);
    cout<<"Total: "<<total<<endl;
    cout<<"Status: "<< status;

    return 0;

}

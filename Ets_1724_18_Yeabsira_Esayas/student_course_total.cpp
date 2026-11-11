/* (a) Inputs and Outputs

Inputs: Assignment mark (out of 100), Midterm mark (out of 100), Final exam mark (out of 100)

Outputs: Course total mark (with one decimal place), Pass or Fail status

   (b) Process

1 .Enter the student's assignment, midterm, and final marks.

2. Calculate the course total by multiplying the assignment mark by 20%, the midterm mark by 30%, and the final mark by 50%, then adding them together.

3. Use the conditional operator to check if the total is 50 or higher to choose "Pass", otherwise choose "Fail".

4. Format the output to show one decimal place and print the total along with the Pass/Fail result. */



#include <iostream>
#include <iomanip> // Required for setprecision and fixed

using namespace std;

int main() {
    // Constants 
    const double ASSIGNMENT = 0.20;
    const double MIDTERM= 0.30;
    const double FINAL = 0.50;
    const double PASS_MARK = 50.0;

    // Variables 
    double assignmentMark = 0.0;
    double midtermMark = 0.0;
    double finalMark = 0.0;
    double totalMark = 0.0;

    // inputs 
    cout << "Enter assignment mark (out of 100): ";
    cin >> assignmentMark;

    cout << "Enter midterm mark (out of 100): ";
    cin >> midtermMark;

    cout << "Enter final mark (out of 100): ";
    cin >> finalMark;

    // Calculate 
    totalMark = (assignmentMark * ASSIGNMENT) + 
                (midtermMark * MIDTERM) + 
                (finalMark * FINAL);

    // output 
    cout << fixed << setprecision(1);
    cout << "\n--- Course Results ---" << endl;
    cout << "Total Mark: " << totalMark << endl;
    
    // Use the conditional operator (condition ? true_result : false_result)
    cout << "Status: " << ((totalMark >= PASS_MARK) ? "Pass" : "Fail") << endl;

    return 0;
}

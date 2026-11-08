INPUT:
1. Assignment mark
2. Midterm mark
3. Final mark

OUTPUT:
1. Total
2. Pass or Fail

PROCESS:
1. Declare variables to hold the input and the results.)
2. Print prompts and read the inputs.
3. Define the fixed values (assignment percentage (20%), midterm percentage (30%), and final percentage (50%).)as constants.
4. Calculate the total mark using:
   Assignment percentage * Assignment mark +
   Midterm percentage * Midterm mark +
   Final percentage * Final mark.
5. Determine Pass or Fail using the conditional operator:
   If the total mark is greater than or equal to 50, the result is Pass,Otherwise, the result is Fail.
6. Print the total (with one decimal place) and the result.

C++ PROGRAM:
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double assignmentMark, midtermMark, finalMark, totalMark;

    const double assignmentPercentage = 0.20;
    const double midtermPercentage = 0.30;
    const double finalPercentage = 0.50;

    string result;

    cout << "Enter your Assignment, Midterm, and Final marks: ";
    cin >> assignmentMark >> midtermMark >> finalMark;

    totalMark = (assignmentPercentage * assignmentMark)+( midtermPercentage * midtermMark)+ (finalPercentage * finalMark);

    result = (totalMark >= 50) ? "Pass" : "Fail";

    cout << fixed << setprecision(1);

    cout << "The total mark is " << totalMark
         << ". Based on this mark, you " << result << endl;

    return 0;
}


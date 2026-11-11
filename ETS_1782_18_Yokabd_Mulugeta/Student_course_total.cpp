/* 
Input and Output
Inputs:

Assignment mark (out of 100), midterm mark (out of 100), final examination mark (out of 100).

Outputs:

Total course mark (one decimal place), Pass or Fail.

B. Process (numbered steps)
1 Start the program.

2 Declare variables for assignment, midterm and final marks.

3 Declare a variable for the total course mark.

4 Read the three marks from the user.

5 Calculate the assignment contribution by multiplying the assignment mark by 20%.

6 Calculate the midterm contribution by multiplying the midterm mark by 30%.

7 Calculate the final examination contribution by multiplying the final mark by 50%.

8 Add the three contributions to calculate the total.

9 Use the conditional operator to check whether the total is greater than or equal to 50.

10 Display the total with one decimal place and display Pass or Fail.

11 End the program.
*/

#include <iomanip>
using namespace std;

int main()
{
    double assignment, midterm, finalMark;
    double total;
    const double PASS_MARK = 50;

    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalMark;

    total = (assignment * 0.20) +
            (midterm * 0.30) +
            (finalMark * 0.50);

    cout << fixed << setprecision(1);

    cout << "Course Total: " << total << endl;

    cout << "Result: "
         << (total >= PASS_MARK ? "Pass" : "Fail")
         << endl;

    return 0;
}


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/*
IPO ANALYSIS

Input:
i) Read the student's assignment mark (out of 100)
ii) Read the student's midterm mark (out of 100)
iii) Read the student's final exam mark (out of 100)

Output:
i) Display Course total to one decimal place.
ii) Display the result(Pass or Fail).
iii) Display a congratulatory message for passing or an encouraging message for failing.

Process:
1. Declare variables to hold assignment, midterm, final exam marks, total and result
2. Calculate the weighted assignment mark by multiplying assignment mark by 20/100.
3. Calculate the weighted midterm mark by multiplying midterm mark by 30/100.
4. Calculate the weighted final exam mark by multiplying final exam mark by 50/100.
5. Calculate the course total by adding the three weighted marks.
6. Use the conditional operator (?:)to determine whether the student passes or fails.
7. Assign "Pass" when the course total is greater than or equal to 50; otherwise, assign "Fail".

*/
int main()
{
    // Variable declaration

    double assignmentMark, midtermMark, finalMark;
    double courseTotal;
    string result;
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    // Input section
    cout << "====================================\n";
    cout << "       COURSE TOTAL CALCULATOR      \n";
    cout << "====================================\n";

    cout << "Enter assignment mark (out of 100): ";
    cin >> assignmentMark;

    cout << "Enter midterm mark (out of 100): ";
    cin >> midtermMark;

    cout << "Enter final exam mark (out of 100): ";
    cin >> finalMark;

    // Processing section
    courseTotal = (assignmentMark * ASSIGNMENT_WEIGHT)
                + (midtermMark * MIDTERM_WEIGHT)
                + (finalMark * FINAL_WEIGHT);

    result = (courseTotal >= PASS_MARK) ? "Pass" : "Fail";

    // Output section
    cout << "\n====================================\n";
    cout << "          COURSE TOTAL REPORT            \n";
    cout << "====================================\n";

    cout << fixed << setprecision(1);

    cout << "Assignment Mark : " << assignmentMark << endl;
    cout << "Midterm Mark    : " << midtermMark << endl;
    cout << "Final Exam Mark : " << finalMark << endl;

    cout << "------------------------------------\n";
    cout << "Course Total    : " << courseTotal << endl;
    cout << "Final Result    : " << result << endl;
    cout << (courseTotal>=PASS_MARK?"Congratulations! You passed!": "Sorry! Better luck next time.") <<endl;
    cout << "====================================\n";

    return 0;
}


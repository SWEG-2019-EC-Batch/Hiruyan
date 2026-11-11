/* 
Input and Output
Inputs:

Assignment mark, midterm mark , final examination mark.

Outputs:

Total course mark (one decimal place), Pass or Fail.

B. Process (numbered steps)
1 Start the program.

2 Enter assignment, midterm and final marks.

3 Calculate the total using the given percentages.

4 Determine Pass or Fail using the conditional operator.

5 Display the total and result.

6 End the program.

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


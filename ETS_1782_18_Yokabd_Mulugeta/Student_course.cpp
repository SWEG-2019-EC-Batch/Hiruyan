
#include <iostream>
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


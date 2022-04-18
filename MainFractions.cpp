#include "fractions.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    Fraction f1(5, 2);

    cout << f1.GetNumerator() << " / " << f1.GetDenominator() << endl;

    Fraction f2(3, 6);

    f2 += f1;

    cout << f2.GetNumerator() << " / " << f2.GetDenominator() << endl;

    f2 -= f1;

    cout << f2.GetNumerator() << " / " << f2.GetDenominator() << endl;

    f2++;

    cout << f2.GetNumerator() << " / " << f2.GetDenominator() << endl;

    if (f1 == f2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    if (f1 < f2)
        cout << "f1 smaller" << endl;
    else
        cout << "f1 bigger" << endl;

    cout << "f2 is: " << f2.GetNumerator() << " / " << f2.GetDenominator() << endl;
    cout << "f1 is: " << f1.GetNumerator() << " / " << f1.GetDenominator() << endl;

    f2 = f1;

    cout << "f2 is: " << f2.GetNumerator() << " / " << f2.GetDenominator() << endl;

    !f2;
    cout << "f2 is: " << f2.GetNumerator() << " / " << f2.GetDenominator() << endl;
}
#include <iostream>
#include <cstring>

using namespace std;

void simplification(int &numerator, int &denominator);
// ostream& operator<< (ostream& os, const Fraction& fraction);
// istream& operator>> (istream& is, Fraction& fraction);

class Fraction
{
public:
    Fraction(int numerator, int denominator);
    Fraction(Fraction &copyFraction);
    ~Fraction();
    void Setnumerator(int numerator);
    void Setdenominator(int denominator);
    int GetNumerator() const;
    int GetDenominator() const;
    void simplification();
    Fraction &operator+=(const Fraction &SecondFraction);
    Fraction &operator+=(int number);
    Fraction &operator-=(const Fraction &SecondFraction);
    Fraction &operator++(int);
    bool operator==(const Fraction &SecondFraction);
    bool operator<(const Fraction &SecondFraction);
    Fraction &operator!();
    float operator()();
    Fraction &operator=(const Fraction &AssignFraction);
    friend ostream &operator<<(ostream &os, const Fraction &fraction);
    friend istream &operator>>(istream &is, Fraction &fraction);

private:
    int Numerator;
    int Denominator;
};
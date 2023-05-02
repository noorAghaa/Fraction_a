#include <iostream>
#include <istream>


using namespace std;


class Fraction{
    private:
    int num,denom;

    public:
    Fraction(int a, int b);
    Fraction(Fraction& fr);
    
    int HCF(int a, int b);

    friend ostream& operator<<(ostream& os, const Fraction& fr);
    friend istream& operator>>(istream& is, Fraction& fr);

    friend Fraction& operator+(const Fraction& fr1, const Fraction& fr2);
    friend Fraction& operator+(float f, const Fraction& fr2);
    friend Fraction& operator+(const Fraction& fr1, float f);

    friend Fraction& operator-(const Fraction& fr1, const Fraction& fr2);
    friend Fraction& operator-(float f, const Fraction& fr2);
    friend Fraction& operator-(const Fraction& fr1, float f);

    friend Fraction& operator*(const Fraction& fr1, const Fraction& fr2);
    friend Fraction& operator*(float f, const Fraction& fr2);
    friend Fraction& operator*(const Fraction& fr1, float f);

    friend Fraction& operator/(const Fraction& fr1, const Fraction& fr2);
    friend Fraction& operator/(float f, const Fraction& fr2);
    friend Fraction& operator/(const Fraction& fr1, float f);

    Fraction& operator++();
    Fraction& operator++(int);

    Fraction& operator--();
    Fraction& operator--(int);

    friend bool operator==(const Fraction& fr1, const Fraction& fr2);
    friend bool operator==(const Fraction& fr1, float f);
    friend bool operator==(float f, const Fraction& fr2);

    friend bool operator<=(const Fraction& fr1, const Fraction& fr2);
    friend bool operator<=(const Fraction& fr1, float f);
    friend bool operator<=(float f, const Fraction& fr2);

    friend bool operator>=(const Fraction& fr1, const Fraction& fr2);
    friend bool operator>=(const Fraction& fr1, float f);
    friend bool operator>=(float f, const Fraction& fr2);

    friend bool operator<(const Fraction& fr1, const Fraction& fr2);
    friend bool operator<(const Fraction& fr1, float f);
    friend bool operator<(float f, const Fraction& fr2);

    friend bool operator>(const Fraction& fr1, const Fraction& fr2);
    friend bool operator>(const Fraction& fr1, float f);
    friend bool operator>(float f, const Fraction& fr2);





};
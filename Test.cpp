
#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;


TEST_CASE("Check +: ") 
{
    Fraction frac1(5,3);
    Fraction frac2(14,21);
    float flt = 2.421;

    CHECK( frac1 + frac2 == Fraction(7,3));
    CHECK( flt + frac1 == Fraction(12263,3000));
    CHECK( frac1 + flt == Fraction(12263,3000));
}

TEST_CASE("Check -:")
{
    Fraction frac1(5,3);
    Fraction frac2(14,21);
    float flt = 2.421;

    CHECK( frac1 - frac2 == Fraction(1,1));
    CHECK( flt - frac1 == Fraction(2263,3000));
    CHECK( frac1 - flt == Fraction(-2263,3000));
}

TEST_CASE("Check /:")
{
    Fraction frac1(5,3);
    Fraction frac2(14,21);
    float flt = 2.421;

    CHECK( frac1 / frac2 == Fraction(5,2));
    CHECK( flt / frac1 == Fraction(5000,7263));
    CHECK( frac1 / flt == Fraction(5000,7263));
}

TEST_CASE("Check *:")
{
    Fraction frac1(5,3);
    Fraction frac2(14,21);
    float flt = 2.421;

    CHECK( frac1 * frac2 == Fraction(10,9));
    CHECK( flt * frac1 == Fraction(807,200));
    CHECK( frac1 * flt == Fraction(807,200));
    CHECK((flt * frac2 * flt) == Fraction(1953747, 500000));
}

TEST_CASE("Check increment/decrement:")
{
    Fraction c(4,3);

    CHECK( c == Fraction(4,3));
    CHECK( --c == Fraction(1,3));
    CHECK( c == Fraction(1,3));
    CHECK( c-- == Fraction(1,3));
    CHECK( c == Fraction(-2,3));

    CHECK( ++c == Fraction(1,3));
    CHECK( c == Fraction(1,3));
    CHECK( c++ == Fraction(1,3));
    CHECK( c == Fraction(4,3));

}

TEST_CASE("Check comparison operator:")
{
    Fraction a(5,3);
    Fraction b(14,21);
    float flt = 2.421;

    CHECK( (a >b) == 1);
    CHECK( (flt > b) == 1);
    CHECK( (b > flt) == 0);

    CHECK( (a >=b) == 1);
    CHECK( (flt >= b) == 1);
    CHECK( (b >= flt) == 0);

    CHECK( (a <b) == 0);
    CHECK( (flt < b) == 0);
    CHECK( (b < flt) == 1);

    CHECK( (a <=b) == 0);
    CHECK( (flt <= b) == 0);
    CHECK( (b <= flt) == 1);

}




    


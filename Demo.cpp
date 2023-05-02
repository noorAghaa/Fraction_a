/**
 * Demo file for the exercise on binary tree
 *
 * @author Evgeny Hershkovitch Neiterman
 * @since 2023-03
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "sources/Fraction.hpp"

using namespace std;


int main() {
    Fraction a(5,3), b(14,21);
    float flt = 2.421;

    cout << "a: " << a << "b: " << b << endl;
  
    cout << "a+b: " << a+b << endl;
    cout << "flt + a: " << flt + a << endl;
    cout << "a + flt: " << a + flt << endl << endl; 


    cout << "a-b: " << a-b << endl; 
    cout << "flt - a: " << flt - a << endl;
    cout << " a - flt: " << a - flt << endl<< endl;

    cout << "a/b: " << a/b << endl; 
    cout << "flt / a: " << flt / a << endl;
    cout << " a / flt: " << a / flt << endl<< endl;

    cout << "a*b: " << a*b << endl; 
    cout << "flt * a: " << flt * a << endl;
    cout << " a * flt: " << a * flt << endl<< endl;
    
    cout << "flt * b * flt: " << flt * b * flt << endl<< endl; 
    
    Fraction c = a+b-1;
    cout << "c: " << c << endl;
    
    cout << "--c: " << --c << endl;
    cout <<"c: "<< c << endl;
    cout <<" c--: " << c-- << endl;
    cout <<"c: " << c << endl<< endl;

    cout << "++c: " << ++c << endl;
    cout <<"c: "<< c << endl;
    cout <<" c++: " << c++ << endl;
    cout <<"c: " << c << endl<< endl;

    cout <<"a > b: "<< (a > b) << endl;
    cout <<"flt > b: " << (flt > b) << endl;
    cout <<"b > flt: " << (b > flt) << endl<< endl;

    cout <<"a < b: "<< (a < b) << endl;
    cout <<"flt < b: " << (flt < b) << endl;
    cout <<"b < flt: " <<( b < flt) << endl<< endl;

    cout <<"a >= b: "<< (a >= b) << endl;
    cout <<"flt >= b: " << (flt >= b) << endl;
    cout <<"b >= flt: " << (b >= flt) << endl << endl;

    cout <<"a >= b: "<< (a >= b) << endl;
    cout <<"flt >= b: " << (flt >= b) << endl;
    cout <<"b >= flt: " << (b >= flt )<< endl;
    

}

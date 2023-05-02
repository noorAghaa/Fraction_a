#include "Fraction.hpp"


Fraction::Fraction(int a, int b)
{
    int hcf = HCF(a,b);
    num = a/hcf;
    denom = b/hcf;
}

Fraction::Fraction(Fraction& fr)
{
    num = fr.num;
    denom = fr.denom;
}

int Fraction::HCF(int n1, int n2)
{
    int hcf=1;
    if ( n2 > n1) 
    {   
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
        
    for (int i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
        hcf = i;
        }
    }

    return hcf;
}

Fraction& operator+(const Fraction& fr1,const Fraction& fr2)
{
    int a,b;
   
    a = fr1.num * fr2.denom + fr2.num * fr1.denom;
    b = fr1.denom * fr2.denom;

    Fraction *fr = new Fraction(a,b);
    return *fr;
}

Fraction& operator+(float f,const Fraction& fr2)
{
    Fraction fr(f*1000,1000);
    return fr + fr2;
}

Fraction& operator+(const Fraction& fr, float f)
{
    Fraction ffr(f*1000,1000);
    return fr + ffr;
}


Fraction& operator-(const Fraction& fr1, const Fraction& fr2)
{
    int a,b;
    a = fr1.num * fr2.denom - fr2.num * fr1.denom;
    b = fr1.denom * fr2.denom;
    
    Fraction *fr = new Fraction(a,b);
    return *fr;
}

Fraction& operator-(float f,const Fraction& fr2)
{
    Fraction fr(f*1000,1000);
    return fr - fr2;
}

Fraction& operator-(const Fraction& fr, float f)
{
    Fraction ffr(f*1000,1000);
    return fr - ffr;
}


Fraction& operator*(const Fraction& fr1, const Fraction& fr2)
{
    int a,b;
    a = fr1.num * fr2.num;
    b = fr1.denom * fr2.denom;
    
    Fraction *fr = new Fraction(a,b);
    return *fr;
}
Fraction& operator*(const Fraction& fr1, float f)
{
    Fraction fr(f*1000,1000);
    return fr1 * fr;
}
Fraction& operator*(float f, const Fraction& fr1)
{
    Fraction fr(f*1000,1000);
    return fr * fr1;
}


Fraction& operator/(const Fraction& fr1, const Fraction& fr2)
{
    Fraction temp(fr2.denom,fr2.num);
    return fr1 * temp;
}

Fraction& operator/(const Fraction& fr1, float f)
{
    Fraction temp(1000,f * 1000);
    return fr1 * temp;
}
Fraction& operator/(float f, const Fraction& fr1)
{
    Fraction temp(1000,f * 1000);
    return temp * fr1;
}


Fraction& Fraction::operator ++ (int)
{
    Fraction *fr = new Fraction(num, denom);
    Fraction fr1(*fr + 1);
    num = fr1.num;
    denom = fr1.denom;

    return *fr;
}
Fraction& Fraction::operator ++ ()
{
    Fraction *fr = new Fraction(num, denom);
    Fraction fr1(*fr + 1);
    num = fr1.num;
    denom = fr1.denom;

    return *this;
}

//post-fix
Fraction& Fraction::operator -- (int)
{
    Fraction *fr = new Fraction(num, denom);
    Fraction fr1(*fr - 1);
    num = fr1.num;
    denom = fr1.denom;

    return *fr;
}

// pre-fix
Fraction& Fraction::operator -- ()
{
    Fraction *fr = new Fraction(num, denom);
    Fraction fr1(*fr - 1);
    num = fr1.num;
    denom = fr1.denom;

    return *this;
}

ostream& operator<<(ostream& os, const Fraction& fr)
{
    os << fr.num << " / " << fr.denom  << endl;;
    return os;
}

istream& operator>>(istream& is, Fraction& fr)
{
    is>> fr.num >> fr.denom;
    return is;
}


bool operator==(const Fraction& fr1,const Fraction& fr2)
{
    if(fr1.num != fr2.num)
        return false;
    else if(fr1.denom != fr2.denom)
        return false;
    else    
        return true;
}
bool operator==(const Fraction& fr1,float f)
{
    Fraction fr(f*1000,1000);

    if(fr.num != fr1.num)
        return false;
    else if(fr.denom != fr1.denom)
        return false;
    else    
        return true;
}
bool operator==(float f,const Fraction& fr2)
{
    Fraction fr(f*1000,1000);
    if(fr.num != fr2.num)
        return false;
    else if(fr.denom != fr2.denom)
        return false;
    else    
        return true;
}


bool operator<=(const Fraction& fr1, const Fraction& fr2)
{
    float a = fr1.num * 1.0 / fr1.denom;
    float b = fr2.num * 1.0 / fr2.denom;

    if(a <= b)
        return true;
    else    
        return false;
}

bool operator<=(const Fraction& fr1, float f)
{
    float a = fr1.num * 1.0 / fr1.denom;

    if(a <= f)
        return true;
    else    
        return false;
}

bool operator<=(float f, const Fraction& fr2)
{
    float b = fr2.num * 1.0 / fr2.denom;

    if(f <= b)
        return true;
    else    
        return false;
}

bool operator>=(const Fraction& fr1, const Fraction& fr2)
{
    float a = fr1.num * 1.0 / fr1.denom;
    float b = fr2.num * 1.0 / fr2.denom;

    if(a >= b)
        return true;
    else    
        return false;
}

bool operator>=(const Fraction& fr1, float f)
{
    float a = fr1.num * 1.0 / fr1.denom;

    if(a >= f)
        return true;
    else    
        return false;
}

bool operator>=(float f, const Fraction& fr2)
{
    float b = fr2.num * 1.0 / fr2.denom;

    if(f >= b)
        return true;
    else    
        return false;
}



bool operator<(const Fraction& fr1, const Fraction& fr2)
{
    float a = fr1.num * 1.0 / fr1.denom;
    float b = fr2.num * 1.0 / fr2.denom;

    if(a < b)
        return true;
    else    
        return false;
}

bool operator<(const Fraction& fr1, float f)
{
    float a = fr1.num * 1.0 / fr1.denom;

    if(a < f)
        return true;
    else    
        return false;
}

bool operator<(float f, const Fraction& fr2)
{
    float b = fr2.num * 1.0 / fr2.denom;

    if(f < b)
        return true;
    else    
        return false;
}

bool operator>(const Fraction& fr1, const Fraction& fr2)
{
    float a = fr1.num * 1.0 / fr1.denom;
    float b = fr2.num * 1.0 / fr2.denom;

    if(a > b)
        return true;
    else    
        return false;
}

bool operator>(const Fraction& fr1, float f)
{
    float a = fr1.num * 1.0 / fr1.denom;

    if(a > f)
        return true;
    else    
        return false;
}

bool operator>(float f, const Fraction& fr2)
{
    float b = fr2.num * 1.0 / fr2.denom;

    if(f > b)
        return true;
    else    
        return false;
}
//David Archer
//Gift Box  
//giftwrap.cpp file

#include <iostream>
#include <string>
#include <iomanip>
#include "giftwrap.h"

using namespace std;

GiftWrap::GiftWrap() 
{
    length = 1.0;
    height = 1.0;
    width = 1.0;
    pricePerInch = 0.0036;
    taxRate = 0.08;
}

GiftWrap::GiftWrap(double r, double c) 
{
    length = 1.0;
    height = 1.0;
    width = 1.0;
    setPricePerInch(r);
    setTaxRate(c);
}


double GiftWrap::getHeight() const 
{
    return height;
}

double GiftWrap::getWidth() const 
{
    return width;
}

double GiftWrap::getLength() const 
{
    return length;
}
double GiftWrap::getPriceperInch() const
{
    return pricePerInch;
}

double GiftWrap::getTaxRate() const 
{
    return taxRate;
}

double GiftWrap::calcSubTotal() 
{

    subTotal = pricePerInch * ((2 * length * width) + (2 * length * height) + (2 * width * height));
    return subTotal;
}

double GiftWrap::calcTax() 
{
    tax = subTotal * taxRate;
    return tax;
}

double GiftWrap::calcTotal() 
{
    total = tax + subTotal;
    return total;
}

bool GiftWrap::setHeight(double h) 
{
    if (h > 0) 
    {
        height = h;
        return true;
    }
    else 
    {
        return false;
    }
}

bool GiftWrap::setWidth(double w) 
{
    if (w > 0) 
    {
        width = w;
        return true;
    }
    else 
    {
        return false;
    }

}

bool GiftWrap::setLength(double l) 
{
    if (l > 0) 
    {
        length = l;
        return true;
    }
    else 
    {
        return false;
    }

}
bool GiftWrap::setTaxRate(double t) 
{
    if (t > 0 && t < 1) 
    {
        taxRate = t;
        return true;
    }
    else 
    {
        return false;
    }

}

bool GiftWrap::setPricePerInch(double p) 
{
    if (p > 0) 
    {
        pricePerInch = p;
        return true;
    }
    else 
    {
        return false;
    }
}
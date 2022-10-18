//David Archer
//Gift Box  
//giftwrap.cpp file

#ifndef GIFTWRAP_H
#define GIFTWRAP_H

class GiftWrap
{
private:
        double length;
        double width;
        double height;
        double taxRate;
        double pricePerInch;
        double subTotal;
        double total;
        double tax;

public:
        GiftWrap();
        GiftWrap(double, double);
        bool setLength(double);
        bool setWidth(double);
        bool setHeight(double);
        bool setTaxRate(double);
        bool setPricePerInch(double);
        double getLength() const;
        double getWidth() const;
        double getHeight() const;
        double getPriceperInch() const;
        double getTaxRate() const;
        double calcSubTotal();
        double calcTax();
        double calcTotal(); 
};

#endif
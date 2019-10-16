/*************************************************************************
	> File Name: class_box.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 02:06:01 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box{
    public:
        double length;
        double breadth;
        double height;

    double getVolume(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

double Box::getVolume(void)
{
    return length * breadth * height;    
}

void Box::setLength(double len)
{
    length = len;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

void Box::setHeight(double hei)
{
    height = hei;
}

int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.setLength(5.0);
    Box1.setBreadth(6.0);
    Box1.setHeight(7.0);
    Box2.setLength(5.0);
    Box2.setBreadth(6.0);
    Box2.setHeight(7.0);

    volume = Box1.getVolume();
    cout << "volume1 = " << volume << endl;
    volume = Box2.getVolume();
    cout << "volume2 = " << volume << endl;

    return 0;
}

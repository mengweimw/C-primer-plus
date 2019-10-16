/*************************************************************************
	> File Name: class.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 01:57:30 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box{
    public:
        double length;
        double breadth;
        double height;
};

int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.length = 5.0;
    Box1.breadth = 6.0;
    Box1.height = 7.0;

    Box2.length = 10.0;
    Box2.breadth = 20.0;
    Box2.height = 30.0;

    volume = Box1.length * Box1.breadth * Box1.height;
    cout << "volume1 = " << volume << endl;

    volume = Box2.length * Box2.breadth * Box2.height;
    cout << "volume2 = " << volume << endl;

    return 0;
}

/*************************************************************************
	> File Name: class_pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 03:28:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box {
    public:
        Box(double l = 1.0, double b = 2.0, double h = 3.0)
        {
            cout << "Constructor called" << endl;
            length = l;
            breadth = b;
            height = h;
        }
        double volume()
        {
            return length * breadth * height;
        }

    private:
        double length;
        double breadth;
        double height;
};

int main(void)
{
    Box box1(1.1, 2.2, 3.3);
    Box box2(3.3, 4.4, 5.5);
    Box *ptrBox;

    ptrBox = &box1;
    cout << "Volume of box1: " << ptrBox->volume() << endl;

    ptrBox = &box2;
    cout << "Volume of box2: " << ptrBox->volume() << endl;

    return 0;
}



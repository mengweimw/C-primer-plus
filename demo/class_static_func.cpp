/*************************************************************************
	> File Name: class_static_func.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 03:45:20 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box {
    public:
        static int objectCount;
        Box(double l = 1.0, double b = 2.0, double h = 3.0)
        {
            cout << "Constructor called" << endl;
            length = l;
            breadth = b;
            height = h;
            objectCount++;
        }
        double volume()
        {
            return length * breadth * height;
        }

        static int getCount()
        {
            return objectCount;
        }
    private:
        double length;
        double breadth;
        double height;
};

int Box::objectCount = 0;

int main(void)
{
    cout << "Inital Stage Count:" << Box::getCount() << endl;

    Box box1(1.1, 2.2, 3.3);
    Box box2(1.2, 2.2, 3.3);

    cout << "Final Stage Count:" << Box::getCount() << endl; 

    return 0;
}

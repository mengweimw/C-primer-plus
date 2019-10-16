/*************************************************************************
	> File Name: class_this.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 03:04:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box {
    public:
        Box(double l = 1.0, double b = 2.0, double h = 3.0)
        {
            cout << "Constructor called:" << endl;
            length = l;
            breadth = b;
            height = h;
        }
        double volume()
        {
            return length * breadth * height;
        }

        int compare(Box box)
        {
            return this->volume() > box.volume();
        }
        
    private:
        double length;
        double breadth;
        double height;
};

class Line {
    public:
        Line(){;}
        ~Line(){;}
        Line* get_address()
        {
            return this;
        }
};

int main()
{
    Line line1, line2;
    Line *p;
    Box box1(3.3, 1.2, 1.5 );
    Box box2(8.5, 6.0, 2.0);
    
    if(box1.compare(box2))
    {
        cout << "box2 is smaller than box1" << endl;
    }
    else
    {
        cout << "box2 is equal to or larger than box1" << endl;
    }

    p = line1.get_address();
    cout << "p" << p << endl;
    
    p = line2.get_address();
    cout << "p" << p << endl;

    return 0;
}

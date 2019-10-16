/*************************************************************************
	> File Name: class_friend_ex1.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 02:50:46 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box {
    double width;
    public:
        friend void printWidth(double wid);
        friend class BigBox;
        void setWidth(double wid);
};

class BigBox {
    public:
        void Print(int width, Box &box)
        {
            box.setWidth(width);
            cout << "Width of box: " << box.width << endl;
        }
};

void Box::setWidth(double wid)
{
    width = wid;
}

void printWidth(Box box)
{
    cout << "Width of box: " << box.width << endl;
}

int main()
{
    Box box;
    BigBox big;

    box.setWidth(9.0);
    printWidth(box);

    big.Print(9.9, box);

    getchar();

    return 0;
}

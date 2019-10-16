/*************************************************************************
	> File Name: class_friend.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 02:45:20 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box {
    double weight;

    public:
        friend void printWeight(Box box);
        void setWeight(double wei);
};

void Box::setWeight(double wei)
{
    weight = wei;
}

void printWeight(Box box)
{
    cout << "Weight is " << box.weight << endl;
}

int main()
{
    Box box;

    box.setWeight(1000.0);

    printWeight(box);
    return 0;
}

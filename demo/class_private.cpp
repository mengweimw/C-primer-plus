/*************************************************************************
	> File Name: class_private.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 02:16:39 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box{
    public:
        void setWeight(double wei);
        double getWeight(void);

    private:
        double weight;
};

void Box::setWeight(double wei)
{
    weight = wei;
}

double Box::getWeight(void)
{
    return weight;
}

int main()
{
    Box  box1;
    double weight = 0.0;

    //box1.weight = 100.0;
    //weight = box1.weight;
    box1.setWeight(100.0);
    weight = box1.getWeight();

    cout << "weight = " << weight << endl;

    return 0;
}

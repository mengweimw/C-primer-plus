/*************************************************************************
	> File Name: class_create.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Jul 2019 02:23:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Line{
    public:
        void setLength(double len);
        double getLength(void);
        Line(double len);
        ~Line();
    private:
        double length;
};

Line::Line(double len)
{
    cout << "Object is being created" << endl;
    length = len;
}

Line::~Line()
{
    cout << "Object is being delted" << endl;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main()
{
    Line line(10.0);

    cout << "Length of line:" << line.getLength()  << endl;
    line.setLength(0.0);
    cout << "Length of line:" << line.getLength()  << endl;

    return 0;
}

/*************************************************************************
	> File Name: Reference.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 16 Nov 2019 02:18:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void reset(int &a)
{
    a = 100;
}

int main()
{
    int a = 10;
    int &aa = a;
    cout << "a = " << a << endl;

    reset(aa);
    cout << "a = " << a << endl;

    return 0;
}

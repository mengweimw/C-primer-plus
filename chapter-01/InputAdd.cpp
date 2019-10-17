/*************************************************************************
	> File Name: InputAdd.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Oct 2019 11:02:26 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int v1, v2;
    cout << "Please input two numbers" << endl;

    cin >> v1 >> v2;
    cout << v1 << "+" << v2 << "=" << v1 + v2 << endl;

    int sum = 0, value = 0;
    cout << "Please input some numbers, Ctrl + Z can stop to input:" << endl;
    for(; cin >> value;)
    {
        sum += value;
    }

    cout << "This sum of input numbers is: " << sum << endl;

    return 0;
}

/*************************************************************************
	> File Name: PrintfNumbers.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Oct 2019 11:22:00 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int v1, v2;
    cout << "Please intput two numbers:" << endl;
    cin >> v1 >> v2;

    if(v1 > v2)
    {
        while(v1 >= v2)
        {
            cout << v1 << endl;
            v1 --;
        }
    }
    else if(v1 < v2)
    {
        while(v1 <= v2)
        {
            cout << v1 << endl;
            v1 ++;
        }
    }
    else
    {
        cout << v1 << endl;   
    }

    return 0;
}

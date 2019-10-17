/*************************************************************************
	> File Name: WhileAdd.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Oct 2019 11:15:35 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 50;
    int j = 100;
    
    while (i <= 100)
    {
        sum += i;
        i++;
    }

    cout << "50+...+100 = " << sum << endl;

    sum = 0;
    while (j >= 50)
    {
        sum += j;
        j--;
    }
    cout << "100+...+50 = " << sum << endl;


    sum = 0;
    for(i = 50; i <= 100; i ++)
    {
        sum += i;
    }
    cout << "50 + ... + 100 = " << sum << endl;

    return 0;
}

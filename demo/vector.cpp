/*************************************************************************
	> File Name: vector.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Jul 2019 06:23:28 PM CST
 ************************************************************************/

#include<iostream>
#include <string.h>
#include <vector>
using namespace std;



int main()
{
    int index = 0;
    vector<int>obj;  // create vector of int
    for(index = 0; index < 10; index++)
    {
        obj.push_back(index);
        cout << obj[index] << ",";
    }

    for (index = 0; index < 5; index++)
    {
        obj.pop_back();
    }

    cout << "\n" <<  endl;

    for (index = 0; index < obj.size(); index++)
    {
        cout << obj[index] << ",";
    }

    cout << "\n" <<  endl;
    
    obj.clear();
    cout << "obj.size = " << obj.size() << endl;
    for (index = 0; index < obj.size(); index++)
    {
        cout << obj[index] << ",";
    }

    cout << "\n" << endl;

    return 0;
}

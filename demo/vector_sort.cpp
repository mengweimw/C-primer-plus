/*************************************************************************
	> File Name: vector_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Jul 2019 06:33:37 PM CST
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>obj;
    int i = 0;

    obj.push_back(1);
    obj.push_back(5);
    obj.push_back(2);
    obj.push_back(0);
    obj.push_back(1);
    obj.push_back(4);
    obj.push_back(9);
    obj.push_back(8);
    obj.push_back(0);

    sort(obj.begin(), obj.end());

    cout << "0->9:" << endl;
    for (i = 0; i < obj.size(); i++)
    {
        cout << obj[i] << ",";
    }

    cout << "\n" << endl;

    cout << "9->0" << endl;
    reverse(obj.begin(), obj.end());


    for (i = 0; i < obj.size(); i++)
    {
        cout << obj[i] << ",";
    }

    return 0;
}


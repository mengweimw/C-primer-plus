/*************************************************************************
	> File Name: StringCompare.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 16 Nov 2019 02:23:31 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

bool isShorter(const string &str1, const string &str2)
{
    return str1.size() < str2.size();
}

int main()
{
    string str1 = "This is an Apple";
    string str2 = "This is a HuaWei";
    string &str3 = str1;
    string &str4 = str2;

    if(isShorter(str3, str4))
    {
        cout << "str1 < str2" << endl;
    }
    else
    {
        cout << "str1 >= str2" << endl;
    }

    return 0;
}


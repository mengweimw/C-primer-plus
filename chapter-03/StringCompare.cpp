/*************************************************************************
	> File Name: StringCompare.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 16 Nov 2019 01:34:29 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string str1 = "This is an Apple";
    string str2 = "This is an HuaWei";
    string str3 = "This is an MiUi";
    string str4 = "This is an OPPO";
    string str5 = "This is an VIVO";

    if (str1 == str2)
    {
        cout << str1 << " = " << str2 << endl;
    }
    else if(str1 > str2)
    {
        cout << str1 << " > " << str2 << endl;
    }
    else
    {
        cout << str1 << " < " << str2 << endl;
    }

    return 0;
}

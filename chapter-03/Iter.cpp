/*************************************************************************
	> File Name: Iter.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 18 Oct 2019 04:17:46 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string str("some string");

    if (str.begin() != str.end())  // ensure iter is not empty
    {
        auto it = str.begin();    // it is the first member of str
        *it = toupper(*it);
    }

    cout << str << endl;
    
    for (auto it = str.begin(); it != str.end() && !isspace(*it); ++it)
    {
        *it = toupper(*it);
    }

    cout << str << endl;
    return 0;
}

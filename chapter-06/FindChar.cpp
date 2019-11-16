/*************************************************************************
	> File Name: FindChar.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 16 Nov 2019 02:54:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

string::size_type find_char(const string &s, char c, string::size_type &occcurs)
{
    auto ret = s.size();
    occcurs = 0;

    for (decltype(ret)i = 0; i != s.size(); ++i)
    {
        if (s[i] == c)
        {
            if (ret == s.size())
            {
                ret = i;
            }
            ++occcurs;
        }
    }

    return ret;
}

int main()
{
    string s  = "This is an Apple";
    string &ss = s;
    string::size_type a = 0;
    string::size_type &aa = a;

    auto index = find_char(ss, 'a', aa);

    cout << "index = " << index  << "a = " << a << endl;

    return 0;
}

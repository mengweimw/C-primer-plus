/*************************************************************************
	> File Name: StringFor.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 17 Oct 2019 01:46:42 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string str = "some string";

    for (auto c : str)
    {
        cout << c << endl;
    }

    string str1("Hello World!!!!!!!!!!");
    decltype(str1.size()) punctl_cnt = 0;

    for (auto c : str1)
    {
        if ( ispunct(c) )
        {
            ++punctl_cnt;
        }
    }

    cout << punctl_cnt << " punctuation characters in  " << str1 << endl;

    string str2("Hello World!!!");
    for (auto &c : str2) // c是一个引用，因此每次修改的是c引用的str2中的字符，最后再写入str2中
    {
        c = toupper(c);
    }

    cout << str2 << endl;

    string str3("some string");

    if (!str3.empty())
    {
        str3[0] = toupper(str3[0]);
    }
    cout << str3 << endl;

    for (decltype(str3.size()) index = 0; index != str3.size() && !isspace(str3[index]); index++)
    {
        str3[index] = toupper(str3[index]);
    }
    cout << str3 << endl;

    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
        << " separated by spaces. Hit ENTER when finished: "
        << endl;
    string result; 
    string::size_type n;
    while (cin >> n)
    {
        if (n < hexdigits.size())
        {
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: " << result << endl;

    return 0;
}

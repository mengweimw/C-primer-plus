/*************************************************************************
	> File Name: HelloWorld.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Oct 2019 02:20:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string line;

    while (getline(cin, line))
    {
        if (!line.empty())
        {
            if(line.size() < 5)
            {
                cout << line << endl;

            }
        }
    }

    string s;
    cin >> s;
    cout << s << endl;

    string word;
    while (cin >> word)
    {
        cout << word << endl;
    }

    return 0;
}

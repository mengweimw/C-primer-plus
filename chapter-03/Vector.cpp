/*************************************************************************
	> File Name: Vector.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 18 Oct 2019 03:47:36 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    int i = 0;
    
    for(i = 0; i < 100; i++)
    {
        ivec.push_back(i);
    }

    for(i = 0; i < ivec.size(); i++)
    {
        cout << ivec[i] << endl;
    }

    vector<int> v{1,2,3,4,5,6,7,8,9};

    for (auto &i : v)
    {
        i *= i;
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    //string word;
    //vector<string> svec;
    //while (cin >> word)
    //{
    //    svec.push_back(word);
    //}

    return 0;
}

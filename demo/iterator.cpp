/*************************************************************************
	> File Name: iterator.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 20 Sep 2019 03:36:12 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // v是存放int类型变量的可变长度的数组，目前属于未初始化 状态
    int i = 0;
    int j = 0;

    for(i = 0; i < 5; i++)
    {
        v.push_back(i);
    }

    for(i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";  // *i 是迭代器指向的元素
        *i *= 2;
    }

    cout << endl;

    for(vector<int>::reverse_iterator j = v.rbegin(); j != v.read(); i++)
    {
        cout << *j << " ";
    }

    return 0;
}

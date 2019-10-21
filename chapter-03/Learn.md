# 字符串、向量和数组
## string
### 命名空间using的使用
    - 每一个名字，都需要有自己的命名空间；
    - 头文件中不应该包含using声明，避免包含此头文件的所有文件中产生冲突；

### 标准库类型string
  - 定义和初始化string对象
    - using std::string;
    - string s1; // 定义一个空的字符串s1
    - string s2(s1); // s2 是 s1的副本
    - string s2 = s1; // 等价于 string s2(s1);
    - string s3("value"); // s3是字面值为 "value"的副本
    - string s4 = "value"; // 等价于string s3("value");
    - string s5(n, 'c'); // 把s4初始化为由连续n个字符c组成的串
  - string对象上的操作
    - os << s; // 将s写到输出流os中，返回os
    - is >> s; // 从is中读取字符串赋值给s，字符串以空白分隔，返回is
    - getline(is, s); // 从is中读取一行赋值给s，返回is
    - s.empty();    // s为空返回true，否则返回false
    - s.size();     // 返回s中字符的个数
    - s[n];         // 返回s中第n个字符，位置n从0计起
    - s1+s2;        // 返回s1和s2连接之后的结果
    - s1 = s2       // 用s2的副本代替s1中原来的字符
    - s1 == s2      // 如果s1和s2中所含的字符完全一样，则他们相等，string对象的相等性判断，对大小写字母敏感
    - s1 != s2
    - <, <=, >, >=  // 利用字典中的顺序进行比较，且对 字母的大小写敏感
  - cctype头文件中的函数
    - isalnum(c)    // 当c是字母或数字时为真
    - isalpha(c)    // 当c是字母时为真
    - iscntrl(c)    // 当c是控制字符时为真
    - isdigit(c)    // 当c是数字时为真
    - isgraph()     // 当c不是空格，但可以打印时为真
    - islower(c)    // 当c是小写字母时为真
    - isprint(c)    // 当c是可打印字符时为真（即c是空格或c具有可视形式）
    - ispunctl()    // 当c是标点符号时为真（即c不是控制字符、数字、字母、可打印空白中的一种）
    - isspace(c)    // 当c是空白时为真（即c是空格、横向制表符、纵向制表符、回车符、换行符、进纸符中的一种）
    - isupper(c)    // 当c是大写字母时为真
    - isxdigit(c)   // 当c是十六进制数字时为真
    - tolower(c)    // 当c是大写字母时，输出对应的小写字母，否则原样输出c
    - toupper(c)    // 当c是小写字母时，输出对应的大写字母，否则原样输出c
        ```
            string str1("Hello World!!!!!!!!!!");
            decltype(str1.size()) punctl_cnt = 0; // 使用decltype关键字声明计数变量punct_cnt，他的类型是s.size函数的返回值类型，也就是string::size_type。

            for (auto c : str1)
            {
                if ( ispunct(c) )
                {
                    ++punctl_cnt;
                }
            }

        ```
  - 下标引用string中的每个字符
    - string对象的下标必须大于等于0且小于s.size()，使用超出此范围的下标将会引发不可预知的结果，因此使用下标访问空string也会引发不可预知的后果

### 标准库类型vector
  - vector表示对象的集合，其中所有对象的类型都相同。集合中的每个对象都有一个与之对应的索引，索引用于访问对象。因为vector “容纳着”其他对象，所以也常被称之为容器。
    - 想使用vector，必须要包含指定的头文件和用户空间声明
        ```
            #include <vector>
            using std::vector;
        ```
 - vector对象的常用方法：
    - vector<T> v1;         // v1是一个空vector，它潜在元素都是T类型的，执行默认初始化
    - vector<T> v2(v1);     // v2中包含v1所有元素的副本
    - vector<T> v2 = v1;    // 等价于v2(v1)，v2中包含v1所有元素的副本
    - vector<T> v3(n, val); // v3包含了n个重复的元素，每个元素的值都是val
    - vector<T> v4(n);      // v4包含了n个重复地执行了值初始化的对象
    - vector<T> v5{a,b,c...} // v5包含了初始值个数的元素，每个元素被赋予相应的初始值
    - vector<T> v5={a,b,c...} // 等价于上一条
    ```
        vector<int> ivec;
        vector<int> ivec1(ivec);
        vector<int> ivec2 = ivec;

        vector<string> svec{"a", "an", "the"};
        vector<int> ivec(10, -1);
        vector<string> svec(10, "hi");
    ```
  - 其他vector操作
    - v.empty();            // 如果v不含有任何元素，返回真；否则返回假
    - v.size();             // 返回v中元素的个数
    - v.push_back(t);       // 向v的尾端添加一个值为t的元素
    - v[n];                 // 返回v中第n个位置上元素的引用
    - v1 = v2;              // 用v2中元素的copy替换v1中的元素
    - v1 = {a,b,c...};      // 用列表中元素的copy替换v1中的元素
    - v1 == v2;             // v1和v2相等且仅当他们的元素个数相同且对应位置的元素值都相同
    - v1 != v2;
    - <, <=, >, >=          // 已字典的顺序进行比较
    - [ ] vector<int>::size_type  // 正确
    - [ ] vector::size_typr       // 错误
    ***注：不能用下标的方式添加vector元素*** 

### 迭代器介绍
  - begin和end迭代器，end迭代器返回尾元素的下一个位置，改迭代器只是的是容器的一个本不存在的尾后元素
  - 如果容器为空，则begin和end返回的是同一个迭代器，都是尾后迭代器。
    - *iter         // 返回迭代器iter所指元素的引用
    - iter->mem     // 解引用iter并获取该元素的名为mem的成员，等价于(*iter).mem
    - ++iter        // 令iter指示容器中的下一个元素
    - --iter        // 令iter指示容器中的上一个元素
    - iter1 == iter2    // 判断两个迭代器是否相等（不相等），如果两个迭代器只是的是同一个元素或者他们是同一个容器的尾后迭代器，则相等，反之则不等；
    - iter1 != iter2

### 数组
  - 数组类似于vector，但是数组的长度必须是固定的，不能随意向数组中增加元素
  - 如果不清楚元素的确切个数，请使用vector，反之可以使用数组
  - 数组的维度在编译的时候，就应该是已知的，因此维度必须是一个常量表达式
  - 定义数组时，必须制定数组的类型，不能使用auto关键字由初始值的列表推断类型；
    - unsigned int cnd = 42;            // 不是常量表达式
    - constexpr unsigned int sz = 42;   // 常量表达式
    - int arr[10];                      // 含有10个整数的数组
    - int *parr[sz];                    // 含有32个整型指针的数组
    - string bad[cnt];                  // 错误： cnt不是常量表达式
    - string strs[get_size()];          // 当get_size是constexpr时正确，否则错误

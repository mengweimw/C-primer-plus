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
    

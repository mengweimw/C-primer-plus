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
    

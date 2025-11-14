/*
1、int *p[4]; //p是一个含有4个元素的数组，数组的每个元素都是int类型的指针
2、int (*p)[4]; //p是一个指向含有4个int类型元素的数组的指针,是指向二维数组的指针

C-string(以下说的都是C风格字符串)
3、char str[] = "hello"; //字符串数组，自动在末尾添加了一个'\0'作为结束标志
4、const char *str = "hello"; //这是指针，字符串常量，存储在只读区，不能修改内容
5、cin.getline(char array[], int size, char delimiter); //从输入流中读取一行字符，存入数组
其中delimiter默认为换行符'\n'，可以指定其他字符作为结束符
6、#include <cctype>

   islower(char c); //判断字符c是否为小写字母
   isupper(char c); //大写字母
   isdigit(char c); //数字字符
   isalpha(char c); //字母
   isalnum(char c); //字母或数字

   tolower(char c); //将字符c转换为小写字母
   toupper(char c); //将字符c转换为大写字母

7、#include <cstdlib>
    strlen(char str[]); 
    //计算字符串长度，不包括结尾的'\0'，可以传参指针或者数组名

   strcpy(char dest[], const char src[]); 
    //将src字符串复制到dest数组中，dest必须有足够空间
   strncpy(char dest[], const char src[], int n); 
    //将src字符串的前n个字符复制到dest数组中，dest必须有足够空间

   strcat(char dest[], const char src[]); 
    //将src字符串追加到dest字符串的末尾，dest必须有足够空间
   strncat(char dest[], const char src[], int n);
    //将src字符串的前n个字符追加到dest字符串的末尾，dest必须有足够空间  

   strcmp(const char str1[], const char str2[]); 
    //比较两个字符串的大小，返回负数、0、正数分别表示小于、等于、大于
8、 #include <cstdlib>
    atoi(const char str[]); 
    //将字符串转换为整数，遇到非数字字符停止转换

    atof(const char str[]); 
    //将字符串转换为浮点数，遇到非数字字符停止转换  
    atoll(const char str[]); 
    //将字符串转换为长长整数，遇到非数字字符停止转换

    itoa(int value, char str[], int base); 
    //将整数value转换为base进制的字符串，存入str数组中

9、stoi(const string& str, size_t* idx = 0, int base = 10); 
    //将字符串转换为整数，遇到非数字字符停止转换

    stol(const string& str); //长整数
    stoll(const string& str); //长长整数
    stof(const string& str); //浮点数
    stod(const string& str); //双精度浮点数

10、to_string(int value); 
    //将整数value转换为字符串
11、size_t 是 C++ 标准库中定义的无符号整数类型，
    通常用于表示对象的大小或容器中的元素数量。


*/
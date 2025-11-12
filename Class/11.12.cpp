/*
1、不论int指针还是double指针，本质上是一样的，都是指向某种数据类型的地址，只不过数据类型不同而已。
2、局部指针使用时需要初始化，否则会出现野指针问题，可用nullptr初始化
3、全局指针如果没有初始化，默认值是nullptr，不会导致野指针问题。
4、间接引用操作符*用于访问指针所指向的内存地址中的数据。
5、取地址操作符&用于获取变量的内存地址。
6、void指针是一种特殊的指针类型，可以指向任何数据类型，根据指向的数据确定类型，
但不能直接解引用。
7、指针的大小在大多数现代计算机系统中是固定的，
通常为4字节（32位系统）或8字节（64位系统），
8、指针++和指针--操作会根据指针所指向的数据类型大小进行地址的增加或减少。
例如，对于int指针，++操作会增加4字节（假设int为4字节）；
对于double指针，+2操作会增加16字节（假设double为8字节）。
含义是指向下一个整数地址。
9、stack先使用高地址，heap先使用低地址。
10、int *ptr1, ptr2;  ptr1是int指针，ptr2是int变量。
定义多个指针时，每个指针都需要单独加*号。
11、指针常量和常量指针（important）
    常量指针：const int* ptr; 不能通过ptr修改所指向的数据，但可以让ptr指向其他地址。
    指针常量：int* const ptr; 不能让ptr指向其他地址，但可以通过ptr修改所指向的数据。
12、数组名是一个指针常量，指向数组的第一个元素，不能修改数组名的值。
myArray是一个指向数组首元素的指针常量，
不能修改myArray的值，但可以通过myArray访问和修改数组元素。
myArray = &myArray[0];

*(myArray++); // 错误，不能修改指针常量的指向
但是可以*(myArray+k)访问数组元素，但是一般不用这种写法。
可以重新定义一个指针 int *ptr = myArray; 然后通过ptr++来遍历数组。


13、用指针法访问二维数组
    ①a + i ：移动到第 i 行，类型是 int (*)[3]
    ②*(a + i) ：取出这一行的首地址，类型是 int*
    ③*( *(a + i) + j ) ：移动到第 j 个元素并取值

int main() {
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int (*p)[3] = a;  // p指向一维数组的指针，指向二维数组的第一行(记忆)

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(p + i) + j) << " ";
        }
        cout << endl;
    }
}

14、前置自增prefix:
        UPInt& UPInt::operator++()
    {
        *this += 1;   // 对当前对象加1
        return *this; // 返回自身引用
    }
15、后置自增postfix:
        UPInt UPInt::operator++(int)
    {
        UPInt temp = *this; // 先保存当前对象的值
        *this += 1;         // 对当前对象加1
        return temp;       // 返回之前保存的值
    }
16、
    int x[4] = {10, 20, 30, 40};
    int *p = x;

    cout << *++p << endl;  20
    cout << *p++ << endl;  20
    cout << ++*p << endl;  31
    cout << (*p)++ << endl;  31
    cout << *p << endl;  32

    return 0;
}





*/
 #include<iostream>
 using namespace std;
// int main(){
//     cout<<sizeof(int*);
//     return 0;
// }

class Person
{
public:

	Person(int age)
	{
		//1、当形参和成员变量同名时，可用this指针来区分，this指针指向被调用的成员函数所属的对象
		this->age = age;
	}

	Person& PersonAddPerson(Person p)//此处加不加&有巨大差别
	{
		this->age += p.age;
		//2、返回对象本身
		return *this;
	}

	int age;
};

void test01()
{
	Person p1(10);
	cout << "p1.age = " << p1.age << endl;

	Person p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//链式编程思想
	cout << "p2.age = " << p2.age << endl;
}

int main() {
	test01();
	return 0;
}
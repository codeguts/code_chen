#include <stdio.h>

/*int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d",&a,&b);
    c = (a>b) ? (a) : (b);
    printf("%d\n",c);
    return 0;
}*/



/*
void test()
{
    int a = 5;
    a++;
    printf("%d\n",a);
}

int main()
{
    int i = 0;
    while(i<10)
    {
        test();
        i++;
    }

    return 0;
}
*/

/*
void test()
{
    static int a = 5;//本来一个局部变量是存放在静态区，被static修饰之后存在静态区
    a++;
    printf("%d\n",a);
}

int main()
{
    int i = 0;
    while(i<10)
    {
        test();
        i++;
    }

    return 0;
}

*/


//static修饰全局变量,改变全局变量的连接属性，由外部连接属性，变成内部连接属性
//这个静态变量只能在自己所在的源文件内部使用，不能在其他源文件内部使用
//声明外部符号
/*
extern int g_val;
int main()
{
    printf("%d",g_val);
    return 0;
}*/



//static修饰函数
//static修饰函数和修饰全局变量是一样的
//这个函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用
/*
extern int Add(int x,int y);
int main()
{

    int a = 10;
    int b = 20;
    printf("%d\n" ,Add(a,b));
    return 0;
}*/

/*int main()
{
    //register-建议放在寄存器中，具体有没有取决于编译器
    register int num = 10;

    return 0;
}*/


//宏  是替换
/*
#define ADD(x,y) ((x)+(y))
int main()
{

    int a =10;
    int b =20;
    int c =ADD(a,b);
    printf("%d",c);
    return 0;
}
*/

struct Stu
{
    char name[20];
    int age;
    char sex[5];
};

int main()
{

    struct Stu s ={"张三",20,"男"};
    printf("%s %d %s",s.name,s.age,s.sex);
    return 0;
}
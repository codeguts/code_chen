
/*#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d",&a);
    printf("%d",a);
    return 0;
}*/


#include <stdio.h>
//%c打印字符
//%d-整形
//%s-字符串
//%f-float
//%lf-double
//%p-地址的打印


/*
int main()
{
    char ch=0;
    scanf("%c",&ch);
    printf("%c",ch);
    return 0;
}*/


/*
int main()
{
    {
        int a = 100;

    }
    printf("%d",a);//只在上一个大括号可以用
    return 0;
}*/


//主函数外部定义的叫全局变量
/*
int a = 2023;
void test()
{
    printf("2--->%d\n",a);
}
int main()
{
    printf("1--->%d\n",a);
    test();
    return 0;
}*/

//需要声明外部变量
//extern
/*
extern int g_val;
int main()
{
    printf("%d",g_val);
    return 0;
}*/



/*
int main()
{
    int a = 3;
    printf("%d\n",a);
    a = 10;
    printf("%d\n",a);
    return 0;
}*/

/*
int main()
{
*/
/*    const int a = 10;//const-常属性，无法修改
    printf("%d\n",a);
    a=3;
    printf("%d\n",a);*//*


    */
/*int n=10;*//*

    const int n=10;
    int arr[n];

    return 0;
}*/


/*
#define SIZE 10

#define CH 'w'
int main()
{
    int a = SIZE;
    int arr[SIZE];
    printf("%c",CH);

    return 0;
}*/


//枚举常量
//enum 枚举关键字
/*
enum SEX
{
    MALE=4,
    FEMALE,
    SECRET
};
int main()
{

    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);
    return 0;
}*/


/*int main()  // /0是字符串结束标志
{
    char ch[6]={'\0','a','b','c','d','e','f'};
    char ch2[]="abcdef";
    printf("%s\n",ch);
    printf("%s\n",ch2);
    return 0;
}*/


/*
#include<string.h>
int main()
{
    char ch1[]={'a','b','c'};
    char ch2[]="abc";
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    printf("%d\n%d",len1,len2);
    return 0;
}*/

/*
int main()
{
    printf("are you ok\?\?");
    return 0;
}*/


/*
int main()
{
    printf("c:\test\test.c");
    return 0;
}*/

/*
int main()
{
    printf("c:\test\test.c\n");
    printf("c:\\test\\test.c");
    return 0;
}*/

/*

int main()
{
    printf("%d",'\130');//8进制转为10进制  \ddd
    return 0;
}*/



/*
int main()
{
    printf("%c\n",'\x31');//  \xdd 16进制转为10进制
    printf("%d",'\x31');
    return 0;
}*/


/*
int main()  //分支语句
{
    printf("加入比特学习\n");
    printf("你愿意好好学习吗？(1/0)>:");
    int flag = 0;
    scanf("%d",&flag);

    if(flag == 1)
        printf("好offer\n");
    else if(flag == 0)
        printf("卖红薯\n");
    return 0;
}*/



int main()
{
    int line =0;
    while(line < 50000)
    {
        printf("敲代码%d\n",line);
        line++;
    }
    if(line == 50000)
        printf("好offer\n");
    else
        printf("努力\n");
}
#include <stdio.h>
/*int main()
{
    int n = 10;
    int arr[n];
    return 0;
}*/

//判断三角形问题
/*
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while(scanf("%d %d %d",&a,&b,&c) == 3)
    {
        if(a+b>c && a+c>b && b+c>a)
        {
            if(a==b && b==c)
            {
                printf("Equllateral triangle!\n");
            }
            else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a))
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }

    return 0;
}
*/

//BMI指数
/*int main()
{
    int w = 0;
    int h = 0;
    scanf("%d %d",&w,&h);
    double bmi=w/((h/100.0)*(h/100.0));
    printf("%.2lf",bmi);
    return 0;
}*/


/*

//输入年龄，输入该年龄何多少秒
int main()
{
    int age = 0;
    scanf("%d",&age);
    long long seconds = 31560000 * age;
    printf("%lld",seconds);
}
*/

//设置闹钟
/*
int main()
{
    int h = 0;
    int m = 0;
    int k = 0;
    scanf("%d:%d %d",&h,&m,&k);
    int h2 = (h+(m+k)/60)%24;
    int m2 = (m+k)%60;
    printf("%02d:%02d\n",h2,m2);
    return 0;
}*/



/*
int main()
{
    char ch =0;
    scanf("%c",&ch);
    printf("%d",ch);
    return 0;
}*/


/*
int main()
{

    int a = 15;
    int* pa=&a;
    *pa = 30;
    printf("%d",a);
    return 0;
}*/

/*

int main()
{
    int a = 0;
    int* p =&a;
    printf("%zd\n",sizeof(p));
    printf("%zd\n",sizeof(int*));
    return 0;
}*/



/*
struct S
{
    char name[20];
    int age;
    float score;
};
void print1(struct S t)
{
    printf("%s %d %f\n",t.name,t.age,t.score);
}
void print2(struct S* ps)
{
    printf("%s %d %f\n",ps->name,ps->age,ps->score);
}
int main()
{
    struct S s = {"zhangsan",20,85.5f};
    print1(s);
    print2(&s);
    return 0;
}*/




//continue跳过本次循环，直接到下一次循环的判断部分。
//break 直接跳过循环，执行循环外部的语句。
/*
int main()
{
    int n = 1;

    while(n<= 10)
    {
        n++;
        if(n==5)
            continue;
        printf("%d\n",n);

    }
    return 0;
}*/


/*
int main()
{

    printf("%d",EOF);
    return 0;
}*/



/*
int main()
{
    int ch=getchar();
    */
/*printf("%c",ch);*//*

    putchar(ch);
    return 0;
}*/


/*
int main()
{
    int ch = 0;
    while((ch=getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}*/



int main()
{
    char password[20]={0};
    printf("请输入密码:>");
    scanf("%s",password);
    printf("请确认密码(Y/N):");
    while(getchar() !='\n')
    {
        ;
    }
    char input = 0;
    scanf("%c",&input);
    if('Y'==input)
    {
        printf("确认成功\n");
    }
    else
    {
        printf("确认失败\n");
    }
    return 0;
}
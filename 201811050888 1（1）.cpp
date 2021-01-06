#include <stdio.h>
int fun(int a,int b)
{
int c=(a%10)*1000+(b%10)*100+(a/10)*10+b/10;     //将a的十位和个位依次存放在c数的十位和千位上，b的十位和个位依次存放在c数的个位和百位上
return c;
}

int main() {
int a;
int b;
printf("请输入第一个两位数a:");
scanf("%d",&a);
printf("请输入第二个两位数b:");
scanf("%d",&b);
int c=fun(a,b);
printf("结果为:%d",c);
return 0;
}

#include <stdio.h>
int fun(int a,int b)
{
int c=(a%10)*1000+(b%10)*100+(a/10)*10+b/10;     //��a��ʮλ�͸�λ���δ����c����ʮλ��ǧλ�ϣ�b��ʮλ�͸�λ���δ����c���ĸ�λ�Ͱ�λ��
return c;
}

int main() {
int a;
int b;
printf("�������һ����λ��a:");
scanf("%d",&a);
printf("������ڶ�����λ��b:");
scanf("%d",&b);
int c=fun(a,b);
printf("���Ϊ:%d",c);
return 0;
}
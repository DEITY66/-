#include <stdio.h>
void fun(int a,int b,int &c)
{
c=(a%10)*1000+(b%10)*100+(a/10)*10+b/10;     //��a��ʮλ�͸�λ���δ����c����ʮλ��ǧλ�ϣ�b��ʮλ�͸�λ���δ����c���ĸ�λ�Ͱ�λ��

}

int main() {
int a;
int b;
printf("�������һ����λ��a:");
scanf("%d",&a);
printf("������ڶ�����λ��b:");
scanf("%d",&b);
int c;
fun(a,b,c);
printf("���Ϊ:%d",c);
return 0;
}
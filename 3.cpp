#include<iostream>
using namespace std;
int n,i,a[301],b,c,d[301],j,e[301],f[301];
/*a����Ϊ���ĳɼ���f����Ϊ�����Ƚϵĳɼ���e����Ϊû�仯
׼������ĳɼ�*/
int main()
{ cin>>n;
for(i=1;i<=n;i++)
e[i]=i;//��e���鸳ֵ����ţ�
for(i=1;i<=n;i++){
cin>>a[i]>>b>>c;//������Ƴɼ�
f[i]=d[i]=a[i]+b+c;//f��d����������ܳɼ�
}
for(i=1;i<n;i++)
for(j=i+1;j<=n;j++)
if(d[i]<d[j]||(d[i]==d[j]&&a[i]<a[j])) {
//�ܷ��ٻ����ܷ�һ���������٣�����
swap(d[i],d[j]);swap(a[i],a[j]);swap(e[i],e[j]);}
cout<<e[1]<<" "<<f[e[1]];//���
for(i=2;i<=5;i++){
cout<<endl<<e[i]<<" "<<f[e[i]];
}
return 0;
}
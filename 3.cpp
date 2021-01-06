#include<iostream>
using namespace std;
int n,i,a[301],b,c,d[301],j,e[301],f[301];
/*a数组为语文成绩，f数组为用来比较的成绩，e数组为没变化
准备输出的成绩*/
int main()
{ cin>>n;
for(i=1;i<=n;i++)
e[i]=i;//给e数组赋值（序号）
for(i=1;i<=n;i++){
cin>>a[i]>>b>>c;//输入各科成绩
f[i]=d[i]=a[i]+b+c;//f，d数组来存放总成绩
}
for(i=1;i<n;i++)
for(j=i+1;j<=n;j++)
if(d[i]<d[j]||(d[i]==d[j]&&a[i]<a[j])) {
//总分少或者总分一样，语文少，交换
swap(d[i],d[j]);swap(a[i],a[j]);swap(e[i],e[j]);}
cout<<e[1]<<" "<<f[e[1]];//输出
for(i=2;i<=5;i++){
cout<<endl<<e[i]<<" "<<f[e[i]];
}
return 0;
}
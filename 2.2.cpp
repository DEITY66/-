#include <iostream>
using namespace std;

int main()
{
    int N, K=1,M,p;
    cin >> M >> N;
	if(N==1)
	{
		p=(M+1);
	}
	else
	{
    int *a = new int[M + 1];
    fill(a, a + M + 1, 0);

    //numΪԼɪ��ʣ��������countΪ������
     p=K;
    int  count = 0, num = M;
    while (num)
    {
        //δ�����ĺ��Ӳ��뱨������count��Nʱ����
        if (a[p] != -1 && ++count == N)
        {
            count = 0;
            a[p] = -1; //���ѳ������˱��Ϊ-1
            num--;
           
        }
        
        p++;                 //ָ��ָ����һ����
        p = (p - 1) % M + 1; //p��Χת��[1,M]
		
    };
	}
	
	cout<<"���Ӵ����ǣ�"<<p-1<<" ";
    return 0;
	
}
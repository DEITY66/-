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

    //num为约瑟夫环剩余人数，count为所报数
     p=K;
    int  count = 0, num = M;
    while (num)
    {
        //未出环的猴子参与报数，当count是N时出环
        if (a[p] != -1 && ++count == N)
        {
            count = 0;
            a[p] = -1; //将已出环的人标记为-1
            num--;
           
        }
        
        p++;                 //指针指向下一个人
        p = (p - 1) % M + 1; //p范围转成[1,M]
		
    };
	}
	
	cout<<"猴子大王是："<<p-1<<" ";
    return 0;
	
}
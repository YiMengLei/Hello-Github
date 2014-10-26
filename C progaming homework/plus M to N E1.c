#include <stdio.h>
int main()
{
    int M,N,c;
    for(;;)//:一个无限循环
    {
        printf("please input two interger:");
        scanf("%d %d",&M,&N);
        if(M==0&&N==0)
            break;
        c=(M+N)*(N-M+1)/2;//:用等差数列求和公式计算从M加到N
        printf("%d\n",c);
    }
}
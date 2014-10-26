#include <stdio.h>
int main()
{
    int M,N,c;
    printf("please input two inter1ger:");
    scanf("%d %d",&M,&N);
    for(c=0;M<=N;c+=M,M++)
        //:用循环语句计算从M加到N，“，”从左到右，意思是C先加上M，M再自己加1，如果M>N则跳出循环
    {
        if(M==0&&N==0)//:如果M,N均为零则循环终止
            break;
    }
    printf("%d\n",c);
}
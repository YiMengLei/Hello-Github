#include <stdio.h>
int main()
{
    int M,N,c,d;
    for(;;)
    {
        printf("please input two interger:");
        scanf("%d %d",&M,&N);
        if(M==0&&N==0)
            break;
        for(c=0;M<=N;c+=M,M++)
            {}
        printf("%d\n",c);
    }
}
//:Final one with the cooperation of 1 and 2
#include<stdio.h>
int main()
{int a,b,c,i,max,min,sum;
    b=0;
    for(i=1;i<=10;i++)
    {scanf("%d",&a);
        if(a>max)
        {max=a;}
        if(a<min)
        {min=a;}
        c=a;
        b=b+c;
    }
    sum=(b-max-min)/8;
    printf("Canceled Max Score:%d\n",max);
    printf("Canceled Min Score:%d\n",min);
    printf("Average Score:%d\n",sum);
}
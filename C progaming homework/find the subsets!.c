#include <stdio.h>
int main()
{   int n,m,i,a,j,num;
    scanf("%d",&n);
    n++;
    m=1;
    for (i=1;i<=n;i++)
        m*=2;
    m--;
    for (i=0;i<=m;i++)
    {   printf("{");
        a=i;
        num=0;
        while (a!=0)
        {j=1;
            if (a%2==1)
            {j=a;
                printf("%d",num);
            }
            num++;
            a/=2;
            if(a!=0)
            {if((j%2)==1&&j!=1)
                printf(" ");}
        }
        printf("}\n");
    }
}
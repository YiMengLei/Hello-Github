#include<stdio.h>
int main()
{
    int n,a,b,c,p;
    double gcm;
    for(;;)
    {
        printf("which kind of money do you wanna exchange?\n1 or 2 or 5 or 10 or 20 or 50 or 100?\n");
        scanf("%d",&p);
        if(p==1||p==2||p==5||p==10||p==20||p==50||p==100)
        {
            printf("How many %ds do you wanna exchange\n",p);
            scanf("%d",&n);
            gcm=18;
            for(gcm=18;gcm<3000;gcm+=18)
            {
                a=gcm/1.8;
                b=gcm/1.5;
                c=gcm/2;
                if((0.1*a+0.5*b+c)==n*p)
                {
                    printf("%d,%d,%d\n\n",a,b,c);
                    break;
                }
            }
                if(gcm>=3000)
                    printf("Are you a Super man ??\nThere is NO ANSWER!!\n\n");
        }
        else
            printf("FUCK YOU!!STUPID MAN!!\n\n");
    }
}
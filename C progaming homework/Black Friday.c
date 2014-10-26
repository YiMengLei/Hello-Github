#include <stdio.h>
int main()
{
    int y,count=0,i;
    int a[12]={13,44,72,103,133,164,194,225,256,286,317,347};
    int b[12]={13,44,73,104,134,165,195,226,257,287,318,348};
    int c[12]={0};
    for(;;)
    {
    printf("please input a year number:\n");
    scanf("%d",&y);
        if(y<=0)
        {printf("FUCK YOU!STUPIT MAN!");
            continue;}
    if((y%4==0&&y%100!=0)||y%400==0)
    {
        for(i=0;i<12;i++)
        {
            if((y-1+((y-1)/4)-((y-1)/100)+((y-1)/400)+b[i])%7==5)
            {
                count++;
                c[i]=i+1;
            }
        }
    }
    else
    {
        for (i=0; i<12; i++)
        {
            if((y-1+((y-1)/4)-((y-1)/100)+((y-1)/400)+a[i])%7==5)
            {
                count++;
                c[i]=i+1;
            }
        }
        
    }
    if(count==1)
        {
            printf("there is a Black Friday in %d\n",y);
            printf("that is\n");
            for(i=0;i<12;i++)
                if(c[i]!=0)
                    printf("%d/%d/13\n",y,c[i]);
        }
    else
    {
        printf("there are %d Black Friday in %d\n",count,y);
        printf("they are\n");
        for(i=0;i<12;i++)
        {
            if(c[i]!=0)
                printf("%d/%d/13\n",y,c[i]);
        }
    }
    }
}
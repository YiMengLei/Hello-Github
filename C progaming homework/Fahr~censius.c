#include<stdio.h>
int main()
{
    int a,i;
    float b,c;
    for(i=1;i<4;i++)
    {
     scanf("%d %f",&a,&b);
	 if(a==2)
     {c=b*9/5+32;
        printf("The Fahrenheit is %.2f\n",c);
     }
     else if(a==1)
     {c=(b-32)*5/9;
        printf("The Centigrade is %.2f\n",c);
     }
    else if(a!=1||a!=2)
    {   printf("Wrong input!\n");
    }
    }
}
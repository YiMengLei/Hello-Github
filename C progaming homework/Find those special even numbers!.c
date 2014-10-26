#include<stdio.h>
int main()
{int num1,num2,ans,a,b,c,d,n;
n=0;
for(;;)
{scanf("%d %d",&num1,&num2);
if(num1==0||num2==0)
break;
if((num1<1000||num2>9999)||(num1>9999||num2<1000))
printf("Error\n");
else
{for(ans=num1;ans<=num2;ans++)
	{if(ans%2==1)
		continue;
	a=ans/1000;
	b=(ans%1000)/100;
	c=(ans%100)/10;
	d=ans%10;
	if(a==b||b==c||c==d||b==d||a==d||a==c)
		continue;
	printf("%d  ",ans);
	n+=1;
}
printf("\ncounter=%d\n",n);
n=0;
}
}
}
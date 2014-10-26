#include<stdio.h>
int main()
{int i,n,j;
 scanf("%d",&n);
 if(n<0)
	 printf("Error!\n");
 else
	for(i=1;i<=n;i++)
	{for(j=1;j<=i-1;j++)
		printf(" ");
	for(j=1;j<=n;j++)
		printf("*");
		printf("\n");
	}
 }

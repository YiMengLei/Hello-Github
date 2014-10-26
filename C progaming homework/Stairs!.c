#include<stdio.h>
int fib(int x)
{
	int N;
	if(x==1||x==2)
	return(1);
else
	N=fib(x-1)+fib(x-2);//*递归算法*//
	return(N);
}

int main()
{	
	int n,ways;
	scanf("%d",&n);
	ways=fib(n+1);
	if(n==1)
	printf("There is %d way of climbing the stairs!\n",ways);
	else			
	printf("There are %d ways of climbing the stairs!\n",ways);
}
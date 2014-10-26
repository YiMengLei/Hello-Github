#include<stdio.h>
int main()//:主函数
{
	int num1,num2,sum;
    printf("please in put two interger:");
	scanf("%d,%d",&num1,&num2);//:输入两个整数
	sum=num1+num2;
	if(num1>0&&num2>0)//:判断是否都为正数
		printf("%d+%d=%d\n",num1,num2,sum);
	else//:否则
		printf("(%d)+(%d)=(%d)\n",num1,num2,sum);
}
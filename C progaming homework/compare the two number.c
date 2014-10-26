#include<stdio.h>
int cal(int x,int y,int m,int n)
{int e;
    e=x*n-y*m;
    return(e);
}

int main(int argc, char* argv[])
{
	int a,A,b,B;
	for(;;)
    {scanf("%d/%d %d/%d",&a,&A,&b,&B);
    if(A==0&&B==0)
        break;
    if(A==0||B==0)
    {printf("Error!\n");
        continue;}
	if(cal(a,A,b,B)> 0)
	{
		printf("%d/%d > %d/%d\n",a,A,b,B);
	}
	else if (cal(a,A,b,B)== 0)
	{
		printf("%d/%d = %d/%d\n",a,A,b,B);
	}
	else
	{
		printf("%d/%d < %d/%d\n",a,A,b,B);
	}
    }
}


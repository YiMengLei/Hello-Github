#include <stdio.h> 
#include <string.h> 
#include <math.h>
int t(char ch)/*将输入的字符转化为数字*/
{
	int i;
	if(ch>='A')
		i=ch-'A'+10;
	else
		i=ch-'0';
	return i;
}
/*找出表示这个数的最小进制*/
int base(char *s)
{
	int m=0,n;
	for(;*s!='\0';*s++)
	{
		n=t(*s);
		if(n>m)
			m=n;
	}
	return (m+1);
}

int main()
{
	char a[50],b[50];
	int i,flag=0,A,B,Aa,Ab,la,lb,ta,tb;
	scanf("%s %s",a,b);
	A=base(a);
	B=base(b);
	la=strlen(a);
	lb=strlen(b);
		for(A=base(a);A<=36&&flag==0;A++)
		{
			ta=0;/*每次初始化ta*/
			for(i=0;i<=(la-1);i++)
			{

				ta+=t(a[i])*pow(A,la-i-1);
			}
			for(B=base(b);flag==0&&B<=36;B++)
			{
				tb=0;/*初始化tb*/
				for(i=0;i<=(lb-1);i++)
				{
					tb+=t(b[i])*pow((float)B,lb-i-1);
				}
				if(ta==tb)
				{
					Aa=A;
					Ab=B;
					flag=1;
				}
			}
		}
		if(flag==1)
			printf("%s (base %d) = %s (base %d)\n",a,Aa,b,Ab);
		else
			printf("%s is not equal to %s in any base 2..36\n",a,b);
		return 0;
}
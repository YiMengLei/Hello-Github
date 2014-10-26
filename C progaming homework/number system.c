#include<stdio.h>
#include<string.h>
void rev(char *s)
{
	char *p=s,c;
	while(*p)
		p++;
	p--;
	while(s<p)
	{
		c=*s;
		*s++=*p;
		*p--=c;
	}
}

int chan(char *s,int num,int dig)
{	
	int i=0;
	while(num)
	{
		if(num%dig>=10)
		{s[i++]='A'+(num%dig-10);}
		else
		{s[i++]='0'+num%dig;}
		num=num/dig;
	}
	rev(s);
	s[i]='\0';
	return 0;
}

int main()
{
	int NUM,DIG;
	char str[100]={0};
	scanf("%d %d",&NUM,&DIG);
	chan(str,NUM,DIG);
	printf("%d in %d based system is %s\n",NUM,DIG,str);
	return 0;
}
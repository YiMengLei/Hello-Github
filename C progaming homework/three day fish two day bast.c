#include<stdio.h>
int leapyear(year)
int year;
{int leap;
    if((year%4==0&&year%100!=0)||(year%400==0))
        leap=1;
    else
        leap=0;
    return(leap);
}

int ttday(N,Y,R)
int N,Y,R;
{	int y=N-1990;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i_month=1;
	int totalda=R;
	if(leapyear(N)==1)
	{a[2]=29;}
	while (i_month<Y)
    { for(i_month=1;i_month<Y;i_month++)
        totalda+=a[i_month];}
	if(y>0)
	{totalda+=365*y+(N-1989)/4;}
	return (totalda);
}


int main()
{int year,month,day,totalday,i,m;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
    {   scanf("%d %d %d",&year,&month,&day);
        totalday = ttday(year,month,day);
        if (totalday%5==1||totalday%5==2||totalday%5==3)
        { printf("He was fishing on %d.%d.%d\n",year,month,day); }
        else if(totalday%5==4||totalday%5==0)
        {printf("He was basking on %d.%d.%d\n",year,month,day); }
	}
}
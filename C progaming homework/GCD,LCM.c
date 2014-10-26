#include<stdio.h>
int GCD(x,y)
int x,y;
{ int a,b,t;   
	 if(x<y) 
	 {  
	   t=x;x=y;y=t;  
	 }  
	 a=x; b=y;  
	 while(b!=0)   
	 {  
	   t=a%b;  
	   a=b;  
	   b=t;  
	 }  
	 return(a); 
}
int LCM(m,n)
int m,n;
{int b;
	b=(m*n)/(GCD(m,n));
		return(b);
}
int main()
{
	int NUM1,NUM2; 
	for(;;)
	{scanf("%d %d",&NUM1,&NUM2);
	  if(NUM1==0&&NUM2==0)
		 break;
	  if((NUM1<0||NUM2<0)||NUM1==0||NUM2==0)
	  { printf("Error!\n");
	  continue;}
	 else if(NUM1>0&&NUM2>0)
		printf("The GCD of %d and %d is:%d\n",NUM1,NUM2,GCD(NUM1,NUM2));
		printf("The LCM of %d and %d is:%d\n",NUM1,NUM2,LCM(NUM1,NUM2));
	}
}
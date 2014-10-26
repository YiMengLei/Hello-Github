#include <math.h>  
#include <stdio.h> 
/*判断是否为质数*/
int prime(int x)   
{int a=1,i;   
for(i=2;i<=(int)(sqrt(x));i++)//*这里是用√x一下的 每一个整数去除x，都除不尽就是质数
            {   
               if((x%i)==0)   
               {   
				   a=0;
                 break;
                }   
            }   
return(a);   
}   
int main( )   
{
  long int n,p,q,flagp,flagq;   
  for(;;){   
      scanf("%ld",&n );   
  if(n==0)   
      break;   
  if (((n%2)!=0)||(n<4))   
    printf("Input Error!\n");   
  else  
   {   
     p=1;   
     do{   //*从1和n-1开始依次把两个和为n的数拿出来，直到两个都为素数，就输出。
          p=p+1;   
          q=n-p;   
          flagp=prime(p);   
          flagq=prime(q);   
     } while(flagp*flagq==0);   
   printf("%ld = %ld + %ld\n",n,p,q);   
  }   
  }   
}  
  

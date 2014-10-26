#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];
    int i=0,t[123]={0};
    scanf("%s %s",str1,str2);
    strcat(str1,str2);
    /*除重，排序*/
    while(str1[i]!='\0')
    {	t[str1[i++]]=1;}//这里用到了整数和字符的一一对应关系和转化
    for(i=0;i<123;i++)//123是ASCII里一直到表示z的整数值，依次输出
    {if(t[i])
		printf("%c",i);}
    printf("\n");
}
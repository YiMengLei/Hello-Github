#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j;
	int k=1;
	char ch;
	char str1[100],str2[100];
	char p[100];
	scanf("%s %s",str1,str2);
	strcat(str1,str2);
    /*排序,操作后为ascII从大到小排列的字符数组*/
	while(str1[i]!='\0')
	{
		for(j=i;j<strlen(str1);j++)
		{
			if(str1[i]>str1[j])
			{
				ch=str1[i];
				str1[i]=str1[j];
				str1[j]=ch;
            }
        }
		i++;
	}
    /*除重*/
	ch = str1[0];
	p[0] = str1[0];
	for(i=0;i<strlen(str1);i++)
	{
		if(ch!=str1[i])
		{
			ch=str1[i];
			p[k++]=str1[i];
        }
	}
	/*(p[k]= '\0';) 可加可不加*/
	printf("%s\n",p);
	return 0;
}
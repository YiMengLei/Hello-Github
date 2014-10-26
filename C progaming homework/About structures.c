#include<stdio.h>
struct book
{
	char name[20];
	float price;
}

main()
{
	int i;
	struct book a[5];
	for(i=0;i<5;i++)
	{
		scanf("%s %f",a[i].name,&a[i].price);
	}
	for(i=0;i<5;i++)
	printf("%s %.2f",a[i].name,a[i].price);
}
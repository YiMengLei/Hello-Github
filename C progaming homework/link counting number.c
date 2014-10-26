#include<malloc/malloc.h>
#include<stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct number)
struct number
{
    long key;
    int count;
    struct number *next;
};
struct number *add(long k,struct number *head)
{
    int flag=1;
    struct number *p=head;
    while(p!=NULL &&flag)
    {
        if(p->key==k)
            flag=0;
        else
            p=p->next;
    }
    if(!flag)
        p->count++;
    else
    {
        p=head;
        head=(struct number*)malloc(LEN);
        head->key=k;
        head->count=1;
        head->next=p;
    }
    return head;
}

void disp(struct number *p)
{
    printf("The results are:\n");
    while (p!=NULL)
    {
        printf("%ld %6d\n",p->key,p->count);
        p=p->next;
    }
}

void main()
{
    struct number *head=NULL;
    long k;
    printf("请输入整数，负数结束:\n");
    scanf("%ld",&k);
    while (k>=0)
    {
        head=add(k,head);
        scanf("%ld",&k);
    }
    disp(head);
}
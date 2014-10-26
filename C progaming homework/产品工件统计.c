#include<malloc/malloc.h>
#include<stdio.h>
struct ELE
{
    int no;
    int num;
    struct ELE *next;
};

main()
{
    FILE *fp;
    int m,n;
    char c[10];
    struct ELE *u,*v,*p,*base;
    base=NULL;
    gets(c);
    if((fp=fopen(c,"r")==NULL))
        printf("A is not opened\n");
    while (fscanf(fp,"%d%d",&n,&m)==2)
    {
        for(v=base;v!=NULL && v->no!=n;u=v,v=v->next);
        if(v!=NULL)
        {
            if(v=base)
                base=v->next;
            else
                u->next=v->next;
            v->num+=m;
        }
        else
        {
            v=(struct ELE*)malloc(sizeof(struct ELE));
            v->no=n;
            v->num=m;
        }
        p=base;
        while (p!=NULL)
          if(v->num>p->num || v->num==p->num && v->no<p->no)
              break;
          else
          {
              u=p;
              p=p->next;
          }
        if(p==base)
            base=v;
        else
            u->next=v;
        v->next=p;
    }
    p=base;
    printf("职工的生产情况如下：\n");
    while(p!=NULL)
    {
        printf("%d,%d\n",p->no,p->num);
        p=p->next;
    }
}

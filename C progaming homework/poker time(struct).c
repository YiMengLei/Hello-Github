#include<stdio.h>
#define SWIRCH(m)
struct poker
{
    char str[4];
    int num;
};
struct poker a[3],b[3];
void swap(struct poker *a,struct poker *b)
{
    struct poker t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int i,j;
    struct poker *m,*n;
    for(i=0;i<3;i++)
    {
        scanf("%s",a[i].str);
        a[i].num=0;
    }
    for (i=0; i<3; i++)
    {
        scanf("%s",b[i].str);
        b[i].num=0;
    }
    for(m=a;m<a+3;m++)
    {
        switch (m->str[0])
        {
            case'H':
                m->num+=42;
                break;
            case'S':
                m->num+=28;
                break;
            case'D':
                m->num+=14;
                break;
            case'C':
                m->num+=0;
                break;
            default:
                printf("Input Error!\n");
                return 0;
        }
        switch (m->str[1])
        {
            case '2':
                m->num+=1;
                break;
            case '3':
                m->num+=2;
                break;
            case '4':
                m->num+=3;
                break;
            case '5':
                m->num+=4;
                break;
            case '6':
                m->num+=5;
                break;
            case '7':
                m->num+=6;
                break;
            case '8':
                m->num+=7;
                break;
            case '9':
                m->num+=8;
                break;
            case '1':
                m->num+=9;
                break;
            case 'J':
                m->num+=10;
                break;
            case 'Q':
                m->num+=11;
                break;
            case 'K':
                m->num+=12;
                break;
            case 'A':
                m->num+=13;
                break;
            default:
                printf("Input Error!\n");
                return 0;
        }
    }
    for(m=b;m<b+3;m++)
    {
        switch (m->str[0])
        {
            case'H':
                m->num+=42;
                break;
            case'S':
                m->num+=28;
                break;
            case'D':
                m->num+=14;
                break;
            case'C':
                m->num+=0;
                break;
            default:
                printf("Input Error!\n");
                return 0;
        }
        switch (m->str[1])
        {
            case '2':
                m->num+=1;
                break;
            case '3':
                m->num+=2;
                break;
            case '4':
                m->num+=3;
                break;
            case '5':
                m->num+=4;
                break;
            case '6':
                m->num+=5;
                break;
            case '7':
                m->num+=6;
                break;
            case '8':
                m->num+=7;
                break;
            case '9':
                m->num+=8;
                break;
            case '1':
                m->num+=9;
                break;
            case 'J':
                m->num+=10;
                break;
            case 'Q':
                m->num+=11;
                break;
            case 'K':
                m->num+=12;
                break;
            case 'A':
                m->num+=13;
                break;
            default:
                printf("Input Error!\n");
                return 0;
        }
    }
    if((a[0].num==a[1].num)||(a[0].num==a[2].num)||(a[1].num==a[2].num)||(b[0].num==b[1].num)||(b[0].num==b[2].num)||(b[1].num==b[2].num))
    {printf("Input Error!\n");
        return 0;}
    
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {if(a[j].num>a[i].num)
        {
            swap(a+i, a+j);
        }
            if(b[j].num>b[i].num)
            {
                swap(b+i, b+j);
            }
        }
    }
    m=a;
    n=b;
    i=0;
    for(;(m<a+3)||(n<b+3);m++,n++)
    {
        if((m->num)>(n->num))
        {
            printf("Winner is A!\n");
            printf("A: %s %s %s\n",a[0].str,a[1].str,a[2].str);
            printf("B: %s %s %s\n",b[0].str,b[1].str,b[2].str);
            break;
        }
        if((n->num)>(m->num))
        {
            printf("Winner is B!\n");
            printf("A: %s %s %s\n",a[0].str,a[1].str,a[2].str);
            printf("B: %s %s %s\n",b[0].str,b[1].str,b[2].str);
            break;
        }
        if(i==2)
        {
            printf("Winner is X!\n");
            printf("A: %s %s %s\n",a[0].str,a[1].str,a[2].str);
            printf("B: %s %s %s\n",b[0].str,b[1].str,b[2].str);
            break;
        }
        i++;
    }
}
struct s
{	int x, *y;
} * p;
int data[5]={10, 20, 30, 40, 50,};
struct s array[5]=
{100,&data[0],200,&data[1],300,&data[2],400,&data[3],500,&data[4]
};	                /* array: array of structure */
int main ( )
{	p = array;
    printf ("%d\n", p->x);	     printf ("%d\n", (*p).x);
    printf ("%d\n", *p->y);	     printf ("%d\n", *(*p).y);
    printf ("%d\n", ++p->x);   	    printf ("%d\n", (++p)->x);
    printf ("%d\n", p->x++);	    printf ("%d\n", p->x);
    printf ("%d\n", ++ (*p->y));	   printf ("%d\n", ++ * p->y);
    printf ("%d\n", * ++ p->y);      printf ("%d\n", p->x);
    printf ("%d\n", * (++p)->y);     printf ("%d\n", p->x);
    printf ("%d\n", * p->y ++);      printf ("%d\n", p->x);
    printf ("%d\n", * (p->y) ++);    printf ("%d\n", p->x);
    printf ("%d\n", * p ++ ->y);     printf ("%d\n", p->x);
} /* struarr2.c */

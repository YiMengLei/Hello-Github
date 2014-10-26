struct s {	int x;   int *y; };
int data [5] = {10,20,30,40,50};
struct s array[5]
={100,&data[0],200,&data[1],300,&data[2], 400,&data[3], 500,&data[4] };
int main ( ) /* struarr.c */
{	int i=0;
	struct  s  s_var;
	s_var = array[0];
	printf ("%d\n", s_var.x);
	printf ("%d\n", *s_var.y);
	printf ("For array:\n");
	printf ("%d\n", array[i].x);
 	printf("%d\n", *array[i].y);
	printf ("%d\n", ++array[i].x);
	printf("%d\n", ++ * array[i].y);
	printf ("%d\n", array[++i].x);
	printf("%d\n", * ++ array[i].y);
	printf ("%d\n",(* array[i].y) ++);
	printf("%d\n", * (array[i].y ++));/*why*/
	printf ("%d\n", * array[i].y ++);
	printf ("%d\n", * array[i].y);
}



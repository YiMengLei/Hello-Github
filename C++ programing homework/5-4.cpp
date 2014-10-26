//5-4
#include<iostream>
#include<iomanip>
using namespace std;

void input(int *a,char *b)
{
	int max(80);
	cout<<"Input a number and a string:";
	cin>>*a;
	cin.getline(b,max,'\n');
}
void output(int a,char *b)
{
	cout<<"The output is;"<<a<<"  "<<b<<endl;
}
int main()
{
	int a(0);
	char b[80];
	for(;;)
    {
        input(&a,b);
        if(a==0)
            break;
		output(a,b);
    }
    return 0;
}

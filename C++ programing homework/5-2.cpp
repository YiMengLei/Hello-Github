//5-2
#include<iostream>
#include<iomanip>
using namespace std;

void swap(int *a,int *b)
{
	int *t;
	*t=*a;
	*a=*b;
	*b=*t;
}

int main()
{
	int a,b;
	cout<<"Please input 2 numbers"<<endl<<"Input:";
	cin>>a>>b;
	swap(a,b);
	cout<<"The output:"<<a<<" "<<b;
	return 0;
}

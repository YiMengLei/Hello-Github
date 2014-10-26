//4-3
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a[100];
	int i=0;
	cout<<"please enter a string"<<endl<<"ATTENTION!!!! CHARACTER ONLY"<<endl;
	cin>>a;
	for(i=0;i<100;i++)
	{
		if(a[i]>'z'||a[i]<'A')
		{
			return 0;
		}
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
		else
			break;
	}
	cout<<"The output is:"<<endl<<"\t"<<a<<endl<<endl;
}

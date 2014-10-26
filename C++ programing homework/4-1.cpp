//4-1
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long arraysize(5);
	double* values( new double[arraysize]);
	double* temp(nullptr);
	double input(0);
	double ave(0);
	int i(0);
	int jiaobiao(0);
	cout <<"please enter values"<<endl
    <<"enter 0 to exit:"<<endl;
	for(;;)
	{
		cin >>input;
		if(input==0)
			break;
		values[jiaobiao++]=input;
		if(jiaobiao==arraysize)
		{
			arraysize+=5;
			temp=new double[arraysize];
			for(i=0;i<jiaobiao;i++)
				temp[i]=values[i];
			delete [] values;
			values=temp;
			temp=nullptr;
		}
	}
	for(i=0;i<jiaobiao;i++)
	{
		ave+=values[i];
	}
	ave=ave/jiaobiao;
	cout<<endl;
	for(i=0;i<jiaobiao;i++)
	{
        cout<<setw(10)<<values[i];
        if((i+1)%5==0)
			cout<<endl;
    }
	cout<<endl
    <<"the average of those "<<jiaobiao<<" numbers is "<<ave<<"."<<endl;
	delete [] values;
	values=nullptr;
	return 0;
}

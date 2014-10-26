//2.4
#include <iostream>
using namespace std;
int main()
{
	int width = 1280;
	int height = 1024;
	cout<<endl;
	cout<<"please enter the width of your screen:"<<endl;
	cin>>width;
	cout<<"please enter the height of your screen:"<<endl;
	cin>>height;
	double aspect = (double)width / height;
	cout<<endl;
	cout<<"The aspect of your screen is:"<<aspect<<":1"<<endl;
}

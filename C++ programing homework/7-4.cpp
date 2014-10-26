#include <iostream>
using namespace std;

class CRecord
{
private:
	char str[14];
	int num;
public:
	int getRecord()
	{
		char a[14];
		int b;
		cout<<"input a string and a number(enter the number with 0 to exit):"<<endl;
		cin>>a>>b;
		strcpy(str,a);
		num=b;
		if(b!=0)
			return b;
		else
			return 0;
	}

	void putRecord()
	{
		cout<<str<<"   "<<num<<endl;
	}
};

int main()
{
	CRecord test;
	for(;;)
	{
		//test.getRecord();
		if(test.getRecord()==0)
			break;
		test.putRecord();
	}
	return 0;
}
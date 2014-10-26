//3-1
//WHILE
#include <iostream>
using namespace std;
int main()
{
	int sum(0),num,i;
	cout<<endl
    <<"please enter numbers to sum up:\n";
	while (1)
	{
		cin>>num;
		if(num==0)
			break;
		else sum+=num;
	}
	cout<<"the sum of these number is:"<<sum<<endl;
}
/*
 DO-WHILE
 #include <iostream>
 using namespace std;
 int main()
 {
 int sum(0),num;
 cout<<endl
 <<"please enter numbers to sum up:\n";
 do
 {
 cin>>num;
 sum+=num;
 }while(num!=0);
 cout<<"the sum of these number is:"<<sum<<endl;
 }
 */
/*
 FOR
 #include <iostream>
 using namespace std;
 int main()
 {
 int sum(0),num;
 cout<<endl
 <<"please enter numbers to sum up:\n";
 for(;;)
 {	cin>>num;
 if (num==0)
 break;
 else
 sum+=num;
 }
 cout<<"the sum of these number is:"<<sum<<endl;
 }
 */
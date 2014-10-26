//6-2
#include<iostream>
#include<cstring>
using namespace std;
template <typename T> int equal(T a,T b)
{
	if(a==b)
		return 1;
	else
		return 0;
}
int equal(char *a,char *b)
{
	if(strcmp(a,b)==0)
		return 1;
	else
		return 0;
}
int main()
{
	int a,b;
	double aa,bb;
	char aaa,bbb;
	char aaaa[100],bbbb[100];
	cout<<"input 2 int:"<<endl;
	cin>>a>>b;
    if(equal(a,b))
        cout << "same" << endl;
    else
        cout << "different" << endl;
	cout<<"input 2 double:"<<endl;
	cin>>aa>>bb;
    if(equal(aa,bb))
        cout << "same" << endl;
    else
        cout << "different" << endl;
	cout<<"input 2 char:"<<endl;
	cin>>aaa>>bbb;
    if(equal(aaa,bbb))
        cout << "same" << endl;
    else
        cout << "different" << endl;
	cout<<"input 2 string:"<<endl;
	cin>>aaaa>>bbbb;
    if(equal(aaaa,bbbb))
        cout << "same" << endl;
    else
        cout << "different" << endl;
}

//7-3
#include <iostream>             
using namespace std;

 struct Sample
       {
          int a;
          int b;
          char* sPtr;
       }a,b;
void output(Sample * a)
{
	cout<<"a:<"<<a->a<<" , "<<a->b<<" , "<<a->sPtr<<">"<<endl;
}
int main()
{
  
   char s[20]="hello World!";
   a.a=1;
   a.b=2;
   a.sPtr=new char[strlen(s)+1];
   b.a=10;
   b.b=20;
   b.sPtr="aljkjaijce";
   strcpy(a.sPtr,s);
   a.sPtr=s;
   cout<<"copy֮ǰ"<<endl;
   output(&a);
   output(&b);
   b=a;
   cout<<"copy֮��"<<endl;   
   output(&a);
   output(&b);
   a.sPtr[0]='Z';
   cout<<"�޸�a֮��"<<endl;
   output(&a);
   output(&b);
   cout<<"��ʱb�ı���Ϊa��b��sPtrָ��ͬһ��ַ��"<<endl;
   b.a=a.a;
   a.b=a.b;
   b.sPtr=new char[strlen(s)+1];
   strcpy(b.sPtr,a.sPtr);
   cout<<"��ֱ��copy a to b"<<endl;
   output(&a);
   output(&b);
   a.sPtr[0]='A';
   cout<<"�޸�a֮��"<<endl;
   output(&a);
   output(&b);
   cout<<"��ʱa.sPtr��b.sPtrָ��ͬ��ַ"<<endl;
}

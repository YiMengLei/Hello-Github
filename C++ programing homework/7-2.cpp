//7-2
#include <iostream>             
using namespace std;

int main()
{
   struct Sample
       {
          int a;
          int b;
          char* sPtr;
       }a,b;
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
   cout<<"a:<"<<a.a<<" , "<<a.b<<" , "<<a.sPtr<<">"<<endl;
   cout<<"b:<"<<b.a<<" , "<<b.b<<" , "<<b.sPtr<<">"<<endl;
   b=a;
   cout<<"copy֮��"<<endl;   
   cout<<"a:<"<<a.a<<" , "<<a.b<<" , "<<a.sPtr<<">"<<endl;
   cout<<"b:<"<<b.a<<" , "<<b.b<<" , "<<b.sPtr<<">"<<endl;
   a.sPtr[0]='Z';
   cout<<"�޸�a֮��"<<endl;
   cout<<"a:<"<<a.a<<" , "<<a.b<<" , "<<a.sPtr<<">"<<endl;
   cout<<"b:<"<<b.a<<" , "<<b.b<<" , "<<b.sPtr<<">"<<endl;
   cout<<"��ʱb�ı���Ϊa��b��sPtrָ��ͬһ��ַ��"<<endl;
   b.a=a.a;
   a.b=a.b;
   b.sPtr=new char[strlen(s)+1];
   strcpy(b.sPtr,a.sPtr);
   cout<<"��ֱ��copy a to b"<<endl;
   cout<<"a:<"<<a.a<<" , "<<a.b<<" , "<<a.sPtr<<">"<<endl;
   cout<<"b:<"<<b.a<<" , "<<b.b<<" , "<<b.sPtr<<">"<<endl;
   a.sPtr[0]='A';
   cout<<"�޸�a֮��"<<endl;
   cout<<"a:<"<<a.a<<" , "<<a.b<<" , "<<a.sPtr<<">"<<endl;
   cout<<"b:<"<<b.a<<" , "<<b.b<<" , "<<b.sPtr<<">"<<endl;
   cout<<"��ʱa.sPtr��b.sPtrָ��ͬ��ַ"<<endl;
}

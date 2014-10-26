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
   cout<<"copy之前"<<endl;
   output(&a);
   output(&b);
   b=a;
   cout<<"copy之后"<<endl;   
   output(&a);
   output(&b);
   a.sPtr[0]='Z';
   cout<<"修改a之后"<<endl;
   output(&a);
   output(&b);
   cout<<"此时b改变因为a与b的sPtr指向同一地址。"<<endl;
   b.a=a.a;
   a.b=a.b;
   b.sPtr=new char[strlen(s)+1];
   strcpy(b.sPtr,a.sPtr);
   cout<<"不直接copy a to b"<<endl;
   output(&a);
   output(&b);
   a.sPtr[0]='A';
   cout<<"修改a之后"<<endl;
   output(&a);
   output(&b);
   cout<<"此时a.sPtr与b.sPtr指向不同地址"<<endl;
}

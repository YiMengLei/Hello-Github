#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct Sample
    {
        int a;
        int b;
    }a,b;
    a={1,2};
    b=a;
    cout<<"a:"<<a.a<<"   "<<a.b<<endl;
    cout<<"b:"<<b.a<<"   "<<b.b<<endl;
    return 0;
}
//2.2
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<endl;
    cout<<"please enter a number:";
    cin>>number;
    cout<<"\nremainder when divided by 8: "<<(number&7)<<endl;
    return 0;
} 

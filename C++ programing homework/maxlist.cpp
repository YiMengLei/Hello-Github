#include<iostream>
#include <iomanip>
using namespace std;
int leftindex;
int rightindex;
int found(int *p,int i,int j);
int foundmid(int *array,int leftside,int rightside,int mid);
int main()
{
    int n;
    
    cin>>n;
    int *p=new int[n];
    for (int i=0; i<n; i++) {
        cin>>p[i];
    }
    for (int i=0; i<n; i++) {
        cout<<p[i]<<setw(4);
    }
    cout<<"    "<<endl<<found(p,0,n)<<endl<<leftindex<<endl<<rightindex<<endl;
    for (int i=leftindex; i<=rightindex; i++) {
            cout<<p[i]<<setw(4);
    }
    
}
int foundmid(int *array,int leftside,int rightside,int mid)
{
    int leftmax=array[mid];
    leftindex=mid;
    rightindex=mid+1;
    int rightmax=array[mid+1];
    int leftsum=0;
    int rightsum=0;
    for(int a=mid;a>=leftside;a--)
    {
        leftsum+=array[a];
        if(leftsum>leftmax)
        {
            leftmax=leftsum;
            leftindex=a;
        }
    }
    for(int b=mid+1;b<=rightside;b++)
    {
        rightsum+=array[b];
        if(rightsum>rightmax)
        {
            rightmax=rightsum;
            rightindex=b;
        }
    }
    return leftmax+rightmax;
}

int found(int *p,int i,int j)
{
    int l,r,ml;
    if (i==j)
    {
        return p[i];
    }
    else
    {
        int mid =(i+j)/2;
        l=found(p, i, mid);
        r=found(p, mid+1,j);
        ml=foundmid(p, i, j, mid);
        if(l>=r&&l>=ml)
            return l;
        if(r>l&&r>ml)
            return r;
        else
            return ml;
    }
}


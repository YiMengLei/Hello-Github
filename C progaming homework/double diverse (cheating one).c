#include<stdio.h>
int t[100002];
int main()
{
    int n,k,m,l,p,i,j,r=-1;//l是右边的数，p是二分中间的数
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&t[i]);
    scanf("%d",&k);
    for (j=0; j<k; j++)
    {
        r=-1;
        l=n;
        i=1;
        scanf("%d",&m);
        while(i<=l)
        {
            p=(i+l)/2;
            
            if(t[p]>=m)
            {
                l=p-1;
                r=t[p];
            }
            else
                i=p+1;
        }
        printf("%d\n",r);
    }
}
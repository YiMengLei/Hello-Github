#include<stdio.h>
int t[100002],m[1000002];
int main()
{
	int n,k,begin,end,mid,res;
	int i,j;
	t[0] = -1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t[i]);
	}
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		scanf("%d",&m[j]);
	}
	
	for(j=0;j<k;j++)
	{
		begin = 1;
		end = n;
		res = 0;
		while(begin<=end)
		{
			mid = (begin+end)/2;
			if(t[mid] >= m[j])
			{
				end = mid - 1;
				res = mid;
			}
			else
				begin = mid + 1;
		}
		printf("%d\n",t[res]);
	}
    
}



#include<stdio.h>
int main()
{
    int t[100002],n,k,m,i,j,p,mid;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&t[i]);
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        p=1;
        j=n;
        scanf("%d",&m);
        if(m>t[n])
            printf("-1\n");
        while (p<=j)//on what condition?
        {
            mid=(j+p)/2;
            if(t[mid]>=m)
            {
                j=mid-1;
                
            }
            else
                
                p=mid+1;
        }
        printf("%d\n",t[mid]);
    }
}

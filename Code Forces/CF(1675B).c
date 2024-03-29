#include<stdio.h>

int main()
{
	int t,n,x,i,j,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int  count=0;
		scanf("%d",&n);
		int a[n];
		for(i=0; i<n;i++)
		{
			scanf("%d",&x);
			a[i]=x;
		}
		
		for(i=1;i<n;i++)
		{
			if(a[n-i]==0 && a[n-1-i]==0)
			{
				count=-1;
			}
			else
			{
				while(a[n-i]<=a[n-1-i])
				{
					if(a[n-i]==0 && a[n-1-i]==0)
					{
						count=-1;
						break;
					}
					else
					{
						a[n-1-i]=(a[n-1-i]/2);
						count++;
					}
				}
			
			}
		}
		printf("\n%d\n",count);
	}
		return 0;
}

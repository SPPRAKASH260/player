#include <stdio.h>
int main() 
{
	int N,i,j;
	int a[100],c=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		c=0;
		for(j=0;j<N;j++)
		{
			if(a[i]==a[j] && i!=j)
			{
				c+=1;	
			}
			
		}
	if(c==0)
	{
		printf("%d",a[i]);
	}
	}
	return 0;
}

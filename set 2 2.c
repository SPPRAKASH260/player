#include <stdio.h>
int main() 
{
	int i,temp[10],k,a[10],n;
	scanf("%d",&n);
  scanf("%d",&k);	
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
	temp[i]=a[i];
	}
	for(i=0;i<n-k;i++)
	{
	a[i]=a[i+k];
	}
	for(i=0;i<n;i++)
	{
	a[n-k+i]=temp[i];
	}
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	return 0;
}

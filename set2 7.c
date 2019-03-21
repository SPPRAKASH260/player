#include <stdio.h>
int main() 
{
	int l,r,len,i;
	scanf("%d %d",&l,&r);
	for(i=2;i<100000;i++)
	{
		if((i%l==0) && (i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}

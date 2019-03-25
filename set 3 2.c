#include <stdio.h>
int main() 
{
	int n,k,i,l,a=0;
  scanf("%d%d",&n,&k);
  if(n>k)
  {
    l=n;
  }
  else
  {
    l=k;
  }
	for(i=1;i<l;i++)
	{
	if(n%i==0 && k%i==0)
  {
    a=i;
  }
	}
  printf("%d",a);
  return 0;
}

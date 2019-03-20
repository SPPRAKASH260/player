#include <stdio.h>
int main() 
{
	int a,n,sum=0;
	scanf("%d",&n);
  while(n)
  {
    a=n%10;
    sum+=a*a;
    n/=10;
  }
  printf("%d",sum);
  return 0;
}

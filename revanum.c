#include <stdio.h>
int main()
{
  int a,sum=0,r;
  scanf("%d",&a);
  while(a)
  {
    r=a%10;
    sum=sum*10+r;
    a/=10;
  }    
  printf("%d",sum);
  return 0;
}

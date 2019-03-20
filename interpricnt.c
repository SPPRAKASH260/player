#include <stdio.h>
int main()
{
  int n,i,m,flag,count=0;
  scanf("%d",&m);
  scanf("%d",&n);
  while(m<n)
  {
  for(i=2;i<=m/2;i++)
  {
  flag=0;
    if(m%i==0)
    {
    flag=1;
    break;
    }
  }
  if(flag==0)
  {
  count++;
  }
  ++m;
  }
 printf("%d",count);
 return 0;
}

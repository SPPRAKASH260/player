#include <stdio.h>
int main() 
{
	int n,k,i,j,m,l,a[20],b[20],c;
  printf("enter n and k");
  scanf("%d%d",&n,&k);
  printf("array values");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter k values");
  for(c=0;c<k;c++)
  {
    scanf("%d",&b[c]);
  }
  for(i=0;i<k;i++)
  {
    for(j=0;j<1;j++)
    {
      a[j]=b[i];
    }
    for(m=n;m>0;m--)
    {
      l=a[0];
     if(a[m]>a[0])
     {
       l=a[m];
       break;
     } 
    }
    printf("\nafter insertion large value is :%d",l);  
  }
  return 0;
}

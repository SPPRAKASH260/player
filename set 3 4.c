#include <stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int i,l,flag=0;
  scanf("%s",str);
  l=strlen(str);
  for(i=0;i<l;i++)
  {
    if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  {
  printf("no");
  }
  else
  {
    printf("yes");
  }
  return 0;
}

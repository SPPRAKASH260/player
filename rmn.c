#include <stdio.h>
#include<string.h>
int main()
{
  char str[10];
  int i,num=0,l;
  scanf("%s",str);
  l=strlen(str);
  for(i=0;i<=l;i++)
  {
    if(str[i]=='I'||str[i]=='i')
    {
      num+=1;
    }
    else if(str[i]=='V'||str[i]=='v')
    {
      num+=5;
    }
    else if(str[i]=='X'||str[i]=='x')
    {
      num+=10;
    }
  }
  for(i=l;i>0;i--)
  {
    if(str[i]>str[i-1])
    {
      num-=2;
    }
  }
  printf("%d",num);
  return 0;
}

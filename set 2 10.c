#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int l,i;
  scanf("%s",str);
  l=strlen(str);
  for(i=0;i<l;i++)
  {
    str[i]+=3;
  }
  printf("%s",str);
  return 0;
}

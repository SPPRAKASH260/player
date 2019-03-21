#include <stdio.h>
#include<string.h>
int main() 
{
	char str[30],c;
	int i,j,n,count=1,max=1;
	scanf("%[^\n]s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(str[i]==str[j])
		 {
			count=count+1;
			if(count>max)
			{
				max=count;
				c=str[i];
			}
		 }
    }
 	}
	printf("\n%c",c);
	return 0;
}

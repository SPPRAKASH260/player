#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int i,j,flag=1,a,b;
	scanf("%s %s",str1,str2);
	int l1=strlen(str1);
	int l2=strlen(str2);
	if(l1==l2)
	{
	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l2;j++)
		{
			a=str1[i]-str1[j];
			b=str2[i]-str2[j];
			if(a==b)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

	return 0;
}

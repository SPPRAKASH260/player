#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,l,temp;
    printf("Enter the string");
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i=i+2)
    {
    	if(str[i]!='\0')
    	{
    		temp=str[i];
    		str[i]=str[i+1];
    		str[i+1]=temp;
    	}
    }
    printf("%s",str);
    return 0;
}

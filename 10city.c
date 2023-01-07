//2.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][20],t[10];
	int r,i,round;
	printf("enter 10 city name");
	for(i=0;i<=9;i++)
	gets(str[i]);
	for(round=1;round<=9;round++)
	{
		for(i=0;i<=9-round;i++)
		{
			int r=strcmp(str[i],str[i+1]);
			if(r>0)
			{
			  strcpy(t,str[i]);
			  strcpy(str[i],str[i+1]);
			  strcpy(str[i+1],t);
		    }
		}
	}
	for(i=0;i<=9;i++)
	puts(str[i]);
	
	return 0;
}

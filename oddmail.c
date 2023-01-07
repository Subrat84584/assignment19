//
#include<stdio.h>
int main()
{
	char str[3][20];
	printf("enter emails:");
	int i,j;
	for(i=0;i<=2;i++)
	fgets(str[i],20,stdin);
	for(i=0;i<=2;i++)
	{
		int count=0;
		for(j=0;j<=19;j++)
		{
		   if(str[i][j]=='@')
		   count++;
		   
	    }
	    if(count==0)
	    printf("odd mail is: %s",str[i]);
		
	}
	return 0;
}

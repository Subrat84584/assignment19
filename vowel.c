//1.
#include<stdio.h>
int main()
{
	char str[5][20];
	printf("enter the 5 string");
	int i,j;
	for(i=0;i<=4;i++)
	fgets(str[i],20,stdin);
	for(i=0;i<=4;i++)
	{
		int count=0;
		for(j=0;j<=19;j++)
		{
		    if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
		    count++;
	    }
	    printf("no of vowel of row %d is %d\n",i,count);
	}
	return 0;
}

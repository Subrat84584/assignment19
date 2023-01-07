//8.
#include<stdio.h>
int main()
{
	char str[4][20],t[20];
	int i,j;
	printf("enter the 4 string");
	for(i=0;i<=3;i++)
	fgets(str[i],20,stdin);
	printf("\nenter your string ");
	fgets(t,20,stdin);
	int flag=0;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=19;j++)
		{
			if(t[j]==str[i][j])
		    flag=1;
		}
	}
	if(flag==1)
	{
	   printf("you are allowed to calculate the factorial of a number");
	   int n,fact=1;
	   printf("\nenter your number to know the factorial");
	   scanf("%d",&n);
	   for(i=1;i<=n;i++)
	   {
	   	fact=fact*i;
		  }  
		  printf("factorial is:%d",fact); 
	}
	else
	printf("error");
	return 0;
	
}

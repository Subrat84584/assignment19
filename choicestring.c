//4.search string
#include<stdio.h>
int main()
{
	char str[4][15];
	int i;
	printf("enter your strings");
	for(i=0;i<=3;i++)
	fgets(str[i],15,stdin);
	int n;
	printf("enter the value of n upto 3 to see the string you want");
	scanf("%d",&n);
	for(i=n;i<=n;i++)
	puts(str[i]);
	return 0;
}

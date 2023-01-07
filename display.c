//
#include<stdio.h>
int main()
{
	char str[2][10];
	int i;
	printf("enter the string");
	for(i=0;i<=1;i++)
	fgets(str[i],10,stdin);
	for(i=0;i<=1;i++)
    puts(str[i]);
	return 0;	
}

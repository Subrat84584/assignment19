//7.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][20],i,j;
	printf("enter the 3 ip address");
	for(i=0;i<=2;i++)
	fgets(str[i],20,stdin);
	for(i=0;i<=2;i++)
	{
		int l=strlen(str[i]);
		int flag=0;
		for(j=0;j<=l;j++)
		{
			if(str[i][j]=='0'&&str[i][j]=='9'||str[i][j]=='.')
			flag=1;
		}
		if(flag)
		printf("%s is valid ip adress\n",str[i]);
	}
	return 0;
}

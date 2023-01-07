//authentication
#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag=0;
	char a[3][2][20]={
		{
			"ananya","123"
		},
		{
			"mahapatra","456"
		},
		{
			"kasman","321"
		}
	};
	char username[]="ananya";
	char password[]="123";
	for(i=0;i<3;i++)
	{
		if(strcmp(username,a[i][0])==0&&strcmp(password,a[i][1])==0)
		{
			printf("login successful!!");
			flag=1;
		}
	}
	if(flag==1)
	printf("username or password not matched");
	return 0;
}

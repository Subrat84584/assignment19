//6.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][20];
	int i,j,k;
	for(i=0;i<=4;i++)
	fgets(str[i],20,stdin);
    for(i=0;i<=4;i++)
    {
    	int l=strlen(str[i]);
    	j=0;
    	while(j<l)
    	{
    		int k=l-1-i;
    		while(j<=k)
    		{
    			if(str[i][j]!=str[i][k])
    			break;
    			k--;
    			j++;
			}
			break;
		}
		if(j>k)
		printf("%s is a palimdrom\n",str[i]);
		else
		printf("\n%s is not a palindrom",str[i]);
	}
	return 0;
}


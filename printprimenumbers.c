//Program by Waseem bhat
#include<stdio.h>
int main()
{
	int flag;
	int i,j,n;
	printf("Enter Number to print prime numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==1 || i==0)
		continue;
		flag=1;
		for(j=2;j<=i/2;++j)
		{
			if(i%j==0)
			{
				flag=0;
				break;
				return 0;
			}
		}
		if(flag==1)
		printf("%d ",i);
	}
	return 0;
}
#include<stdio.h>
main()
{
	int n,sum=0,i;
	printf("Enter any number= ");
	scanf("%d" ,&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+1;
		}
	}
	if (sum==n)
	printf("Perfect number");
	else
	printf("Not perfect number");
}

#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter number of rows which you want:");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(j=rows;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}

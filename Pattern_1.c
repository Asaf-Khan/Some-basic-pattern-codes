#include<stdio.h>

int main() 
{
	int rows;
	
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	
	int i = 0;
	
	for(i; i<rows; i++)
	{
		int b = rows;
		for(b; b>i; b--)
		{
			printf(" ");
		}
		
		int k = 0;
		for(k; k<i; k++)
		{
				printf("* ");
		}
		printf("\n");
	}
	return 0;
}
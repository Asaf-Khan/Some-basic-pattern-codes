#include<stdio.h>
/*
In order to run this code in C++ remove the first header file(stdio.h) and add :
#include<iostream>
#include<cstdio>
*/

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

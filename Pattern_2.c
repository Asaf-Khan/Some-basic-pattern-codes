#include <stdio.h>

int main()
{
	int rows;
	
	printf("ENter the numbrer of rows : ");
	scanf("%d",&rows);
	printf("\n");
	
	for (int i = 1;i<=rows;i++)
	{
	    if(i%2!=0)
	    {   
	        for (int a = rows;a>i;a--){ printf(" "); }
	        for(int j = 1;j<=i;j++){ printf("* "); }
	    }
	    else{ printf("\n"); }
	}
	return 0;
}
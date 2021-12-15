#include <stdio.h>
#include <string.h>
#define row 13
#define col 100

int main()
{
	int R, C;
	char A[row][col];
	
	for (R = 0; R < row; R++)
	{
		printf("Give string value: \n");
		fgets(A[R], col, stdin);
		
		A[R][strlen(A[R]) - 1] = '\0';
	}
		
	printf("Word Length\t|Number of Occurences\n");
	
	for (R = 0; R < row; R++)
	{
		printf("%d\t\t|", R+1);
		
		C = 0;
		
		while (A[R][C] != '\0')
		{
			printf("*");
			C++;
		}
		
		printf("\n");
	}
	
	return 0;
}

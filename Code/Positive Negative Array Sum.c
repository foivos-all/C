#include <stdio.h>
#define N 2
#define M 2

int main()
{
	int i, j, sum_pos, sum_neg, n, m;
	
	printf("Give n and m: ");
	scanf("%d", &N, &M);
	
	int A[N][M]
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			{
				printf("Give numbers for cell [%d][%d]: ", i, j);
				scanf("%d", &A[i][j]);
			}
			
	for (i = 0; i < N; i++)
	{
		sum_pos = 0;
		sum_neg = 0;
		
		for (j = 0; j < M; j++)
			if (A[i][j] < 0)
				sum_neg = sum_neg + A[i][j];
			else
				sum_pos = sum_pos + A[i][j];
				
		printf("The sum of the negatives for line %d is: %d\n", i, sum_neg);
		printf("The sum of the positives for line %d is: %d\n", i, sum_pos);
	}
	
	return 0;
}

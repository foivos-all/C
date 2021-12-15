#include <stdio.h>
#define N 5

double * swap(double []);

int main()
{
	double A[N];
	double *b;
	int i;
	
	printf("Give values to store in array: ");
	for (i = 0; i < N; i++)
		scanf("%lf", &A[i]);
		
	b = swap(A);
	
	printf("Sorted: \n");
	for (i = 0; i < N; i++)
		printf("%.2lf ", A[i]);
	
	return 0;
}

double * swap(double b[])
{
	int i, j;
	double temp;
	
	for (i = 0; i < N; i++)
		for (j = i+1; j < N; j++)
			if (b[i] > b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
			
	return b;
}

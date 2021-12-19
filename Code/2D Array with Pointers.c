#include <stdio.h>
#include <stdlib.h>

int * Add(int ** T, int row, int col)
{
    int * sum = (int *) calloc((size_t) col, sizeof(int));

    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
            sum[j] += T[i][j];

    return sum;
}

int main()
{
    int row, col;
    printf("Give the rows and columns of the table: \n");
    scanf("%d %d", &row, &col);

    //allocation and population
    int ** T = (int **) malloc(sizeof(int*) * ((long unsigned int) row));
    for(int i = 0; i < row; ++i)
    {
        T[i] = (int *) malloc(sizeof(int) * ((long unsigned int) col));
        for(int j = 0; j < col; ++j)
        {
            printf("Give a value to store to the table [%d][%d]: \n", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    //printing
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j) printf("%d\t", T[i][j]);
        printf("\n");
    }

    //make sum of columns and print
    int * sum = Add(T, row, col);
    printf("Sum of each column :\n");
    for(int i = 0; i < col; ++i) printf("col %d: %d\n", i, sum[i]);
    return 0;
}

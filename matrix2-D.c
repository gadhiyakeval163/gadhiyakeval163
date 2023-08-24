#include <stdio.h>
int main()
{
    int C[10][10], A[10][10], B[10][10], i, j, l, row, col;
    printf("---------------------------Matrix Multiplication-----------------------------");
    printf("\n\n");//Enter the number of rows (1-5):
    scanf("%d", &row);
    printf("\n\n");//Enter the number of columns (1-5):
    scanf("%d", &col);
    printf("\n---------------Matrix:1----------------------\n");
    printf("\n \n");// Enter element you want to insert in the matrix:1
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter elements:");
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", A[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n----------------------Matrix :2-------------------------\n");
    printf("\n\n"); //Enter element you want to insert in the matrix:2
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter elements:");
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", B[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n---------------------result : Multiplication Matrix------------------------\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            C[i][j] = 0;
            for (l = 0; l < col; l++)
            {
                C[i][j] = C[i][j] + A[i][l] * B[l][j];
            }
            printf("%d", C[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
  int siz, i, j, k;
    printf("Enter Size of Square Matrix: ");
      scanf("%d",&siz);

  int matrixA[siz][siz], matrixB[siz][siz];

  printf("\nEnter Values For Matrix A: ");
    for(i=0;i<siz;i++){
      for(j=0;j<siz;j++){
        printf("Position (%d, %d): ",i+1,j+1);
        scanf("%d",&matrixA[i][j]);
      }
    }

  printf("\nEnter Values For Matrix B: ");
    for(i=0;i<siz;i++){
      for(j=0;j<siz;j++){
        printf("Position (%d, %d): ",i+1,j+1);
        scanf("%d",&matrixB[i][j]);
      }
    }

  printf("\n Summation of Matrix A & Matrix B :\n");
    for(i=0;i<siz;i++){
        printf("\t|");
      for(j=0;j<siz;j++){
        printf("%6d",matrixA[i][j]+matrixB[i][j]);
      }
      printf("\t|\n");
    }

  printf("\n Subtraction of Matrix B from Matrix A :\n");
    for(i=0;i<siz;i++){
        printf("\t|");
      for(j=0;j<siz;j++){
        printf("%6d",matrixA[i][j]-matrixB[i][j]);
      }
      printf("\t|\n");
    }





    return 0;
}

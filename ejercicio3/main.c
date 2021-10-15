#include <stdio.h>

int main() {
 int a[5][5],i,j,sd1,sd2;

 // Loop to accept matrix
  for( i=0; i<5; i++ ) {
    for( j=0; j<5; j++ ){
      printf("Elemento (%d, %d): ", i, j);
      scanf("%d", &a[i][j]);}
  }

  // Loop to sum main diagonal
  for( i=0; i<5; i++ )
  {
  for( j=0; j<5; j++ )
  {
    if( i==j )
    sd1 += a[i][j];
  }
  }

  // Loop to sum secondary diagonal
  for( i=0; i<5; i++ )
  {
  for( j=0; j<5; j++ )
  {
    if( i+j == 5-1 )  // You can also use "col-1" in place
    sd2 += a[i][j];     // "row-1" since it is a square matrix
  }
  }

  // Mostrar el resultado

  printf("La suma de la primer diagonal es: %d", sd1);
  printf("La suma de la segunda diagonal es: %d", sd2);

  return 0;
}
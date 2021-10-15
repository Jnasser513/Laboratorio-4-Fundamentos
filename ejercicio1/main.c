#include <stdio.h>

int main(void) {
  int a[3][3], result[3][3];

  //LLenamos la matriz a
  printf("Ingrese los datos para la primer matriz\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Elemento (%d, %d): ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  //Transposicion de matriz
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      result[i][j] = a[j][i];
    }
  }
  
  //Imprimimos la matriz transpuesta
  printf("La matriz transpuesta es: ");
  for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
          printf("Elemento (%d, %d): %d\n", i, j, result[i][j]);
      }
  }

  return 0;
}
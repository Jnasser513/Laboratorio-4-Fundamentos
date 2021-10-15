#include <stdio.h>

int main(void){
    int a[5][5], b[5][5], suma[5][5];
    
    //Llenamos la matriz a
    printf("Ingrese los datos para la primera matriz\n");
    for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      printf("Elemento (%d, %d): ", i, j);
      scanf("%d", &a[i][j]);
    }
    }
    
    //Llenamos la matriz b    
    printf("Ingrese datos para la segunda matriz\n");
    for(int i = 0; i < 5; i++) {
      for(int j = 0; j < 5; j++) {
          printf("Elemento (%d, %d): ", i, j);
          scanf("%d", &b[i][j]);
      }
    }
    
    //Realizamos la suma de las 2 matrices
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            suma[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("\nSuma de las 2 matrices\n");
    //Imprimimos la matriz resultante de la suma de a y b
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Elemento (%d, %d): %d \n", i, j, suma[i][j]);
        }
    }
    
    return 0;
}
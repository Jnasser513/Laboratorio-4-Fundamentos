#include <stdio.h>

int main(void) {
  //Declaracion de un arreglo de tipo entero con 30 espacios
  //int arreglo[30]; 

  //Declaracion de un arreglo con tamaño manipulable
  int size = 100;
  int arrayMan[size];

  for(int i = 0; i < size; i++) {
    arrayMan[i] = i + 10;
  }

  for(int i = 0; i < size; i++) {
    printf("Elemento %d del arreglo es %d\n", i+1, arrayMan[i]);
  }

  return 0;
}
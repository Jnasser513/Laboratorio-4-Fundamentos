#include <stdio.h>

void fillArray(int size, int arreglo[]);
void printArray(int size, int arreglo[]);

int main(void) {
  //Declaracion de un arreglo de tipo entero con 30 espacios
  int arreglo2[30]; 
  int n[10]={0};
  int a1 [] = {1,2,3,4,5};

  //Declaracion de un arreglo con tamaño manipulable
  int size = 10;
  int arrayMan[size];

  //Recorremos el arreglo y lo llenamos
  fillArray(size, arrayMan);

  //Recorremos el arreglo y lo imprimimos
  printArray(size, arrayMan);

  return 0;
}

void fillArray(int size, int arreglo[]){
  for(int i = 0; i < size; i++) {
    arreglo[i] = i + 10;
  }
}

void printArray(int size, int arreglo[]) {
  for(int i = 0; i < size; i++) {
    printf("Elemento %d de larreglo es %d\n", i+1, arreglo[i]);
  }
}
#include <stdio.h>

int main(void) {
    int par = 0, impar = 0, size;

    printf("Ingrese el tamano de su arreglo: ");
    scanf("%d", &size);
    
    int numeros[size];
    int pares[size];
    int impares[size];


    for (int i = 0; i < size; i++) {
        printf("Elemento %d ", i+1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
            pares[par++] = numeros[i];
        else
            impares[impar++] = numeros[i];
    }
    
    printf("\nNumeros pares\n");
    for (int i = 0; i < par; i++){
        printf("%d ", pares[i]);
    }
    
    printf("\nNumeros impares\n");
    for (int i = 0; i < impar; i++){
        printf("%d ", impares[i]);
    }
    
    return 0;
}
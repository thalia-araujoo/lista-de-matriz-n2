#include <stdio.h>
#include<stdlib.h>
//Dada a matriz A abaixo, calcule o determinante:
//A = [[2, 3],
//[1, 4]]

//O determinante de uma matriz é uma função matricial que converte uma matriz quadrada em um escalar.
//Para uma matriz quadrada de ordem 2, o determinante é definido como:

//det(acbd)=a·d-c·b


int main() {
	printf("-----------------------------------------\n\n");

	printf(" \t Calculandoi o Determinante\n\n");
	
	printf("-----------------------------------------\n\n");
	
    int matrizA[2][2] = {{2, 3}, {1, 4}};
    int determinante;

    determinante = (matrizA[0][0] * matrizA[1][1]) - (matrizA[0][1] * matrizA[1][0]);

    printf("O determinante da matriz eh: %d", determinante);

    return 0;
}

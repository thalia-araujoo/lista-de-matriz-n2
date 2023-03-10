#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 2
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
	
    int m[LIN][COL]; // matriz
	int d, dp = 1, ds = 1; //determinante
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Informe o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			if(i==j){
				dp*=m[i][j];
			}
			if(j==(COL - 1) - i){
				ds*=m[i][j];
			}
		}
	}
	d = dp - ds;
	printf("O determinante é: %d", d);
	
	return 0;
}

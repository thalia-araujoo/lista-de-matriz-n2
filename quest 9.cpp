#include <stdio.h>
#include <stdlib.h>
//quest 9 Dada a matriz A abaixo, calcule a matriz de rotação de 90 graus:
//A = [[1, 2],
//[3, 4]]


int main(){
	int i, j;
	int mat[2][2];
	
	printf("\tPreenchendo a matriz\n\n");
	printf("---------------------------\n\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Informe os valores da matriz: ");
			scanf("%d", &mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("\tMATRIZ ROTACIONADA\n");
	printf("---------------------------\n\n");
	
	//usei a logica de trocas de variaveis decrecendo, assim ele gira da direita para a esquerda
	// colunas como se fossem linhas, "girando" a matriz em 90°. 
	for(j = 1; j >= 0; j--)       
	{
        for(i = 0; i < 2; i++)
        {
            printf("%d    ", mat[i][j]);
        }
        
	}
	return 0;
}

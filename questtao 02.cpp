#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, linhaA, colunaA, linhaB, colunaB;
	

	printf("\n\nProduto de matrizes\n\n");
	printf("- - -- - - - -- - - - - - -- - - - -- \n\n");

	printf("Informe a quntidade de linhas da matriz A : ");
	scanf("%d",&linhaA);

	printf("Informe a quantidade de colunas da matriz A : ");
	scanf("%d",&colunaA);

	printf("Informe a quntidade de linhas da matriz B : ");
	scanf("%d",&linhaB);

	printf("Informe a quantidade de colunas da matriz B : ");
	scanf("%d",&colunaB);

	float matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], matrizC[linhaA][colunaB], aux = 0;
//so é possivel a multiplicação se a a quantidade de linha for igual a da coluna

	if(colunaA != linhaB){
		printf("Essa multiplicacao nao pode ser realizada.\n");
		printf("A quantidade de colunas de A eh diferente do numero de linhas de B.\n");
		return 0; // o programa acaba 
	}

	//controla a matriz A
	for(int i = 0; i < linhaA; i++){
		for(int j = 0; j < colunaA; j++){
			printf("matrizA[%d][%d]=", i + 1, j + 1);
			scanf("%.2f", &matrizA[i][j]);
		}
	}
	printf("\n");
	
	//controla a matriz B
	for(int i = 0; i < linhaB; i++){
		for(int j = 0; j < colunaB; j++){
			printf("matrizB[%d][%d]=", i + 1, j + 1);
			scanf("%.2f", &matrizB[i][j]);
		}
	}
	
	//imprimir as matrizes A
	//se o j for diferente da coluna da matriz entt ele tem q da um espaço para imprimir o proximo elemento
	printf("\n MATRIZ A\n");
	printf("-----------------------------n\n");
	for(int i = 0; i < linhaA; i++){
		for(int j = 0; j < colunaA; j++){
			if(j!=colunaA){
				printf("%.2f \t", &matrizA[i][j]);
			}
			else{
				printf("%.2f \n", &matrizA[i][j]);
			}
		}
	}
	printf("\n\n");
	
	//imprimir as matrizes B
	printf("\n MATRIZ B\n");
	printf("-------------------------\----n\n");
	for(int i = 0; i < linhaB; i++){
		for(int j = 0; j < colunaB; j++){
			if(j!=colunaB){
				printf("%.2f \t", &matrizB[i][j]);
			}
			else{
				printf("%.2f \n", &matrizB[i][j]);
			}
		}
	}
	printf("\n");
	//aq estamos multiplicando as matrizes A * B e guardando na matriz C
	for(int k1 = 0; k1 < linhaA; k1++){
		for(int k2 = 0; k2 < colunaB; k2++){
			for(int i = 0; i < colunaA; i++){
				aux = aux + matrizA[k1][i] * matrizB[i][k2]; // k1 representando as linhas e k2 representa colunas, i representa a variação
			}
			matrizC[k1][k2] = aux;
		}
	}
	printf("\n \n");
	printf("\n Matriz C = A*B");
	
	for(int i = 0; i < linhaA; i++){
		for(int j = 0; j < colunaB; j++){
			printf("%.2f \n", matrizC[i][j]);
		}
	}
	return 0;
}


	



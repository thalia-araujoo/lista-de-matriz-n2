#include <stdio.h>
#include <stdlib.h>

//Dada a matriz A abaixo, calcule a matriz diagonal:
//A = [    [2, 0, 1],
//[3, 4, -2],
//[8, 9, 6]   ]

int main(){
	int i, j;
	int matriz[3][3];
	
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Informe os valores da matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n");
	
	
	printf("\tDIAGONAL PRINCIPAL\n\n");
	printf("= = = = = = = = = = = = = = = = = = = = = =\n\n");
	
	for(int i = 0; i < 3; i++){
		printf("%d", matriz[i][i]);
	}
	return 0;
}

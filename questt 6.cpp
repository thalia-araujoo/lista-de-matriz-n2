//questt 6
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int A[2][2];
    int aux;

    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            printf("Digite os valor [%d][%d]: ", linha, coluna);
            scanf("%d", &A[linha][coluna]);
        }
    }

    aux = A[0][0];
    A[0][0] = A[1][1];
    A[1][1] = aux;

    printf("\n");
    
    for(int i = 0; i < 2; i++){
		for (int j = 0; j < 2; ++j){
			if (i != j){
				A[i][j] *= -1;
			}
		}
	}

    printf ("\nMatriz cofatora: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d   ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

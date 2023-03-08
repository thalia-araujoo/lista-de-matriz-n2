//1-matriz tranposta
//Dada a matriz A abaixo, calcule a matriz transposta:
//A = [[1, 2, 3],
//[4, 5, 6],
//[7, 8, 9]]
#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            B[j][i] = A[i][j];
        }
    }
    printf("\n");

    printf("A matriz transposta é: ");
    for(int i = 0; i < 3; i++){
    	for (int j = 0; j < 3; j++){
        printf("%d\n", B[i][j]);
	}
        
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n\nMatriz inversa\n");
	printf("-----------------------------\n");
	int A[2][2] = {{1,2}, {3, 4}};
	int dt; 	//dt é a determinante
	int inversa[2][2] = {{A[1][1], -A[0][1]}, {-A[1][0], A[0][0]}};
	
	dt = A[0][0] * A[1][1] - A[0][1] * A[1][0];
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			inversa[i][j] /= dt;
		}
	}
	printf("\n");
	printf("A Matriz inversa = [ %.2d  %.2d ]\n", inversa[0][0], inversa[0][1]);
	printf("		 = [ %.2d  %.2d ]\n", inversa[1][0], inversa[1][1]);
	
	
	return 0;
}

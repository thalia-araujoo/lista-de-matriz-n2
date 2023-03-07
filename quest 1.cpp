//1-matriz tranposta
//Dada a matriz A abaixo, calcule a matriz transposta:
//A = [[1, 2, 3],
//[4, 5, 6],
//[7, 8, 9]]
#include <stdio.h>
#include <stdlib.h>


int main(){
	int a, b, j, i;
	int l = 3;
	int c = 2;
	
	int *pl;
	int *pc;
	
	pl = l;
	pc = c;
	

	
	for(int i = 0; i < pl; i++){
		
		for(int j = 0; j < pc; j++){
			b[i][j] = a[j][i];
		}
	}
	
	printf("A matriz transposta eh: %d", a[j][i]);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	int Matriz_A[2][2];
	int reflexao[2][2];
    
    
       
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
                
            printf("Digite o elemento linha %d coluna %d: ", i, j);
            scanf("%d", &Matriz_A[i][j]);
            
        }
    }
    printf("\n");
	  
    printf("---------------------------\n");
    printf("\tMatriz Digitada Original:\n");
    printf("---------------------------\n");
                  
        for (int i=0; i<2; i++){
        	for (int j=0; j<2; j++){
            	printf("%d ", Matriz_A[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
		
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				if(j == 0){
					
					reflexao[i][j] = -Matriz_A[i][j];
				}
			}
		}

	printf("\tMatriz de Reflexão\n");
	printf("---------------------------\n");
	
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				printf("%d ", reflexao[i][j]);
			}
			printf("\n");
		}
			
	return 0;
}

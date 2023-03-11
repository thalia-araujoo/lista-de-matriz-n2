#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int Matriz_A[2][2];
    int linha, coluna;
    
       
    for (linha=0; linha<2;linha++){
        for (coluna=0; coluna<2;coluna++){
                
            printf("Digite o elemento linha %d coluna %d: ", linha+1, coluna+1);
            scanf("%d", &Matriz_A[linha][coluna]);
        }
    }
    printf("\n");
	  
    printf("---------------------------\n");
    printf("\tMatriz Digitada:\n");
    printf("---------------------------\n");
                  
        for (linha=0; linha<2;linha++){
        	for (coluna=0; coluna<2;coluna++){
            	printf("%d ", Matriz_A[linha][coluna]);
			}
			printf("\n");
		}
		
		printf("\n");


	printf("-----------------------------\n");
    printf("\tMATRIZ IDENTIDADE\n");
    printf("-----------------------------\n");
    
    int identidade[linha][coluna];
    
    for(linha = 0; linha < 2; linha++){
    	
        for(coluna = 0; coluna < 2; coluna++){
        	
            if(linha == coluna){
            	
                identidade[linha][coluna] = 1;
                
                }else{
                	identidade[linha][coluna] = 0;
				}     
        }  
    }
    printf("\n");
    
    for(linha = 0; linha < 2; linha++){
    	
          for(coluna = 0; coluna < 2; coluna++){
          	
          	printf("%d", identidade[linha][coluna]);
          	
              if(coluna < 2 - 1){
              	
                printf("\t");
                
              }else{
              	
              	printf("\n");
              	
			  }
		  }
    } 
     
    return 0;
}

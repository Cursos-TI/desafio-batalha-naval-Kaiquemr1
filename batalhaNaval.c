#include <stdio.h>

int main()
{
    //Loop para o tabuleiro representando os espaços por 0 onde são água 
    int tabuleiro [10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; 
        }
    }
        
    //Colunas do tabuleiro de A até J
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int i, j, k;
    
    //Loop colunas (j)
    for(i=0;i<10;i++){
        printf(" %c", colunas[i]);
    }
    printf("\n");
    
    for (j = 2; j <= 4; j++) {
        tabuleiro[3][j] = 3; //Navio horizontal representado pelo número 3
    }
    
    
    for (k = 1; k <= 3; k++) {
        tabuleiro[k][8] = 3; //Navio vertical representado pelo número 3 
    }
    
    
   
    for (i=0;i<10;i++){ //Loop linhas (i)
         printf("%d ", i + 1); 
        for(j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
    }
    
    
    
    
    
    return 0;
}
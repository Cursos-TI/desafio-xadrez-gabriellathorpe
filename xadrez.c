#include <stdio.h> 

// Constantes do Jogo, casas que cada um vai andar
const int PASSOS_TORRE = 5;
const int PASSOS_BISPO = 5;
const int PASSOS_RAINHA = 8;


int main() { 
    
    // TORRE (FOR) 
    printf(">>>> Movimento da Torre (com FOR) <<<<\n"); 
    
    for (int passo = 1; passo <= PASSOS_TORRE; passo++) {
        printf("Direita\n"); 
    }
      
    // BISPO (WHILE) 
    printf("\n >>>> Movimento do Bispo (com WHILE) <<<< \n");
    
    int passoAtualBispo = 1;  

    while (passoAtualBispo <= PASSOS_BISPO) {
        
        printf("Cima, Direita\n"); // o bispo vai anda na diagonal
        
        passoAtualBispo++; 
    }

    // RAINHA (DO-WHILE)
    printf("\n >>>> Movimento da Rainha (com DO-WHILE) <<<< \n");
    
    int passoAtualRainha = 1;  
    do {
        // anda
        printf("Esquerda\n");
        
        // soma
        passoAtualRainha++; 
        
    } while (passoAtualRainha <= PASSOS_RAINHA); 
    
    return 0; 
}
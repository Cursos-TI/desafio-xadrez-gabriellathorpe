#include <stdio.h> 

// Constantes do Jogo, casas que cada um vai andar
const int PASSOSTORRE = 5;
const int PASSOSBISPO = 5;
const int PASSOSRAINHA = 8;
const int PASSOSCAVALOV = 2;
const int PASSOSCAVALOH = 1;

int main() { 
    
    // TORRE (FOR) 
    printf(">>>> Movimento da Torre (com FOR) <<<<\n"); 
    
    for (int passo = 1; passo <= PASSOSTORRE; passo++) {
        printf("Direita\n"); 
    }
      
    // BISPO (WHILE) 
    printf("\n >>>> Movimento do Bispo (com WHILE) <<<< \n");
    
    int passoAtualBispo = 1;  

    while (passoAtualBispo <= PASSOSBISPO) {
        
        printf("Cima, Direita\n");
        
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
        
    } while (passoAtualRainha <= PASSOSRAINHA); 
    
    printf("\n"); 
        printf(">>>> Movimento do Cavalo (com WHILE e FOR) <<<<\n");
        int movimentoEmL = 1;

        while (movimentoEmL > 0) {
         printf("Movimento em L comeca:\n");
        for (int i = 0; i < PASSOSCAVALOV; i++) {
        printf("Baixo\n"); 
        }

        printf("Esquerda\n"); 
        movimentoEmL = 0; 
    }

    return 0; 
}
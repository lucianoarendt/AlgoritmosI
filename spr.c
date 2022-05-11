#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int getContinuar(){
    
    setlocale(LC_ALL,"Portuguese");
    int ret;
    printf("\n\nDeseja continuar? Sim: 1; Nao: 2\n");
    scanf("%d", &ret);

    return ret;
}

void spr(){
    printf("\nEscolha:\nPedra: 0\nPapel:1\nTesoura:2\n\n");

    int escolha;
    scanf("%d", &escolha);

    srand(time(NULL));  
    int escolhaBot = rand() %3;

    printf("Bot Escolheu: %d\n", escolhaBot);

    if(escolhaBot == escolha){
        printf("Empatou!\n");
        return;
    }
   
    if( (escolhaBot == 0 && escolha == 2) ||
        (escolhaBot == 1 && escolha == 0) ||
        (escolhaBot == 2 && escolha == 1)){
    
        printf("Voce perdeu!\n");
        return;
    }

    printf("Voce ganhou!\n");
}

/*
    Pedra -> tesoura
    Papel -> Pedra
    Tesoura -> Papel
*/

int main(){
    setlocale(LC_ALL,"portuguese");
    printf("Bem Vindo ao Pedra, Papel, Tesoura!\n");

    int continuar = 1;
    while(continuar != 2){
        if(continuar != 1){
            printf("Opção invalida!\n");
            continue;
        }

        spr();
        continuar = getContinuar();
    }

    return 0;
}
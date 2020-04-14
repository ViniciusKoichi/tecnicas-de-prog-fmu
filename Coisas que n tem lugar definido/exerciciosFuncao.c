#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int adivinha(){
    int palpite, score = 5;
    int num = rand() % 100;

    printf("\nEscolha um numero de 0 a 100. Você tem 5 tentivas");
    scanf("%d", &palpite);

    if(palpite < num){
        printf("\nO seu numero é menor do que o sorteado, tente novammente: ");
        scanf("%d", &palpite);
        score -= 1;
    }

    if(palpite > num){
        printf("\nO seu numero é maior do que o sorteado, tente novammente: ");
        scanf("%d", &palpite);
        score -= 1;
    }

    if(palpite == num){
        printf("\nParabens! Você acertou, seu score é: %d", score);
    }

    return 0;
}

int adivinhaReverso(){
    int num, opcao, chute2;
    int chute = rand()%100;

    printf("\nEscolha um numero de 0 a 100: ");
    scanf("%d", &num);

    while(opcao != 0){
        printf("\nValor chutado pelo computador%d", chute); 
        printf("\nDigite 1 se o numero for maior\n2 se for menor\n0 se o valor for igual");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                chute2 = rand()>chute;
                chute = chute2;
            break;

            case 2:
                chute2 = rand()<chute;
                chute = chute2;
            break;

        }
    }
    printf("Aeeee acerto toptop");
    return 0;
}

void substituiEspaco(){
    char str[50];

    printf("Coloca uma frase: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i = 0;i<=sizeof(str);i++){
        if(!str[i] == ' ' && str[i]+1 == ' '){
            str[i] = "*";
        }
    }
    printf("Frase pós procedimento: %s", str);
}

void tiraEspaco(){
    char str[50];

    printf("Coloca uma frase: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i = 0;i<=sizeof(str);i++){
        if(!str[i] == ' ' && str[i]+1 == ' '){
            str[i] = "";
        }
    }
    printf("Frase pós procedimento: %s", str);
}

void desafio(){

}

int main(){
    int escolha;

    printf("Bem vindo! Escolha o exercicio:");
    printf("\n1 - Jogo de Adivinhação");
    printf("\n2 - Jogo de Adivinhação reverso");
    printf("\n3 - Substituição de espaço branco");
    printf("\n4 - Removedor de espaços brancos");
    printf("\n5 - **DesaFiu Secreto**");
    printf("\n0 - Sair");
    scanf("%d", &escolha);


    switch(escolha){
        case 1: 
            system("cls");
            adivinha();
        break;

        case 2:
            system("cls");
            adivinhaReverso();
        break;

        case 3:
            system("cls");
            substituiEspaco();
        break;

        case 4:
            system("cls");
            tiraEspaco();
        break;

        case 5:
            system("cls");
            desafio();
        break;

        case 0:
            system("cls");
            printf("Obrigado por utilizar :)");
            return 0;
        break;
    }

    return 0;
}
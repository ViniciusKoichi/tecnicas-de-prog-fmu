#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void criptografa(char *par){
    while(*par != '\0'){
        *par = *par + 3;
        par++;
    }
}

int main(){
    char frase[100];

    printf("\n Digite uma frase com até 100 caracteres: ");
    fgets(frase, 100, stdin);

    criptografa(frase);
    printf("\n %s", frase);

}
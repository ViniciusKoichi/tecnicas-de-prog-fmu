#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modificarVogais(char *par){
    /* \0 indica o final da cadeia de caracteres */ 

    while(*par != '\0'){
        switch(*par){
            case 'a': *par='*'; break;
            case 'e': *par='*'; break;
            case 'i': *par='*'; break;
            case 'o': *par='*'; break;
            case 'u': *par='*'; break;
        }
        par++;
    }
}

int main(){
    char frase[100];

    printf("\n Digite uma frase com até 100 caracteres ");
    fgets(frase, 100, stdin);

    modificarVogais(frase);

    printf("\n %s", frase);
}
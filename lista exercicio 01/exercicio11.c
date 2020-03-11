#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
    char str[30];

    printf("Coloca nome: ");
    fgets(str, sizeof(str), stdin);
    
    if('A' == str[0] || 'a' == str[0]){
        printf("Seu nome e: %s\n", str);
    }
    
}
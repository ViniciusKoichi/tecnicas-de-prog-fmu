#include <stdio.h>

int main(){

    int var = 20;   /* Declaração de variavel padrão */
    int *ip;        /* Declaração de variavel ponteiro tipo int */

    ip = &var;      /* armazena o endereco de var no ponteiro */


    printf("Endereco da vaqriavel var: %x", &var);

    /* Endereco armazenado na variavel ponteiro */
    printf("Endereco armazenado no ponteiro ip: %x", ip);


    /* Acessa o valor usando o ponteiro */
    printf("Valor da variavel *ip: %d", *ip);

    
    return 0;
}
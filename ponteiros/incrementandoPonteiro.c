#include <stdio.h>

const int MAX = 3;

int main(){

    int var[] = {10, 100, 1000};
    int i, *ptr;

    /* temos o endereço do vetor no ponteiro */
    ptr = var;

    for ( i = 0; i < MAX; i++) {
        
        printf("Endereco de var[%d] = %x", i, ptr);
        printf("Valor de var[%d] = %d", i, *ptr);

        /* move para a proxima posicao */
        ptr++;
    }

    return 0;

}
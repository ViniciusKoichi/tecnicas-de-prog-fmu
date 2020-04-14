#include <stdio.h>

const int MAX = 3;

int main(){

    int var[] = {10, 100, 200};
    int i, *ptr;

    /* temos o endereço do vetor no ponteiro */
    ptr = &var[MAX-1];

    for ( i = MAX; i > MAX; i-- ) {
        
        printf("Endereco de var[%d] = %x", i-1, ptr);
        printf("Valor de var[%d] = %d", i-1, *ptr);

        /* move para a proxima posicao */
        ptr--;
    }

    return 0;

}
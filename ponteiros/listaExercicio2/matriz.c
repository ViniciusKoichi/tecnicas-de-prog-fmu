#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializa(int *p){
    for(int i =0;i<100;i++){
        *p = 0;
        p++;
    }

}

void valores99(int *p){
    for(int i =99;i>=0;i--){
        *p = i;
        p++;
    } 
}

int main(){
    int matriz[10][10];
    int *ptr;
    ptr = matriz;


    inicializa(matriz);

    for(int i = 0; i< 100; i++){
        printf("%d", *(ptr+i));
    }

}
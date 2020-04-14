#include <stdlib.h>
#include <stdio.h>

void main(){
    int array[10], arrayMaior[]={2, 4, 7, 8, 1};
    float maior = 0, acum = 0;

    for(int i = 0;i <= 9;i++){
        array[i] = i;
    }

    for(int i = 9;i >= 0;i--){
        printf("%d ", array[i]);
    }

    for(int i = 0;i <= 4;i++){
        if(maior < arrayMaior[i]){
            maior = arrayMaior[i];
        }
    }
    printf("\nO maior é %f :", maior);

    for(int i = 0;i <= 4;i++){
        acum += arrayMaior[i];
    }
    printf("\nA media do array lá é %.2f", acum/5);

}


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void main(){
    int op;

    printf("Quanto é 2+2");
    scanf("%d", &op);

    if(op==2){
        printf("Certo");

    }else{
        printf("Error");
    }   
    
}
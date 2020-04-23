#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_hexa(float l, float *area, float *perimetro){
    /* O asterisco representa o conteudo do espaco de memoria referente ao ponteiro */
    *area = (3 * pow(l,2) * sqrt(3)) / 2;
    *perimetro = 6 * l;



}

int main(){
    float lado, area, perimetro;

    while(lado >= 0){
        system("cls");
        printf("\nInsira o tamanho do lado do hexagono: ");
        scanf("%f", &lado);

        /* Ao passar ponteiros como parametro você passa o endereco da memoria e não o valor */
        calc_hexa(lado, &area, &perimetro);

        printf("\n AREA %f ", area);
        printf("\n PERIMETRO: %f", perimetro);
    }

}
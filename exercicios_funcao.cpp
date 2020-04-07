#include <stdio.h>  //ex 1
#include <stdlib.h>
#include <time.h>

int numero, palpite;
void aleatorio(){
	numero=rand()%100;
}

void verificar(){
	if(palpite>numero){
		printf("\n Mais baixo");
	}
	if(palpite<numero){
		printf("\n Mais alto");
	}
	if(palpite==numero)
	printf("acertou");
}
int main()
{
    srand(time(NULL));
	aleatorio();
	int i;
	for(i=0; i<7; i++){
	printf("\n\ntente adivinhar o numero escolhido pelo programa(de 0 a 100)");
	scanf("%d", &palpite);
	verificar();
	
}
system("pause>null");
}
#include <stdio.h>  //ex 2
#include <stdlib.h>
#include <time.h>

//printf ("Um numero entre 0 e 99: %d\n", rand()%100);

//printf ("Um numero entre 20 e 29: %d\n", rand()%10+20);
int n,p,i,p2;
char opcao;
void verif(){
	printf("\n %d \n\n Digite 1 se o numero que o sistema digitou for maior, 2 se for menor e 3 se estiver certo:",p);
	fflush(stdin);
	scanf("%c",&opcao);
	switch(opcao){
		case'1': p2=rand()%p;
		p=p2;
		break;
		case'2': p2=rand()%100+p;
		p=p2;
		break;
		case'3': printf("Fim de jogo");
		break;
}
}

int main(){
    srand(time(NULL));
	printf("Digite um numero ate 100 para o sistema acertar:");
	scanf("%d",&n);
	p=rand()%100;
	for(int i=0;i<7;i++){
		verif();
}
system("pause>null");
}
#include <stdio.h>  //ex 3
#include <stdlib.h>
#include <string.h>
int i;
char a[50];
void subst(){
    for(i=0; i<50; i++){
	    if(a[i]==' ')
	    a[i]='*';
}
}

int main(){
    printf("\n digite uma frase:");
    gets(a);
    subst();
    for(i=0;i<50;i++){
	    printf("%c",a[i]);
}
system("pause>null");
}
#include <stdio.h>  //ex 4
#include <stdlib.h>
#include <string.h>

char str[50];
int i;

void mover(){
	for(i=3;i<50;i++){
		if(str[i]==' ')
		str[i]=str[i+1];
		else
		str[i-1]=str[i];
	}
		for(i=0;i<50;i++){
		   printf("%c",str[i]);
		}
	}

int main(){
	printf("digite uma frase:");
	gets(str);
	mover();
	system("pause>null");
}







	



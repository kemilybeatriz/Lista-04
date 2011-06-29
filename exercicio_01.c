/*1) Escreva um programa que calcula a média de dois números enquanto o usuário não pressiona a
tecla ‘N’. Exemplo: ‘Deseja continuar S/N?’.*/


#include "arquivo.h"


void main()
{
    float n1, n2, media;
    char sair;

    do{
        printf("MEDIA ENTRE DOIS NUMEROS\n\n");
        printf("Informe o primeiro valor: \n");
        scanf("%f", &n1);
        printf("Informe o segundo valor: \n");
        scanf("%f", &n2);
        system("cls");
        media = calculaMedia(n1, n2);
        printf("Media: %f\n", media);
        getch();
        system("cls");
        printf("Sair(S/N) ?\n");
        fflush(stdin);
        scanf("%c", &sair);
    }while((sair == 'n')||(sair == 'N'));
}

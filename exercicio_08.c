/*
18) Uma empresa de jogos para computadores est� construindo uma esp�cie de bingo eletr�nico.
Nesta fase inicial do projeto, ela deseja que o usu�rio entre com o seu primeiro nome e informe o
intervalo de n�meros da cartela do bingo. Se esse intervalo ser� de 0 a 50 ou 0 a 100, por
exemplo. Dentro desse intervalo o programa dever� sortear randomicamente um n�mero chave.
Esse n�mero ser� o que o usu�rio dever� adivinhar para ganhar o jogo. O programa informa
dicas ao usu�rio relacionadas ao n�mero chave e ao n�mero informado. Por exemplo, se dentro
do intervalo de 0 a 50 o n�mero sorteado foi 45 e o usu�rio informa o n�mero 10 o computador
emite uma mensagem dizendo que o numero chave � maior do que o informado. Se o usu�rio
gastar mais que cinco tentativas o programa deve ser encerrado. Exemplo de uso:
Infome o seu nome: Zezinho
Informe o primeiro n�mero do intervalo: 0
Informe o segundo n�mero do intervalo: 50
Tente adivinhar o n�mero: 10
N�mero chave � maior
Tente adivinhar o n�mero: 30
N�mero chave � maior
Tente adivinhar o n�mero: 45
PARAB�NS ZEZINHO, VOC� GANHOU!!!
*/

#include <stdio.h>

void main()
{
    int magico;
    int numero;

    srand(time(NULL));
    magico = (rand()%(50+1))+10;

    do{
    printf("digite: ");
    scanf("%d", &numero);
    }while(magico!=numero);
}

/*
18) Uma empresa de jogos para computadores está construindo uma espécie de bingo eletrônico.
Nesta fase inicial do projeto, ela deseja que o usuário entre com o seu primeiro nome e informe o
intervalo de números da cartela do bingo. Se esse intervalo será de 0 a 50 ou 0 a 100, por
exemplo. Dentro desse intervalo o programa deverá sortear randomicamente um número chave.
Esse número será o que o usuário deverá adivinhar para ganhar o jogo. O programa informa
dicas ao usuário relacionadas ao número chave e ao número informado. Por exemplo, se dentro
do intervalo de 0 a 50 o número sorteado foi 45 e o usuário informa o número 10 o computador
emite uma mensagem dizendo que o numero chave é maior do que o informado. Se o usuário
gastar mais que cinco tentativas o programa deve ser encerrado. Exemplo de uso:
Infome o seu nome: Zezinho
Informe o primeiro número do intervalo: 0
Informe o segundo número do intervalo: 50
Tente adivinhar o número: 10
Número chave é maior
Tente adivinhar o número: 30
Número chave é maior
Tente adivinhar o número: 45
PARABÉNS ZEZINHO, VOCÊ GANHOU!!!
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

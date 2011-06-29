/*
7) Faça um programa que leia 3 valores inteiros (N, X, Y) e mostre todos os números múltiplos de N
entre X e Y.
*/

void main();
{
    int numero, lim_1, lim_2;
    char continuar;

    do{
        printf("Digite um numero qualquer.\n");
        scanf("%d", &numero);
        printf("Digite o primeiro limite.\n");
        scanf("%d", &lim_1);
        printf("Digite o segundo limite.\n");
        scanf("%d", &lim_2);
        if(lim_1>lim_2)
        {
            calculaMultiplos(n, lim_1);
        }
        printf("Deseja continuar?");
        scanf("%c", &continuar);
    }while((sair = 's')||('S'));
}

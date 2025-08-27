/*
Exercício 3: Dobro de um Número (com
Leitura do Teclado)
Objetivo: Pedir ao usuário para digitar um
número, ler esse número e calcular o seu
dobro.
Exemplo de Saída (se o usuário digitar 7):

Digite um numero inteiro: 7
O dobro de 7 é 14.*/

#include<stdio.h>
int x;
int main (){
    printf("Digite um numero");
    scanf("%d", &x);

    int dobro = x * 2;

    printf("o dobro de %d eh %d",x,dobro);
    return 0;
}
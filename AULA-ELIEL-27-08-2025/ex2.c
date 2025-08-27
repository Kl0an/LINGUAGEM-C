/*
Objetivo 2 : Declarar duas variáveis com
valores numéricos, somá-las e exibir o
resultado.

Exemplo de Saída:
A soma de 10 + 5 é: 15*/

#include<stdio.h>
int x = 10;
int y = 5;
int soma;
int main(){
    soma = x + y;
 printf("A soma de %d + %d: eh %d",x,y,soma);
}
/*
Exercício 4: Exibindo um Caractere

Objetivo : Pedir ao usuário para digitar
uma única letra (caractere) e exibi-la na

tela. Este exercício introduz o tipo char.
Exemplo de Saída (se o usuário digitar G):
Digite uma letra: G
A letra que voce digitou foi: G
*/

#include <stdio.h>

int main(){
    char umchar[1];
    printf(" Usuário digite uma caracter abaixo: \n");
    scanf("%c", umchar);
}
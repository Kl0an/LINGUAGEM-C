//REVISÃO C
//1EX printar na tela
//2EX usar variavel
#include<stdio.h>

char nome[] = "Ola mundo, com variavel";

char name[30];

int main(){
    printf("Ola mundo, direto");
    printf("%s", &nome);

    printf("Digite seu nome");
    scanf("%s", name);
    printf("Ola %s com Variavel",name);
}
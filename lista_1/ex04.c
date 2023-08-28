/*4) Faça um programa que leia inteiros até que o usuário entre com o
valor 0 (zero), calcule e imprima
a) a soma
b) a média
c) quantos inteiros são maiores que a média*/

#include <stdio.h>
#include <stdlib.h>

int maiores = 0;
int tamanho = 0;
int soma = 0;

void maior();

int main(){
    maior();
    float media = (float)soma / tamanho;

    printf(" -> A soma dos numeros eh: %d\n", soma);
    printf(" -> A media dos numeros eh: %.2f\n", media);
    printf(" -> %d sao maiores que a media\n", maiores);

    return 0;
}

void maior(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num == 0){
        return;
    } else {
        tamanho++;
        soma = soma + num;
        maior();
        if(num > ((float)soma / tamanho)){
            maiores++;
        }
    }
}
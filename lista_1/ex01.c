/*1) Escreva um programa que leia um valor n=10 inteiros e calcule e
imprima
a) a soma
b) a média*/

#include <stdio.h>

int main()
{
    int numeros[10];
    int soma = 0;
    float media = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    
    //soma
    for(int i = 0; i < 10; i++){
        soma = soma + numeros[i];
    }
    
    printf("-> A soma dos numeros eh: %d\n", soma);
    
    //media
    media = (float)soma / 10;
    
    printf("-> A media dos numeros eh: %.2f", media);
    
    return 0;
}
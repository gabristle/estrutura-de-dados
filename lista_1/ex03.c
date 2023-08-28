/*3) Faça um programa que leia n=10 inteiros, calcule e imprima
a) a soma
b) a média
c) quantos inteiros são maiores que a média
*/

#include <stdio.h>

int main()
{
    int numeros[10];
    int soma = 0;
    int contador = 0;
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
    
    printf("-> A media dos numeros eh: %.2f\n", media);

    //acima da media

    for(int i = 0; i< 10; i++){
        if(numeros[i] > media){
            contador++;
        }
    }

    printf("-> %d valores estao acima da media", contador);
    
    return 0;
}
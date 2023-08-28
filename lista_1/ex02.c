/*2) Implemente um programa que leia inteiros até que o usuário
entre com o valor 0 (zero), calcule e imprima
a) a soma
b) a média*/

#include <stdio.h>

int main()
{
    int numeros;
    int soma = 0;
    int contador = 0;
    float media = 0;
    
    do{
        printf("Digite um numero: ");
        scanf("%d", &numeros);
        soma = soma + numeros;
        contador++;
    }while(numeros != 0);
    
    printf("A soma dos numeros eh: %d\n", soma);
    
    media = (float)soma / (contador-1);
    
    printf("A media dos numeros eh: %.2f", media);

    return 0;
}
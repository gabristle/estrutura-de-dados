/*
 * aluna: Gabriella Ribeiro de Melo e Costa
 * ra: 2487837
 * curso: Análise e Desenvolvimento de Sistemas
 * data: 22/08/2023
*/

/*
    Implemente um programa em C que:
    - Defina o tipo de dados triângulo contendo os campos base e altura;
    - Defina uma função chamada área que recebe os valores base e altura e calcula a área do triângulo = base * altura / 2;
    - Defina uma função chamada areaB que recebe um triangulo e retorna a área.
    - Defina uma função que recebe 2 triãngulos A e B e troca os valores de A com B.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int base;
    int altura;
} Triangulo;

float area(int base, int altura);
float areaB(Triangulo triangulo);
void troca(Triangulo *trianguloA, Triangulo *trianguloB);

int main() {
    //testando as funções
    Triangulo triA, triB;

    triA.base = 5;
    triA.altura = 9;
    triB.base = 4;
    triB.altura = 8;

    printf("A area eh: %.2f", area(triA.base, triA.altura));
    printf("A area eh: %.2f", areaB(triA));

    troca(&triA, &triB);

    printf("Agora o triangulo A tem %d de base e %d de altura, ja o triangulo B tem %d de base e %d de altura", triA.base, triA.altura, triB.base, triB.altura);
}

float area(int base, int altura){
    return (base * altura)/2.0;
}

float areaB(Triangulo triangulo){
    return (triangulo.base * triangulo.altura)/2.0;
}

void troca(Triangulo *trianguloA, Triangulo *trianguloB){
    Triangulo auxiliar;
    auxiliar = *trianguloA;
    *trianguloA = *trianguloB;
    *trianguloB = auxiliar;
}
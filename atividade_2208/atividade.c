/*
Implemente um programa em C para gerenciar turmas de alunos em uma universidade.
Os dados são os seguintes:
1) Um aluno tem
a. RA
b. Nome
2) Uma disciplina tem
a. Identificador da disciplina
b. Horario (1,2,3,4,...)
c. Lista de RA dos alunos matriculados (até 100)
3) Um curso tem
a. Nome do curso
b. até 10 disciplinas.
O programa deve fazer:
Funcão para ler dados de um aluno e devolver um aluno (return)
Função para ler dados de uma disciplina
Função para ler dados de um curso
Mostrar qual turma tem mais alunos (você pode criar campos extras se achar necessário)
Mostrar qual aluno está matriculado em mais disciplinas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int RA;
    char nome[30];
}Aluno;

typedef struct{
    int identificador;
    int horario;
    Aluno alunos[100];
}Disciplina;

typedef struct{
    char nome[30];
    Disciplina disciplinas[10];
}Curso;

Aluno lerAluno();


int main(){

    return 0;
}

Aluno lerAluno(){
    Aluno aluno;
    
    printf("RA: ");
    scanf("%d", &aluno.RA);
    
    printf("Nome: ");
    fgets(aluno.nome[i], 30, stdin); 
    aluno.nome[i][strcspn(aluno.nome[i],"\n")] = '\0';
    
    return aluno;
}

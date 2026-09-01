#include <string.h>
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    
   struct Aluno aluno[3];
   aluno[0].idade = ;
   aluno[0].altura = ;
   strcpy(aluno[0].nome, );
   
   aluno[1].idade = ;
   aluno[1].altura = ;
   strcpy(aluno[1].nome, );
   
   for (int i = 0; i < 2; i++){
   printf("Insira o nome do aluno1:\n");
   fgets("%s\n");
   printf("Insira a idade do aluno1: \n");
   scanf("%d\n");
   printf("Insira a altura do aluno1:\n");
   scanf("%f\n");

    return 0;
}

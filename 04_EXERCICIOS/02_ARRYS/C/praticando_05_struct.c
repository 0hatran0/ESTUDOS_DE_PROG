#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Criando novos tipos de dados
// Tipo de dado pessoa
// typedef struct 
// {
//     int idade;
//     char sexo;
//     char nome[100];
// }Pessoa;

// // Outra forma
// // struct Pessoa2
// // {
// //     int idade;
// //     char sexo;
// //     char nome[100];    
// // };

// int main(){
//     Pessoa pessoa;
//     // struct Pessoa2 pessoa; // Para a outra forma

//     // pessoa.idade = 20;
//     // pessoa.sexo = 'M';
//     // strcpy(pessoa.nome, "Robson");
//     printf("Digite seu nome: ");
//     fgets(pessoa.nome, 100, stdin);
//     printf("Digite sua idade: ");
//     scanf("%d", &pessoa.idade);
//     printf("Digite seu sexo:");
//     scanf(" %c", &pessoa.sexo);

//     printf("\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);

//     return 0;
// }
// --------------------------------------------------------------------------------------
// Struct de struct
// typedef struct 
// {
//     int dia, mes, ano;
// }DataNasc;


// typedef struct 
// {
//     DataNasc dataNasc;
//     char sexo;
//     char nome[100];
// }Pessoa;

// int main(){
//     Pessoa pessoa;
//     printf("Digite seu nome: ");
//     fgets(pessoa.nome, 100, stdin);
//     printf("Digite seu sexo:");
//     scanf(" %c", &pessoa.sexo);
//     printf("Data de nascimento: ");
//     scanf("%d%d%d", &pessoa.dataNasc.dia, &pessoa.dataNasc.mes, &pessoa.dataNasc.ano);

//     printf("\nNome: %s\nSexo: %c\nData de nascimento: %d/%d/%d\n", pessoa.nome, pessoa.sexo, pessoa.dataNasc.dia, pessoa.dataNasc.mes, pessoa.dataNasc.ano);

//     return 0;
// }
// --------------------------------------------------------------------------------------
// Quanto de memoria ocupa um Struct - sizeof()
// typedef struct 
// {
//     int dia, mes, ano;
// }DataNasc;


// typedef struct 
// {
//     DataNasc dataNasc;
//     char sexo;
//     char nome[100];
// }Pessoa;

// int main(){
//     Pessoa pessoa;

//     printf("%d\n", sizeof(pessoa));

//     // printf("Digite seu nome: ");
//     // fgets(pessoa.nome, 100, stdin);
//     // printf("Digite seu sexo:");
//     // scanf(" %c", &pessoa.sexo);
//     // printf("Data de nascimento: ");
//     // scanf("%d%d%d", &pessoa.dataNasc.dia, &pessoa.dataNasc.mes, &pessoa.dataNasc.ano);

//     // printf("\nNome: %s\nSexo: %c\nData de nascimento: %d/%d/%d\n", pessoa.nome, pessoa.sexo, pessoa.dataNasc.dia, pessoa.dataNasc.mes, pessoa.dataNasc.ano);

//     return 0;
// }
// --------------------------------------------------------------------------------------
// Struct com procedimentos e funções
// typedef struct 
// {
//     int dia, mes, ano;
// }DataNasc;

// typedef struct 
// {
//     DataNasc dataNasc;
//     char sexo;
//     char nome[100];
// }Pessoa;

// Pessoa lerPessoa(){
//     Pessoa p;
//     printf("Digite seu nome: ");
//     fgets(p.nome, 100, stdin);
//     printf("Digite seu sexo:");
//     scanf(" %c", &p.sexo);
//     printf("Data de nascimento: ");
//     scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);
//     return p;
// }

// void imprimirPessoa(Pessoa p){
//     printf("\nNome: %s\nSexo: %c\nData de nascimento: %d/%d/%d\n", p.nome, p.sexo, p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
// }

// int main(){
//     Pessoa pessoa;

//     pessoa = lerPessoa();
//     imprimirPessoa(pessoa);

//     return 0;
// }
// --------------------------------------------------------------------------------------
// Vetor e Matrizes de Struct
typedef struct 
{
    int dia, mes, ano;
}DataNasc;

typedef struct 
{
    DataNasc dataNasc;
    char sexo;
    char nome[100];
}Pessoa;

Pessoa lerPessoa(){
    Pessoa p;
    printf("Digite seu nome: ");
    fgets(p.nome, 100, stdin);
    printf("Digite seu sexo:");
    scanf(" %c", &p.sexo);
    printf("Data de nascimento: ");
    scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);
    return p;
}

void imprimirPessoa(Pessoa p){
    printf("\nNome: %s\nSexo: %c\nData de nascimento: %d/%d/%d\n", p.nome, p.sexo, p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
}

int main(){
    Pessoa pessoas[2][2];

    pessoas[0][0] = lerPessoa();
    imprimirPessoa(pessoas[0][0]);

    return 0;
}




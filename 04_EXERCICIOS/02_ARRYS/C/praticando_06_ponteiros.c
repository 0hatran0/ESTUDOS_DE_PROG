# include <stdio.h>
# include <stdlib.h>

// int main()
// {
//     int num = 10;
//     int *p; // Ponteiro para uma região de memoria que guarda um valor inteiro

//     p = &num; // Ponteiro so armazena endereço de memoria, não poderia ser p = num;

//     printf("Valor de num: %d\n", num);
//     printf("Endereço de num: %p\n", &num);
//     printf("Valor de p: %p\n", p);
//     printf("Valor apontado por p: %d\n", *p);

//     printf("Tamanho: %d\n", sizeof(p));

//     return 0;
// }
// --------------------------------------------------------------------------------------
// Ponteiros com funções
// void imprimir(int *num){
//     printf("%d\n", *num);
//     *num = 80;
// }

// int main()
// {
//     int idade = 35;

//     imprimir(&idade);
//     printf("No main: %d\n", idade);
    
//     return 0;
// }
// --------------------------------------------------------------------------------------
// Vetor é sempre um ponteiro?
// void test(int vet[], int tam)
// {
//     int i;
//     for ( i = 0; i < tam; i++)
//     {
//         vet[i] = vet[i] * 2;
//     }
//     printf("\n");    
// }

// void imprimir(int vet[], int tam)
// {
//     int i;
//     for ( i = 0; i < tam; i++)
//     {
//         printf("%d ", vet[i]);
//     }
//     printf("\n");    
// }
// int main(){

//     int vet[10] = {45, 89, 68, 25, 17, 74};

//     imprimir(vet, 10);
//     test(vet, 10);
//     imprimir(vet, 10);
//     return 0;
// }
// --------------------------------------------------------------------------------------
// Aritimética de ponteiros com vetor
// void test(int vet[], int tam)
// {
//     int i;
//     for ( i = 0; i < tam; i++)
//     {
//         vet[i] = vet[i] * 2;
//     }
//     printf("\n");    
// }

// void imprimir(int vet[], int tam)
// {
//     int i;
//     for ( i = 0; i < tam; i++)
//     {
//         // printf("%d ", *vet); // Aponta para o primeiro indice
//         // printf("%d ", *vet + i);
//         printf("%d ", *(vet + i));
//     }
//     printf("\n");    
// }
// int main(){

//     int vet[10] = {45, 89, 68, 25, 17, 74};

//     imprimir(vet, 10);
//     test(vet, 10);
//     imprimir(vet, 10);
//     return 0;
// }
// --------------------------------------------------------------------------------------
// Ponteiro para Struct
// typedef struct
// {
//     int dia, mes, ano;
// }Data;

// void imprimir(Data *x){
//     printf("%d %d %d\n", x->dia, x->mes, x->ano);
// }


// int main(){

//     Data data;
//     Data *p;
//     p = &data;

//     p = &data;

//     printf("data: %p\tp: %p\n", &data, p);

//     data.dia = 28;
//     data.mes = 2;
//     data.ano = 2026;

//     imprimir(p);

//     printf("%d %d %d\n", data.dia, data.mes, data.ano);

//     return 0;
// }
// --------------------------------------------------------------------------------------
// Ponteiro para ponteiro - Só se tiver necessidade
// int main(){

//     int A = 100, *B, **C;

//     B = &A;
//     C = &B;

//     printf("Endereço de A: %p\tConteudo de A: %d\n", &A, A);
//     printf("Endereço de B: %p\tConteudo de B: %p\n", &B, B);
//     printf("Conteudo apontado por B: %d\n", *B);
//     printf("Endereço de C: %p\tConteudo de C: %p\n", &C, C);
//     printf("Conteudo apontado por C: %d\n", **C);

//     return 0;
// }
// --------------------------------------------------------------------------------------
// Ponteiro para ponteiro
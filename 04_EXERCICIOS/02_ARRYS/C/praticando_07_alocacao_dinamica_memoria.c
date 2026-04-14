#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Alocação dinamica de memória, função malloc, funcção calloc.

// int main(){
//     int *x;

//     //x = malloc(sizeof(int)); // passa para a função o temanho do ponteiro
//     x = calloc(1, sizeof(int));

//     if(x){
//         printf("Memória alocada com sucesso!\n");
//         printf("x: %d\n", *x);
//         *x = 50;
//         printf("x: %d\n", *x);
//     }
//     else{
//         printf("Erro ao alocar memória");
//     }


//     return 0;
// }
// --------------------------------------------------------------------------------------
// Vetor Dinâmico
// int main(){
//     int i, tam, *vet;

//     printf("Digite o tamanho d vetor: ");
//     scanf("%d", &tam);
//     srand(time(NULL));

//     vet = malloc(tam * sizeof(int));

//     if(vet){
//         for(i = 0; i < tam; i++){
//             *(vet + i) = rand() % 100;
//         }
//         for (i = 0; i < tam; i++)
//         {
//             printf("%d ", *(vet + i));
//         }    
//     }
//     else
//     {
//         printf("Erro ao alocar memoria!\n");
//     }
    
//     return 0;
// }
// --------------------------------------------------------------------------------------
// Função Realloc - aloca um novo vetor, aumenta / Função Free - liberar memoria
// int main(){
//     int i, tam, *vet;

//     printf("Digite o tamanho d vetor: ");
//     scanf("%d", &tam);
//     srand(time(NULL));

//     vet = malloc(tam * sizeof(int));

//     if(vet){
//         for(i = 0; i < tam; i++){
//             *(vet + i) = rand() % 100;
//         }
//         for (i = 0; i < tam; i++)
//         {
//             printf("%d ", *(vet + i));
//         }  
//         printf("\n");
//         printf("Digite o tamanho d vetor: ");
//         scanf("%d", &tam);  
//         vet = realloc(vet, tam);
//         for (i = 0; i < tam; i++)
//         {
//             printf("%d ", *(vet + i));
//         }
//         printf("\n");
//     }
//     else
//     {
//         printf("Erro ao alocar memoria!\n");
//     }
    
//     free(vet);
//     return 0;
// }
// --------------------------------------------------------------------------------------
// Matriz dinamica
int main(){
    int **mat, i, j;

    mat = malloc(4 * sizeof(int*)); // Quatro ponteiro, para o ponteiro **mat

    for (i = 0; i < 4; i++)
    {
        mat[i] = malloc(3 * sizeof(int)); // Três int para um pontiro
    }
    
    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            //mat[i][j] = rand() % 100;
            *(*(mat + i) + j) = rand() % 100;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            //printf("%d\t", mat[i][j]);
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        free(mat[i]); // Libera cada linha de vetor
    }
    
    free(mat); // Depois a matriz 

    return 0;
}
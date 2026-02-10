#include <stdio.h>
#include <stdlib.h>

// int main(){
//     int i;
//     int num1[] = {1,5,9,15,43};
//     char vogais[5] = {'a','e','i','o','u'};
//     float notas[3] = {7.7,8.9,3.6};

//     for (i = 0; i < 5; i++)
//     {
//         printf("%d", num1[i]);
//     }
//     printf("\n\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d", vogais[i]);
//     }
//     printf("\n\n");
//     for (i = 0; i < 3; i++)
//     {
//         printf("%d", notas[i]);
//     }
    
//     return 0;
// }

// Solucionando numeros randomicos, nada parte do nada, por isso vamos usar as horas do computador
// #include <time.h>

// int main(){
//     int i;
//     int num1[6] = {};

//     // Alterando numeros pré configurados, mudando a raiz.
//     // srand(40);
//     // Usando as horas do pc para alterar os numeros
//     srand(time(NULL));

//     for (i = 0; i < 6; i++)
//     {
//         // Numeros pre configurados para serem gerados
//         // num1[i] = rand();
//         // Numero aleatorios de 1 a 60
//         num1[i] = 1 + rand() % 60; 
//         // Explicacao:
//         // rand() - Gera um número aleatório grande.
//         // rand() % 60 - % é o operador módulo (resto da divisão). Limita o valor entre 0 e 59.
//         // 1 + rand() % 60 - Soma 1 para evitar o zero, gerando números aleatórios de 1 a 60.
//     }
//     printf("\n\n");
//     for (i = 0; i < 6; i++)
//     {
//         printf("%d ", num1[i]);
//     }
//     printf("\n\n");

//     return 0;
// }

// Matrizes
//
// int main(){
//     int num1[6];

//     int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9};
//     /*      coluna 0 coluna 1 coluna 2
//     linha 0     1       2       3
//     linha 1     4       5       6
//     linha 2     7       8       9
//     */

//    int mat2[][3] = {1,2,3,4,5,6,7}; // Preenche o que faltou com 0

//    char mat3[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'};

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("\t%d", mat2[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

#include <time.h>

int main(){
    int i, j, mat1[3][3];

    srand(time(NULL));

       for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // scanf("%d", &mat1[i][j]);
            mat1[i][j] = rand() % 100;
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", mat1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
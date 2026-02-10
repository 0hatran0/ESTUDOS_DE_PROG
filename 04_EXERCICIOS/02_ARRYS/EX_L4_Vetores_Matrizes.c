#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Exercicios de Matrizes e Vetores
// ---------------------------------------------------------------------
// Ex 01
// Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
// Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
// fim, imprima os dois vetores.
// int main(){
//     int i, j=0, v1[5], v2[5];

//     // srand(time(NULL));
//     printf("Preencha o vetor com 10 números: (Será preenchido com número aleatorios)\n");
//     for (i = 0; i < 5; i++)
//     {
//         v1[i] = 1 + rand() % 10;
//         // printf("Valor %d:", ++j);
//         // scanf("%d", &v1[i]);
//         v2[i] = v1[i]*v1[i];
//     }

//     // for (i = 0; i < 10; i++)
//     // {
//     //     /* code */
//     // }
    
//     for (j = 0; j < 2; j++)
//     {
//         j == 0 ? printf("Vetor 1 preenchido:\t") : printf("Vetor com valores quadradicos do primerio:\t");
//         for (i = 0; i < 5; i++)
//         {
//             if (j == 0)
//             {
//                printf("%d\t", v1[i]);
//             }
//             else
//             {
//                 printf("%d\t", v2[i]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 02
// Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
// em um terceiro vetor. Imprima os três vetores na tela.
// int main(){
//     int i, j, v1[10], v2[10], v3[10];
//     srand(time(NULL));
//     for (i = 0; i < 10; i++)
//     {
//         v1[i] = 1 + rand() % 10;
//         v2[i] = 1 + rand() % 10;
//         v3[i] = v1[i] + v2[i];
//     }
//     for (j = 0; j < 3; j++)
//     {
//         j == 0 ? printf("Vetor 1:\t\t\t\t") : j == 1 ? printf("Vetor 2:\t\t\t\t") : printf("Vetor 3(Soma do Vetor 1 com o Vetor 2):\t");
//         for (i = 0; i < 10; i++)
//         {
//             if (j== 0)
//             {
//                 printf("%d\t", v1[i]);
//             }
//             else if (j == 1)
//             {
//                 printf("%d\t", v2[i]);
//             }
//             else
//             {
//                 printf("%d\t", v3[i]);
//             }
            
//         }
//         printf("\n");        
//     }
    
    
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 03
// Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
// o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
// modificado.
int main(){
    int i, j, k = 9, x = 0, N[10];
    srand(time(NULL));
    printf("Vetor N:\t\t");
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 10; i++)
        {
            if (j == 0)
            {
                N[i] = 1 + rand() % 10;
            }
            else
            {
                printf("%d\t", N[i]);
            }
        } 
    }
    printf("\n");
    printf("Vetor N Invertido:\t");
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 10; i++)
        {
            if (j == 0 && i < 5)
            {
                x = N[i];
                N[i] = N[k];
                N[k] = x;
                k--;
            }
            else if (j == 1)
            {
                printf("%d\t", N[i]);
            }
            else
            {
                continue;
            }            
        }   
    }
    return 0;
}
// ---------------------------------------------------------------------
// Ex 04
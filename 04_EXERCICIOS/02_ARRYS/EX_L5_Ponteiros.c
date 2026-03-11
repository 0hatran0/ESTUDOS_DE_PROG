#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// ---------------------------------------------------------------------
// Ex 01
// Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
// variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
// int main(){
//     int vet[5] = {4, 6, 7, 3, 5}, menor = 0, maior = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (menor > vet[i])
//         {
//             menor = vet[i];
//         }else if (maior < vet[i])
//         {
//             maior = vet[i];
//         }else
//         {
//             continue;
//         }    
//     }
    
//     printf("Menor valor do vetor: %d\nMaior valor do vetor: %d", menor, maior);

//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 02
// Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
// ser: void troca(float *a, float *b);
// void troca(float *a, float *b){
//     float c;
//     c =*a;
//     *a = *b;
//     *b = c;
// }

// int main(){
//     float num1, num2;
//     srand(time(NULL));
//     num1 = rand() % 10;
//     num2 = rand() % 10;
//     printf("Valor incial 1: %2.0f\nValor incial 2: %2.0f\n", num1, num2);
//     troca(&num1, &num2);

//     printf("Valores trocados:\nValor incial 1: %2.0f\nValor incial 2: %2.0f", num1, num2);
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 03
// Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
// endereço de cada posição do array.
// int main(){
//     int vet[10];
//     srand(time(NULL));
//     for (int j = 0; j < 2; j++)
//     {
//         for (int i = 0; i < 10; i++)
//         {
//             if (j == 0)
//             {
//                 vet[i] = rand() % 10;
//             } else if (j == 1)
//             {
//                 printf("Elemento: %d\nEndereço; %p\n\n", *(vet + i), (vet + i));
//             }    
//         }  
//     }
    
// }
// ---------------------------------------------------------------------
// Ex 04
// Considere a seguinte declaração: int A, *B, **C, ***D
// Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
// valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
// o triplo e D o quádruplo.
int main(){
    int A, *B, **C, ***D;
    scanf("%d", &A);
    
    B = &A;
    C = &B;
    D = &C;

    printf("A: %d\tB: %d\n", A, *B * 2);
    printf("A: %d\tC: %d\n", A, **C *3);
    printf("A: %d\tD: %d\n", A, ***D * 4);
}
// ---------------------------------------------------------------------
// Ex 05
// Implemente a função strcpy (char *destino, char *origem) usando ponteiros.

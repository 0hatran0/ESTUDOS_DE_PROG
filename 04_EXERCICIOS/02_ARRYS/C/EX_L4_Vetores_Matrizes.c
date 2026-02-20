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
// int main(){
//     int i, j, k = 9, x = 0, N[10];
//     srand(time(NULL));
//     printf("Vetor N:\t\t");
//     for (j = 0; j < 2; j++)
//     {
//         for (i = 0; i < 10; i++)
//         {
//             if (j == 0)
//             {
//                 N[i] = 1 + rand() % 10;
//             }
//             else
//             {
//                 printf("%d\t", N[i]);
//             }
//         } 
//     }
//     printf("\n");
//     printf("Vetor N Invertido:\t");
//     for (j = 0; j < 2; j++)
//     {
//         for (i = 0; i < 10; i++)
//         {
//             if (j == 0 && i < 5)
//             {
//                 x = N[i];
//                 N[i] = N[k];
//                 N[k] = x;
//                 k--;
//             }
//             else if (j == 1)
//             {
//                 printf("%d\t", N[i]);
//             }
//             else
//             {
//                 continue;
//             }            
//         }   
//     }
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 04
// Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
// diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
// vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
// vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
// receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
// determine e mostre:
// a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
// o valor total das vendas e o valor da comissão que será paga ao vendedor.
// b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
// empatados).
// int main(){
//     float valorUnitarioCadaProduto[10], valorTotalCadaProduto[10], valorTotalVenda, comissao;
//     int i, j, quantidadeCadaProdutoVendido[10], posicaoProdutoMaisVendido, produtoMaisVendido;
//     srand(time(NULL));
//     // Entrada
//     for (j = 0; j < 2; j++)
//     {
//         j == 0 ? printf("Insira o valor de cada produto: \n") : printf("\nInsira a quantidade vendida de cada produto: \n"); 
//         for (i = 0; i < 10; i++)
//         {
//             if (j == 0)
//             {
//                 printf("Valor do produto de indice %d: ", i);
//                 valorUnitarioCadaProduto[i] = 1 + rand() % 20;
//                 printf("%0.2f\n", valorUnitarioCadaProduto[i]);
//                 // scanf("%f", valorUnitarioCadaProduto[i]);
//             }
//             else
//             {
//                 printf("Quantidade do produto de indice %d: ", i);
//                 quantidadeCadaProdutoVendido[i] = 1 + rand() % 10;
//                 printf("%d\n", quantidadeCadaProdutoVendido[i]);
//                 // scanf("%d", quantidadeCadaProdutoVendido[i]);
//             }
//         } 
//     }

//     // Processo
//     printf("\nQuantidade do produto | Valor unitario | Valor total de cada produto: \n") ;
//     for (i = 0; i < 10; i++)
//     {
//         // Valor total de cada produto
//         valorTotalCadaProduto[i] = valorUnitarioCadaProduto[i] * quantidadeCadaProdutoVendido[i];
//         // Valor total da venda de todos produtos
//         valorTotalVenda = valorTotalVenda + valorTotalCadaProduto[i];
//         printf("\t%d\t\t%0.2f\t\t%0.2f\n", quantidadeCadaProdutoVendido[i], valorUnitarioCadaProduto[i], valorTotalCadaProduto[i]);
//         // Identificar produto mais vendido
//         if (produtoMaisVendido < quantidadeCadaProdutoVendido[i])
//         {
//             produtoMaisVendido = quantidadeCadaProdutoVendido[i];
//             posicaoProdutoMaisVendido = i;
//         }
//     }   


    
//     comissao = valorTotalVenda * 0.05;

//     // Saida
//     printf("\nValor total das vendas: %0.2f\t Valor da comissão: %0.2f\n", valorTotalVenda, comissao);
//     printf("\nValor do produto mais vendio %2.0f de indice %d\n\n", valorUnitarioCadaProduto[posicaoProdutoMaisVendido], posicaoProdutoMaisVendido);
//     return 0; 
// }
// ---------------------------------------------------------------------
// Ex 05
// Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
// vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
// mês por extenso: janeiro, fevereiro ...). Desconsidere empates.

void mes(int mes){
    switch (mes)
    {
    case 0:
        printf("Janeiro");
        break;
    case 1:
        printf("F");
        break;
    case 2:
        printf("M");
        break;
    case 3:
        printf("A");
        break;
    case 4:
        printf("M");
        break;
    case 5:
        printf("JN");
        break;
    case 6:
        printf("JL");
        break;
    case 7:
        printf("A");
        break;
    case 8:
        printf("S");
        break;
    case 9:
        printf("O");
        break;
    case 10:
        printf("N");
        break;
    case 11:
        printf("D");
        break;
    default:
        break;
    }
}

int main(){
    float temperatura[12], maiorTemperatura, menorTemperatura;
    int i, mesMaiorTemperatura, mesMenorTemperatura;
    srand(time(NULL));
    for (i = 0; i < 12; i++)
    {
        temperatura[i] = rand() % 50;
        temperatura[i]= temperatura[i]-10;
        if (maiorTemperatura < temperatura[i])
        {
            maiorTemperatura = temperatura[i];
            mesMaiorTemperatura = i;
        }
        else if (menorTemperatura > temperatura[i])
        {
            menorTemperatura = temperatura[i];
            mesMenorTemperatura = i;
        } 
        else
        {
            continue;
        }
    }

    printf("Mes mais quente: ");
    mes(mesMaiorTemperatura);
    printf("%0.2f\n", maiorTemperatura);
    printf("Mes menos quente: ");
    mes(mesMenorTemperatura);
    printf("%0.2f\n", menorTemperatura);
    return 0; 
}
// ---------------------------------------------------------------------
// Ex 05
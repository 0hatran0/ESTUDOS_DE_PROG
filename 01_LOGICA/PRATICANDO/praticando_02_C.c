# include <stdio.h>
# include <stdlib.h>
// Exercicios
// int main(){   
//     return 0;
// }
// Ex 01
// Imprimir a tabuada de um numero de 1 a 10
int main(){   
    int n = 0; // Número que será calculada a tabuada
    // Verificar se é um número e está entre 1 e 10, repetir caso não seja.
    do{
        if (n == 0)
        {
            printf("Insira um número entre 1 e 10 para calcular a sua tabuada: ");
            scanf("%d", &n);
        }else
        {
            printf("\nNúmero invalido!\n\n");
            n = 0;
        }
    }while (n < 1 || n > 10); // Enquanto for menor que um ou maior que 10, repetir
    // Laço re repetição para calcular a tabuada
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d = %d \n", n, i, n*i);
    }

    return 0;
}
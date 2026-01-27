# include <stdio.h>
# include <stdlib.h>
// Exercicios
// int main(){   
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 01
// Imprimir a tabuada de um numero de 1 a 10
// int main(){   
//     int n = 0; // Número que será calculada a tabuada
//     // Verificar se é um número e está entre 1 e 10, repetir caso não seja.
//     do{
//         if (n == 0)
//         {
//             printf("Insira um número entre 1 e 10 para calcular a sua tabuada: ");
//             scanf("%d", &n);
//         }else
//         {
//             printf("\nNúmero invalido!\n\n");
//             n = 0;
//         }
//     }while (n < 1 || n > 10); // Enquanto for menor que um ou maior que 10, repetir
//     // Laço re repetição para calcular a tabuada
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d*%d = %d \n", n, i, n*i);
//     }

//     return 0;
// }
// Metodo do chat para verificar letras
// #include <stdio.h>

// int main() {

//     int n;
//     int resultado;

//     do {
//         printf("Insira um número entre 1 e 10 para calcular a sua tabuada: ");

//         resultado = scanf("%d", &n); // Se for letra sai "resultado" = 0

//         // Limpar buffer se deu erro
//         while (getchar() != '\n');

//         if (resultado != 1) {
//             printf("\nEntrada inválida! Digite apenas números.\n\n");
//             continue;
//         }

//         if (n < 1 || n > 10) {
//             printf("\nNúmero fora do intervalo (1 a 10).\n\n");
//         }

//     } while (n < 1 || n > 10);

//     printf("\nTabuada do %d:\n\n", n);

//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }

//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 02
// Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
// de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
// informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
// encerrado. Considere que a senha correta é o valor 123456.
// int main(){   
//     int senha;
//     do
//     {
//         printf("Digite a senha: ");
//         scanf("%d", &senha);

//         if(senha != 123456){
//             printf("Senha Invalida!\n");
//         }
//     } while (senha != 123456);

//     printf("Acesso Permitido!\n");
    
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 03
// Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
// int main(){   
//     int soma;
//     // For para pois já sei o numero de vezes
//     for (int i = 1; i <= 1000; i++)
//     {
//         // Identificar se a divisão por dois é resto 0, caso o contrário, o número é impar
//         if (i%2 != 0)
//         {
//             // Soma dos número ímpares
//             soma+=i;
//         }else
//         {
//             continue;
//         }
//         printf("Número atual: %d\n Soma atual: %d\n", i, soma);
//     }
    
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 04
// Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
// Restrição:
// → O bloco de repetição deve executar no máximo 500 vezes.
// int main(){    
//      int soma;
//     // For para pois já sei o numero de vezes
//     for (int i = 1; i <= 1000; i++)
//     {
//         // Identificar se a divisão por dois é resto 0, caso o contrário, o número é impar
//         if (i%2 != 0)
//         {
//             // Soma dos número ímpares
//             soma+=i;
//         }else
//         {
//             continue;
//         }
//         printf("Número atual: %d\n Soma atual: %d\n", i, soma);
//     }
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 05
// Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
// imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
// pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
// int main(){    
//     float nota, soma, media;
//     int i=1;
//     do
//     {
//         printf("Digite a nota %d: ", i);
//         scanf("%f", &nota);
//         if (nota < 0 || nota > 10)
//         {
//             printf("Nota invalida! Digite uma valor entre 0 e 10\n");
//         }else
//         {
//             soma=+nota;
//             i++;
//         }
//     } while (i != 3);
    
//     media = soma/2;
//     printf("Media final: %.2f", media);
//     return 0;
// }
// ---------------------------------------------------------------------
// Ex 06
// Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
// int main(){    
//     for (int i = 1; i <= 9999; i++)
//     {
//         if (i%7 == 0 )
//         {
//             printf("\n%d", i);
//         }
//     }
    
//     return 0;
// }
// Ex 07
// Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
// inclusive N, se for o caso.
int main(){    
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i*i);
    }
    
    return 0;
}

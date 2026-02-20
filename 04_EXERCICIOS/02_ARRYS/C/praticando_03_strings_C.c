#include <stdio.h>
#include <stdlib.h>

// int main(){
//     // Strings - vetor do tipo char
//     //char palavras[] = {"Hello World!"};
//     char palavras[100] = {"Hello World!"};
//     printf("Digite seu nome: ");
//     // 10[^\n] Quanto pode ler
//     scanf("%s10[^\n]", palavras);

//     printf("%s", palavras);
//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------
// int main(){
//     int i = 0, tam = 0;
//     char palavras[55] = {"Hello World!"};
//     // printf("Digite seu nome: ");
//     // gets(palavras); não é adequado usar
//     // fgets() - onde será armazenado | quantidade maxima de caracteres pode ser lido | entrada padrao do computador
//     // fgets(palavras, 55, stdin); // Ultimo caracter é para fim de string, logo nao armazena.

//     // Identificando fim de string

//     // Imprimindo a string completa
//     // for (int i = 0; i < 55; i++)
//     // {
//     //     printf("%d = %c\n", i, palavras[i]);
//     // }


//     // for (int i = 0; i < 55; i++)
//     // {
//     //     printf("%d = %d\n", i, palavras[i]); // Imprimir de acordo com a tabela ASC
//     // }

//     // Imprimir até achar o final da string
//     // while (palavras[i] != '\0')
//     // {
//     //     printf("%d = %c\n", i, palavras[i]);
//     //     // printf("%d = %d\n", i, palavras[i]);
//     //     tam++; // Tamanho de uma string
//     //     i++;
//     // }

//     // Removendo o enter de uma string
//     while (palavras[i] != '\0')
//     {
//         if(palavras[i] == '\n'){
//             palavras[i] = '\0';
//         }
//         i++;
//     }

//     while (palavras[i] != '\0')
//     {
//         printf("%d = %c\n", i, palavras[i]);
//         i++;
//     }
    
    
//     printf("%s", palavras);
//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------
// Função para descobrir o tamanho de um string
// # include <string.h>
// int main(){
//     char palavras[55] = {"Hello World!"};

//     // Função para descobrir o tamanho
//     printf("Tamanho: %d\n", strlen(palavras)); // Observação, ele retorna o "Entrer"
//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------
// Concatenando duas strings
// #include <string.h>
// int main(){
//     char palavra1[50] = {"Oi."};
//     char palavra2[50] = {"Bom dia."};
//     strcat(palavra1, palavra2); // concatenando as palavras
//     printf("\n\t%s\n", palavra1); 
//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------
// Copiando um string
// #include <string.h>
// int main(){
//     char palavra1[50] = {"Oi"};
//     char palavra2[50] = {"Bom dia"};

//     strcpy(palavra2, palavra1); // Palavra2 copia palavra1

//     printf("\n\n Resultado: %s\n\n", palavra2); 
//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------
// Procurando caracter em uma String 
// #include <string.h>
// int main(){
//     char palavra[50] = {"Abacate"};
//     char *letra;

//     // letra = strchr(palavra, 'a'); // // Função para procurar o caracter no vetor
//     letra = strrchr(palavra, 'a'); // Procurar do final da string para o inicio

//     printf("\n%c\n", *letra);
//     printf("\n%c\n", *(letra + 1));
//     printf("\n%c\n", *(letra + 2));

//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------
// Procurando substring em uma String 
// #include <string.h>
// int main(){
//     char palavra[50] = {"Bom dia simpatia"};
//     char str[] = {"dia"};
//     char *ponteiro;

//     ponteiro = strstr(palavra, str); // Onde vou buscar | O que quero buscar

//     if (ponteiro) // == ponteiro != NULL
//     {
//         printf("\n%c%c%c\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2) );
//     }
//     else{
//         printf("\nPonteiro nulo.\n"); // Senão achar a substring
//     }
    

//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------
// Dividindo a string em tokens 
#include <string.h>
int main(){
    char palavra[50] = {"Bom dia simpatia"};
    char *pt;

    pt = strtok(palavra, " ");

    while (pt){
        printf("token: %s\n", pt);
        pt = strtok(NULL, "");
    }
    

    return 0;
}


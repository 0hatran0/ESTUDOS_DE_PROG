# include <stdio.h>
# include <stdlib.h>

/* Praticando programação*/

// ------------------------------------------------------
// int main() {
//     char letra;

//     printf("Digite uma letra: ");
//     letra = getchar(); // Digitar um caracte(letra)
//     letra = getc(stdin); // Qualquer tecla do teclado é um caracter(pode ser numeros) 
//     letra = fgetc(stdin); // Ler de um documento, mas colocamos o teclado

//     printf("Caracter lido: %c", letra);
//     return 0;
// }

// ------------------------------------------------------
// int main(){
//     int num;
//     char letra;

//     printf("Digite um valor e um caracter ");
//     scanf("%d %c", &num, &letra);
//     // Qualquer tecla do teclado é considerado um caracter, logo precisa colocar o espaco entre "%d" e "%c".
//     // É um comando para desconsiderar o "enter(\n)" ou "espaço"
//     printf("Numero e caracter", num, letra);
//     return 0;
// }

// ------------------------------------------------------
// int main(){
//     // int y = 0;
//     short int x = 32767;
//     printf("Valor de x: %d\n", x);
//     x++; 
//     printf("Valor de x: %d\n", x); // Estouro de memoria, armazena apenas 16 bits ou 2 bytes
//     // printf("Tamanho em memoria de int: %d bytes\n", sizeof y);
//     // printf("Tamanho em memoria de um short int: %d bytes\n", sizeof x);
//     return 0;
// }

// ------------------------------------------------------
// int main(){
//     long long int x = 2147483647;
//     printf("Tamanho de x em bytes: %d\n", sizeof x);
//     printf("Valor de x: %lld\n", x);
//     x++; 
//     printf("Valor de x: %lli\n", x);
//     return 0;
// }

// ------------------------------------------------------
int main(){
    float x = 3.1415;
    double y = 3.14155896587458962547;
    long double z = 3.14155896587458962548;
    printf("Tamanho de um float x em bytes: %d\n", sizeof x);
    printf("Tamanho de um double y em bytes: %d\n", sizeof y);
    printf("Tamanho de um long double z em bytes: %d\n", sizeof z);
    printf("Valor de y: %.15Lf\n", z);
    return 0;
}
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
void imprimir(int num){
    printf("%d\n", num);
    num = 80;
}

int main()
{
    int idade = 35;

    imprimir(idade);
    printf("No main: %d\n", idade);
    
    return 0;
}

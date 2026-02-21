#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * 
 * 
 */

// Celulas do campo minado
typedef struct{
    int atividadeBomba; // 0 não possui bomba | 1 possui bomba
    int estaAberto; // 0 naõ está aberto | 1 está aberto
    int qtdBombasVizinhas; // Informar quantidade de bombas ao redor
}Celula;

Celula celulas[8][10]; // Matriz 10X10 - 100 celulas 
int qtdLinhas = 8, qtdColunas = 10, qtdBombas = 10;// Quantidade de Linhas | Quantidade de Colunas | Quantidade de Bombas

// // Verificar se o jogo foi finalizado
// void verificarVitoria(){

// }

// // Verificar se há bomba na coordenada informada
// void verificarBomba(){

// }

// Validar se as coordenadas estão dentro da quantidaded de celulas
int validarCoordenadas(int l, int c){
    int validar;
    if (l >= 0 && l < qtdLinhas && c >= 0 && c < qtdColunas)
    {
        validar = 1;
    }else
    {
        validar = 0;
    }
    return validar;
}

// // Abrir a celula de acordo com as coordenadas informadas
int abrirCelula(){
    int l, c, contarJogasValidas = 0, coordenadaValida;
    printf("Informe as coordenadas da celula que deseja abrir: ");
    scanf("%d%d", &l, &c);
    coordenadaValida = validarCoordenadas(l,c);
    if (celulas[l][c].estaAberto == 0 && coordenadaValida == 1)
    {
        celulas[l][c].estaAberto = 1;
        contarJogasValidas++;
    }
    else
    {
        coordenadaValida == 0 ? printf("Coordenadas invalidas!") : printf("Essa celula já foi aberta, tente outra!");
    }   
    return contarJogasValidas;
}

// // Mostrar celulas do campo
void mostrarCelulas(int l, int c){
    if(celulas[l][c].estaAberto == 0){
        printf("X\t");
    }else{
        celulas[l][c].atividadeBomba == 0 ? printf("%d\t", celulas[l][c].qtdBombasVizinhas) : printf("B");
    }
}

// Mostrar campo minado. Vai conter uma matriz 10x10 de celulas.
void mostrarCampo(){
    // celulas[3][5].estaAberto = 1;
    printf("\t");
    for (int c = 0; c < qtdColunas; c++)
    {
        printf("%d\t", c);
    }
    printf("\n\n\n");
    for (int l = 0; l < qtdLinhas; l++)
    {
        printf("%d\t", l);
        for (int c = 0; c < qtdColunas; c++)
        {        
            mostrarCelulas(l, c);
        }
        printf("\n\n");
    }  
    printf("\n\n");
}

// Verifcando celulas vizinhas
// Se for (1,1)
//      SE   S   SD
//       E  (C)  D
//      IE   I   ID

int verificarCelulaSuperiorEsquerda(int l, int c){
    int bomba;
    l =-1; // Linha anterior
    c =-1; // Coluna anterior
    if (celulas[l][c].atividadeBomba == 1)
    {
        bomba = 1;
    }else
    {
        bomba = 0;
    }
    return bomba;
}

int verificarCelulaSuperior(int l, int c){
    int bomba;
    l =-1; // Linhas anterior | Mesma coluna
    if (celulas[l][c].atividadeBomba == 1)
    {
        bomba = 1;
    }else
    {
        bomba = 0;
    }
    return bomba;
}

int verificarCelulaSuperiorDireita(int l, int c){
    int bomba;
    l =-1; // Linha anterior
    c =+1; // Coluna posterior
    if (celulas[l][c].atividadeBomba == 1)
    {
        bomba = 1;
    }else
    {
        bomba = 0;
    }
    return bomba;
}

int verificarCelulaEsquerda(int l, int c){
    int bomba;
    c =-1; // Coluna anterior | Mesma linha
    if (celulas[l][c].atividadeBomba == 1)
    {
        bomba = 1;
    }else
    {
        bomba = 0;
    }
    return bomba;
}

int verificarCelulaDireita(int l, int c){
    int bomba;
    c =+1; // Coluna posterior | Mesma linha
    if (celulas[l][c].atividadeBomba == 1)
    {
        bomba = 1;
    }else
    {
        bomba = 0;
    }
    return bomba;
}

int verificarCelulaInferiorEsquerda(int l, int c){
    int bomba;
    l =+1; // Linha posterior
    c =-1; // Coluna anterior
    if (celulas[l][c].atividadeBomba == 1)
    {
        bomba = 1;
    }else
    {
        bomba = 0;
    }
    return bomba;
}

int verificarCelulaInferior(int l, int c){
    int bomba;
    l =+1; // Linha posterior | Mesma coluna
    if (celulas[l][c].atividadeBomba == 1)
    {
        bomba = 1;
    }else
    {
        bomba = 0;
    }
    return bomba;
}

int verificarCelulaInferiorDireita(int l, int c){
    int bomba;
    l =+1; // Linha posterior
    c =+1; // Coluna posterior
    if (celulas[l][c].atividadeBomba == 1)
    {
        bomba = 1;
    }else
    {
        bomba = 0;
    }
    return bomba;
}

// Verificar se é uma celula localizada nas estremidades
void verificarCelulaDeBorda(int l, int c){
    if (l == 0 || c == 0 || l == 7 || c == 9)
    {
                
    }
}

// Calcular bombas vizinhas
void calcularBombasVizinhas(){
    int qtdBombasVizinhas;
    for (int l = 0; l < qtdLinhas; l++)
    {
        for (int c = 0; c < qtdColunas; c++)
        {
            // Se for (1,1)
            // SE   S   SD
            //  E  (C)  D
            // IE   I   ID
            qtdBombasVizinhas = 
            verificarCelulaSuperiorEsquerda(l, c) // SE
            + verificarCelulaSuperior(l, c) // S
            + verificarCelulaSuperiorDireita(l, c) // SD
            + verificarCelulaEsquerda(l, c) // E
            + verificarCelulaDireita(l, c) // D
            + verificarCelulaInferiorEsquerda(l, c) // IE
            + verificarCelulaInferior(l, c) // I
            + verificarCelulaInferiorDireita(l, c); // ID
            celulas[l][c].qtdBombasVizinhas = qtdBombasVizinhas;
        }  
    }
}

// Espalhar bombas pelas celulas
void espalharBombas(){
    int l, c;
    srand(time(NULL));
    for (int i = 0; i < qtdBombas; i++)
    {
        l = rand() % 8;
        c = rand() % 10;
        if (celulas[l][c].atividadeBomba == 0)
        {
            celulas[l][c].atividadeBomba = 1;
        }else
        {
            i--;
        } 
    } 
}

// Inicializar a matriz(Campo Minado) atribuindo valores as celulas 
void inicializarCelulasDoCampo(){
    for (int l = 0; l < qtdLinhas; l++)
    {
        for (int c = 0; c < qtdColunas; c++)   
        {
            celulas[l][c].atividadeBomba = 0;
            celulas[l][c].estaAberto = 0;
            celulas[l][c].qtdBombasVizinhas = 0;
        }
    }
}

int main(){
    int contarJogadasValidas;
    printf("---------------------------------- CAMPO MINADO ----------------------------------\n\n");
    inicializarCelulasDoCampo();
    espalharBombas();
    do
    {
        mostrarCampo();
        contarJogadasValidas = abrirCelula();
    } while (contarJogadasValidas != 5);

    return 0;
}
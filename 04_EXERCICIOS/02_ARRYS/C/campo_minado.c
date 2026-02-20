/**
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Celulas do campo minado
typedef struct{
    int atividadeBomba; // 0 não possui bomba | 1 possui bomba
    int estaAberto; // 0 naõ está aberto | 1 está aberto
    int qtdBombasVizinhas; // Informar quantidade de bombas ao redor
}Celula;

Celula celulas[8][10]; // Matriz 10X10 - 100 celulas 
int l, c, qtdH = 8, qtdV = 10, bombas = 10;

// // Mostrar bombas proximas da coordenada informada
// void mostrarInformacoesBombas(){

// }

// // Verificar se há bomba na coordenada informada
// void verificarSeEBomba(){

// }

// // Verificar se as coordenadas ja foram informadas, pedir outras
// void verificarSeFoiAberta(){

// }

// // Abrir a celula de acordo com as coordenadas informadas
// void abrirCelula(Celula c){
//     printf("Informe as coordenadas da celula que deseja abrir: ");
//     scanf("%d", c);
//     // return c;
// }

// // Verificar se a celulca foi aberta para ver se todas foram aberta(vencer), como também mostrar as celulas abertas no campo
int verificarCelulasAbertas(int linha, int coluna){
    int celulasSelecionadas;
    if(celulas[linha][coluna].estaAberto == 0){
        printf("X\t");
    }else{
        printf("%d\t", celulas[linha][coluna].qtdBombasVizinhas);
        celulasSelecionadas++;
    }
    return celulasSelecionadas;
}

// Criar campo minado. Vai conter uma matriz 10x10 de celulas.
void criarCampo(){
    // celulas[3][5].estaAberto = 1;
    printf("\t");
    for (c = 0; c < qtdV; c++)
    {
        printf("%d\t", c);
    }
    printf("\n\n\n");
    for (l = 0; l < qtdH; l++)
    {
        printf("%d\t", l);
        for (c = 0; c < qtdV; c++)
        {        
            verificarCelulasAbertas(l, c);
        }
        printf("\n\n");
    }  
    printf("\n\n");
}

// Espalhar bombas pelas celulas
void espalharBombas(){
    srand(time(NULL));
    for (int i = 0; i < bombas; i++)
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
Celula inicializarCelulasDoCampo(){
    for (l = 0; l < qtdH; l++)
    {
        for (c = 0; c < qtdV; c++)   
        {
            celulas[l][c].atividadeBomba = 0;
            celulas[l][c].estaAberto = 0;
            celulas[l][c].qtdBombasVizinhas = 0;
        }
    }
}

int main(){
    printf("---------------------------------- CAMPO MINADO ----------------------------------\n\n");
    inicializarCelulasDoCampo();
    espalharBombas();
    // do
    // {
    //     /* code */
    // } while (condition);
    
    criarCampo();

    return 0;
}
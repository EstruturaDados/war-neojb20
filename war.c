#include <stdio.h>
#include <string.h>

//Definindo o numero fixo de territorios a serem cadastradas.
#define MAX_TERRITORIOS 5

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio listaTerritorios[MAX_TERRITORIOS]; //Declaracao de um vetor de structs com capacidade para 5 elementos.
    int i; // Variavel de controle para os lacos.

    printf("--- Cadastro de Territorios -- \n\n");

    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Territorio #%d: \n", i + 1): //Logica do laço para a entrada de dados. O laço intera 5 vezes para preencher cada struct no vetor.

        printf(" Digite o nome do territorio (max 29): "); //Entrada do nome.
        scanf("%29s", listaTerritorios[i].nome); //Usando o sccanf para ler o nome.

        printf(" Digite a cor do exercito (max 9): "); //Entrada da cor.
        scanf("%9s", listaTerritorios[i].cor); // Utilizando o scanf para ler a cor.

        printf(" Digite a quantidade de tropas: ");
        scanf("%d", &listaTerritorios[i].tropas);

        printf("\n"); // espacamento para o proximo bloco cadastrado.
    }

    printf(" --- Dados dos Territorios Cadastrados ---\n"); //Exibição dos dados cadastrados.
    printf("------------------------------------------\n");

    for(i=0; i< MAX_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);
        // Exibição formatada de cadas campo.
        printf(" -> Nome: %s\n", listaTerritorios[i].nome);
        printf(" -> Cor: %s\n", listaTerritorios[i].cor);
        printf(" -> Tropas: %d\n", listaTerritorios[i].tropas);
        printf("------------------------------------------------\n");
    }

    return 0;
}
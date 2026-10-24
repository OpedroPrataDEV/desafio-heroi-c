#include <stdio.h>
#include <string.h>

// Definição da "classe" Herói usando struct
typedef struct {
    char nome[50];
    int idade;
    char tipo[20];
} Heroi;

// Método "atacar" simulado em C
void atacar(Heroi h) {
    char ataque[30];

    // Estrutura de decisão para definir o tipo de ataque com base no tipo do herói
    if (strcmp(h.tipo, "mago") == 0) {
        strcpy(ataque, "magia");
    } else if (strcmp(h.tipo, "guerreiro") == 0) {
        strcpy(ataque, "espada");
    } else if (strcmp(h.tipo, "monge") == 0) {
        strcpy(ataque, "artes marciais");
    } else if (strcmp(h.tipo, "ninja") == 0) {
        strcpy(ataque, "shuriken");
    } else {
        strcpy(ataque, "ataque básico");
    }

    // Exibição da mensagem final formatada conforme o requisito
    printf("o %s atacou usando %s\n", h.tipo, ataque);
}

int main() {
    // Criando objetos (instâncias) de heróis diferentes
    Heroi heroi1 = {"Gandalf", 1000, "mago"};
    Heroi heroi2 = {"Aragorn", 35, "guerreiro"};
    Heroi heroi3 = {"Shaolin", 30, "monge"};
    Heroi heroi4 = {"Hanzo", 25, "ninja"};

    // Chamando o método de ataque para cada herói
    atacar(heroi1);
    atacar(heroi2);
    atacar(heroi3);
    atacar(heroi4);

    return 0;
}
#include <stdio.h>

// Função do menu
void menu() {
    printf("Selecione uma opção:\n");
    printf("1 - Movimento Bispo\n");
    printf("2 - Movimento Rainha\n");
    printf("3 - Movimento Torre\n");
    printf("4 - Movimento Cavalo\n");
    printf("Digite '0' para sair.\n\n");
}

// Funções separadas para os movimentos
void movimento_bispo() {
    for (int i = 1; i <= 2; i++) {
        printf("Mova Para Cima, \n");
    }
    printf("Mova Para a Direita\n");
}

void movimento_rainha() {
    for (int i = 1; i <= 8; i++) {
        printf("Mova %d Para a Esquerda\n", i);
    }
}

void movimento_torre() {
    for (int i = 1; i <= 5; i++) {
        printf("Mova %d Para Frente\n", i);
    }
}

void movimento_cavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Mova para Cima\n");
    }
    printf("Mova para direita\n");
}

int main() {
    int opcao;

    do {
        menu();
        printf("Digite a sua opção: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                movimento_bispo();
                break;
            case 2:
                movimento_rainha();
                break;
            case 3:
                movimento_torre();
                break;
            case 4:
                movimento_cavalo();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
        }

        printf("\n"); // quebra de linha após cada execução

    } while (opcao != 0);

    return 0;
}

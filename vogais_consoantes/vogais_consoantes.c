#include <stdio.h>

int main() {
    char vetor[10];
    int i;

    printf("Digite 10 caracteres:\n");
    for (i = 0; i < 10; i++) {
        scanf(" %c", &vetor[i]);
    }

    printf("Vogais: ");
    for (i = 0; i < 10; i++) {
        if (vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u') {
            printf("%c ", vetor[i]);
        }
    }
    printf("\n");

    printf("Consoantes: ");
    for (i = 0; i < 10; i++) {
        if (vetor[i] != 'a' && vetor[i] != 'e' && vetor[i] != 'i' && vetor[i] != 'o' && vetor[i] != 'u') {
            printf("%c ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
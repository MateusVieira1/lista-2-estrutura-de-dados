#include <stdio.h>

#define MAX_TEMPERATURES 7

void exibirLinha(int temperatura) {
    printf("%d°C |", temperatura);
    for (int i = 0; i < temperatura; i++) {
        printf("*");
    }
    printf("\n");
}

void histograma(int t[MAX_TEMPERATURES]) {
    printf("Histograma da Variação da Temperatura durante a Semana:\n");
    for (int i = 0; i < MAX_TEMPERATURES; i++) {
        exibirLinha(t[i]);
    }
}

int main() {
    int temperaturas[MAX_TEMPERATURES] = {19, 21, 25, 22, 20, 17, 15};

    histograma(temperaturas);

}
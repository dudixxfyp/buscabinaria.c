#include <stdio.h>
#include <stdlib.h>

void buscaMenorMaiorBin(int arr[], int tam, int el, int *menor, int *maior) {
    int esq = 0, dir = tam - 1, meio;

    while (esq <= dir) {
        meio = (esq + dir) / 2;

        if (arr[meio] == el) {
            *menor = meio;
            *maior = tam - meio - 1;
            return;
        } 
        else if (arr[meio] < el) {
            esq = meio + 1;
        } 
        else {
            dir = meio - 1;
        }
    }

    *menor = esq;
    *maior = tam - esq;
}

int main() {
    int *arr;
    int tam;
    int el = 0;
    int menor = 0;
    int maior = 0;

    puts("Digite o tamanho do vetor:");
    scanf("%d", &tam);

    arr = malloc(sizeof(int) * tam);

    printf("Tamanho do vetor: %d\n", tam);

    for (int i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("Digite o elemento que deseja buscar: ");
    scanf("%d", &el);

    buscaMenorMaiorBin(arr, tam, el, &menor, &maior);

    printf("Menor: %d | Maior: %d\n", menor, maior);

    free(arr);
    return 0;
}

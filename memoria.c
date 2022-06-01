#include <stdio.h>
#include <time.h>

#define TAMANHO 100

int main()
{
    // Inicializando as variáveis
    int v[TAMANHO]; // Vetor da memória
    int rw = 0; // Read/Write
    int p;  // Posição do vetor
    srand(time(NULL));

    // Preenchendo a memória
    for(int i = TAMANHO; i > 0; i--)
    {
        v[i] = rand();
    }

    // Acessando a memória enquanto rw for igual a 0 ou 1
    while(rw == 0 || rw == 1)
    {
        printf("[0] Ler\n[1] Escrever\n");
        scanf("%d", &rw);
        if(rw == 0) // Ler a memória
        {
            printf("Ler em qual posição do vetor? (0-%d): ", (TAMANHO-1));
            scanf("%d", &p);
            printf("%d\n", v[p]);
        }
        else if(rw == 1) // Escrever a memória
        {
            printf("Escrever em qual posição do vetor? (0-%d): ", (TAMANHO-1));
            scanf("%d", &p);
            printf("Escreva um número inteiro: ");
            scanf("%d", &v[p]);
        }
    }

    return 0;
}
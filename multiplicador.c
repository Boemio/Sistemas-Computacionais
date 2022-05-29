#include <stdio.h>

int main()
{
    int a,b, resultado = 0; // Inicializando as varíaveis

    scanf("%d", &a); // Lendo o primeiro número
    scanf("%d", &b); // Lendo o segundo número

    for(int i = b; i > 0; i--) // Somando o "a" na váriavel resultado "b" vezes
    {
        resultado += a;
    }

    printf("%d x %d = %d\n",a,b,resultado); // Imprimindo o resultado na tela

    return 0;
}
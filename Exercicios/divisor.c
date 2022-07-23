#include <stdio.h>

int main()
{
    int numerador, denominador, resultado = 0; // Inicializando as variáveis

    scanf("%d", &numerador); // Lendo o numerador
    scanf("%d", &denominador); // Lendo o denominador

    printf("%d ÷ %d = ", numerador, denominador);

    while(numerador > 0) // Subtraindo o denominador do numerador até 0 e contando cada subtração 
    {
        numerador -= denominador;
        if(numerador < 0)
        {
            break;
        }
        resultado++;
    }

    printf("%d\n", resultado); // Imprimindo o resultado

    return 0;
}

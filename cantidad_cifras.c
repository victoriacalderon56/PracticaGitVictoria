#include <stdio.h>

int main()
{
    int numero, contador = 0;

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
        contador = 1;
    }
    else
    {
        while (numero != 0)
        {
            numero = numero / 10;
            contador++;
        }
    }

    printf("La cantidad de cifras es: %d\n", contador);

    return 0;
}

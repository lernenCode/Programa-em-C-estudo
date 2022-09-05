#include <stdio.h>

//Peça ao usuario digitar três valores inteiro e imprima a soma deles
int valor1, valor2, valor3, resultado;
main()
{
    // Valor 01 
    printf("digite o primeiro valor:");
    scanf("%d", &valor1);

    // Valor 02
    printf("digite o segundo valor:");
    scanf("%d", &valor2);

    // Valor 03 
    printf("digite o terceiro valor:");
    scanf("%d", &valor3);


    printf("A soma dos valores digitados é %d", resultado = valor1 + valor2 + valor3);

    printf("\nFim ");
    system("\n pause");
    return 0;
}
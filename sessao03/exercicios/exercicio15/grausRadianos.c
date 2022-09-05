#include <stdio.h>

// leia um angulo em radianos e apresente-o convertido em graus.
float radianos, graus;
const double pi =  3.14159265358979323846;

main()
{   
    //Entrada
    printf("\nDigite o angulo em radianos: ");
    scanf("%f", &radianos);

    //Saida
    printf("\nO seu angulo em radianos convertido para graus é %f",  
    graus = (radianos * 180) / pi);
    
    printf("\nFim ");
    system("pause");
    return 0;
}
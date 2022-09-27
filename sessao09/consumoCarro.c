#include "drawing.h" // Biblioteca exercicio 016 de desenhos
#include <stdio.h>

// Exercicio 014 Consumo de carro, recebe distancia em Km e quantidade de litros
// consumidos por um carro em um percurso, calcule o km/l e escreva a mensagem

// Variaveis
float km; float l;

//prototipo de funcao
void Rendimento()
{ 
    float rendimento = km / l;
    printf("Seu Rendimento foi de %.2f \n", rendimento);

    if(rendimento < 8){printf("VENDA O CARRO! \n");}
    if(rendimento > 8){if(rendimento < 14){{printf("Economico :) \n");}}}
    if(rendimento > 14){printf("Super economico :D GoodJob! \n");}
}


int main()
{
    espaco();
    printf("Quantos litros voce colocou \n");
    scanf("%f", &l);  // %d para int
    espaco();
    printf("Quantos Km voce andou \n");
    scanf("%f", &km); // %d para int
    espaco();

    linhaTracejada();
    Rendimento();
    linhaTracejada();

    return 0;
}


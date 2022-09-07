// EXERCICIO NUMERO 10
/*
    calcula seu percentual de peso 
*/
#include <stdio.h>

float altura, peso, idade, imc;
int repetir;

main()
{
    while(repetir == 0)
    {
        // ALTURA
        printf("informe sua altura\n");
        scanf("%f", &altura);

        while(altura <= 0)
        {
            printf("Valor invalido, ");
            printf("informe sua altura\n");
            scanf("%f", &altura);
        }

        // PESO
        printf("informe seu peso\n");
        scanf("%f", &peso);

        while(peso <= 0)
        {
            printf("Valor invalido, ");
            printf("informe seu peso\n");
            scanf("%f", &peso);
        }

        // IDADE
        printf("informe sua idade\n");
        scanf("%f", &idade);

        while(idade <= 0)
        {
            printf("Valor invalido, ");
            printf("informe sua idade\n");
            scanf("%f", &idade);
        }

        //Calcular
        imc = peso / (altura * altura);

        //Resultados
        if(idade <= 19)
        {
            if(imc < 5) {printf ("\n seu porcentual do imc é %f, sendo BAIXO PESO", imc);}
            if(imc >= 5  && imc < 85) {printf ("\n seu porcentual do imc é %f, sendo ADEQUADO", imc);}
            if(imc >= 85) {printf ("\n seu porcentual do imc é %f, sendo SOBREPESO", imc);}
        }

        else
        {
            if(imc < 18.5) {printf ("\n seu porcentual do imc é %f, sendo BAIXO PESO", imc);}
            if(imc >= 18.5  && imc < 24.9) {printf ("\n seu porcentual do imc é %f, sendo PESO NORMAL", imc);}
            if(imc >= 25.0  && imc < 29.9) {printf ("\n seu porcentual do imc é %f, sendo PRÉ OBSIDADE", imc);}
            if(imc >= 30.0  && imc < 34.9) {printf ("\n seu porcentual do imc é %f, sendo OBSIDADE GRAU I", imc);}
            if(imc >= 35.0  && imc < 39.9) {printf ("\n seu porcentual do imc é %f, sendo OBSIDADE GRAU II", imc);}
            if(imc >= 40) {printf ("\n seu porcentual do imc é %f, sendo OBSIDADE GRAU III", imc);}
        }

        printf("Deseja repetir?\n");
        printf("(0) para SIM (Qualquer numero) NÃO\n");
        scanf("%d", &repetir);
    }

    printf("\nFim ");
    system("\n pause");
    return 0;
}
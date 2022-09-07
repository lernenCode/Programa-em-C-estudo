// EXERCICIO NUMERO 41
/*
faça um prgrama que calcula a aassociação em parelolo de
dois resistores, o programa fica pedindo valores até que entre com 0 
*/
#include <stdio.h>
int r1, r2;

main()
{
    do
    {
        printf("digite o valor do R1 \n");
        scanf("%d",&r1);

        printf("digite o valor do R2 \n");
        scanf("%d",&r2);

        int multiplicacao = r1 * r2;            //      R1 * R2
        int soma = r1 + r2;                     //  R= ---------
        int divisao = multiplicacao / soma;     //      R1 + R2

        printf("O valor da associação em parelo é de %d Ω (Ohm) \n", divisao);
        printf("Caso queira encerrar entre com 0, se não ");
    }  while (r1 != 0 || r2 != 0);

    printf("\nFim ");
    system("\n pause");
    return 0;
}

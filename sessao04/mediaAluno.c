/*
EXERCICIO NUMERO 14

A nota final de um estudante é calculada a partir de três 
notas atribuidas entre o intervalo de 0 até 10 de acordo 
com o resultado, mostre na tela se o aluno está:
- reprovado(media entre 0 e 2,9)
- recuperação(entre 3 e 4,9)
- ou se foi aprovado
*/

#include <stdio.h>

int avaliacoes = 3;
float nota1, nota2, nota3, total, media;

main()
{
    // Nota 01
    printf("Nota do trabalho de laboratório \n");
    scanf("%f", &nota1);

    while (nota1 < 0 || nota1 > 10) 
    {
        printf(" A nota precisa estar entre 0 e 10, digite novamente a ");
        printf("nota do trabalho de laboratório \n");
        scanf("%f", &nota1);
    } 


    // Nota 02
    printf("Nota da avaliaçao \n");
    scanf("%f", &nota2);
    
    while (nota2 < 0 || nota2 > 10) 
    {
        printf(" A nota precisa estar entre 0 e 10, digite novamente a ");
        printf("nota da avaliaçao \n");
        scanf("%f", &nota2);
    }

    // Nota 03
    printf("Nota do exame final \n");
    scanf("%f", &nota3);
    
    while (nota3 < 0 || nota3 > 10) 
    {
        printf(" A nota precisa estar entre 0 e 10, digite novamente a ");
        printf("nota do exame final \n");
        scanf("%f", &nota3);
    }

    // Relatorio
    printf("A nota do trabalho de laboratório é: %.1f \n", nota1);
    printf("A nota da avaliaçao é: %.1f \n", nota2);
    printf("A nota do exame final é: %.1f \n", nota3);
    printf ("O total do aluno é: %.1f\n", total = nota1 + nota2 + nota3);
    printf ("A media do aluno é: %.1f \n", media = total / avaliacoes);

    printf ("O aluno está:");

    if (media <= 2.9) { printf(" REPROVADO \n");}
    else if (media <= 4.9) { printf(" RECUPERACAO \n");}
    else { printf(" APROVADO \n");}
    
    printf("\nFim ");
    system("\n pause");
    return 0;
}
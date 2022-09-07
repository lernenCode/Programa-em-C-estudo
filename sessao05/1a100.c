// EXERCICIO NUMERO 02
// Escreva um programa que escreva na tela, de 1 até 100, 3x com for while e do-while

int f,w,d;

main ()
{
    // for
    for(int i = 0; i < 100; i++)
    {
        f = f + 1;
        printf("com for %d\n", f );
    }

    // while
    while(w < 100)
    {
        w = w + 1;
        printf("com while %d\n", w );
    }

    // do-while
    do { d = d + 1; printf("com do-while %d\n", d );}
    while ( d < 100);

    printf("\nFim ");
    system("\n pause");
    return 0;
}
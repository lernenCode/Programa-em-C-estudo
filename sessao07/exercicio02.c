//Exercicio numero 02
//Autor: luiz
//PROGRAMA LÊ 6 VALORES INTEIROS, E MOSTRA NA TELA OS VALORES

main()
{
    //        L  C
    int valor[5][1];
    int l, c, r;

    do 
    {
        // Entradas
        for (l = 0; l < 5; l++) /*Linhas*/
        {for (c = 0; c < 1; c++){ /*Colunas*/
            printf("Digite um valor para linha %d, e a coluna %d \n", l, c);
            scanf("%d", &valor[l][c]);
        }}

        // Saidas
        for (l = 0; l < 5; l++) /*Linhas*/
        {for (c = 0; c < 1; c++){ /*Colunas*/
            printf("O valor dado para linha %d, e a coluna %d e %d \n", l, c, valor[l][c]);
        }}

        // Repetir
        printf("Caso queira encerrar entre com 0, se nao 1 \n");
        scanf("%d", &r);
    }  while (r != 0);

    printf("\nFim ");
    system("\n pause");
    return 0;
}

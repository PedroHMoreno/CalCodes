#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu, proposicional, sair;
    char opcao;


    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%   CALCODES CALCULATOR    %%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");

    do{        // PERMANECER NO MENU


    printf("   | MENU | \n\n");

    printf("1 - SOMATORIO \n");
    printf("2 - LOGICA PROPOSICIONAL \n");
    printf("3 - MATRIZES \n");
    printf("4 - ANALISE COMBINATORIA \n");
    printf("5 - OPERACOES SIMPLES \n");
    printf("6 - SAIR \n\n");

    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &menu);
    system("cls||clear"); // Limpar


    switch(menu){

    int somatoria, menusomatoria;
    case 1:
            system("cls||clear");

            printf("1 - Somatorio de j = m ate n para a regra j\n\n");
            printf("2 - Somatorio de j = m ate n para a regra (−j)^(j + 1)\n\n");
            printf("3 - Voltar ao Menu anterior\n\n");

    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &menusomatoria);
    printf("\n");

        system("cls||clear");

        switch(menusomatoria){
        int m, n, j, soma;
        case 1:
        printf(" - DIGITE UM VALOR PARA M: ");
        scanf("%d", &m);
        printf(" - DIGITE UM VALOR PARA N: ");
        scanf("%d", &n);
        printf("\n");

        for(j=1, soma=0; j <= n; j++){  // Somatório de j = m até n para a regra
            soma = soma + j;
        }


        printf(" - RESULTADO = %d \n\n", soma);
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar

        break;

        case 2:
        printf(" - DIGITE UM VALOR PARA M: ");
        scanf("%d", &m);
        printf(" - DIGITE UM VALOR PARA N: ");
        scanf("%d", &n);

        for(j=1, soma=0; j <= n; j++){  // Somatório de j = m até n para a regra (−j)^(j + 1)
            soma = pow(-j, j+1);

        }

        printf("\n");
        printf(" - RESULTADO = %d \n\n", soma);
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar
        break;

        case 3:
        printf(" ");
        break;

        }
    break;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    case 2:
    system("cls||clear"); // Limpar
    printf("1 - ~p \n\n");                                 // LÓGICA PROPOSICIONAL
    printf("2 - ~q \n\n");
    printf("3 - p∧q \n\n");
    printf("4 - p∨q \n\n");
    printf("5 - p ⊻ q \n\n");
    printf("6 - p → q \n\n");
    printf("7 - p ↔ q \n\n");
    printf("8 - Voltar ao Menu anterior\n\n");

    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &proposicional);
    system("cls||clear"); // Limpar

    switch(proposicional){
    int p, q;
    case 1:
        printf("| p | ~p   |\n");
        printf("| V |  F   |\n");
        printf("| F |  V   |\n");
        printf("\n");
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar

    break;

    case 2:
        printf("| q | ~q   |\n");
        printf("| V |  F   |\n");
        printf("| F |  V   |\n");
        printf("\n");
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar
    break;

    case 3:
        printf("| p | q | p∧q |\n");
        printf("| V | V |  V    |\n");
        printf("| V | F |  F    |\n");
        printf("| F | V |  F    |\n");
        printf("| F | F |  F    |\n");
        printf("\n");
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar
    break;

    case 4:
        printf("| p | q | p∨q |\n");
        printf("| V | V |  V    |\n");
        printf("| V | F |  V    |\n");
        printf("| F | V |  V    |\n");
        printf("| F | F |  F    |\n");
        printf("\n");
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar
    break;

    case 5:
        printf("| p | q | p⊻q |\n");
        printf("| V | V |  F    |\n");
        printf("| V | F |  V    |\n");
        printf("| F | V |  V    |\n");
        printf("| F | F |  F    |\n");
        printf("\n");
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar
    break;

    case 6:
        printf("| p | q | p→q |\n");
        printf("| V | V |  V    |\n");
        printf("| V | F |  F    |\n");
        printf("| F | V |  V    |\n");
        printf("| F | F |  V    |\n");
        printf("\n");
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar
    break;

    case 7:
        printf("| p | q | p↔q |\n");
        printf("| V | V |  V    |\n");
        printf("| V | F |  F    |\n");
        printf("| F | V |  F    |\n");
        printf("| F | F |  V    |\n");
        printf("\n");
        printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
        scanf("%d", &sair);
        system("cls||clear"); // Limpar
    break;

    case 8:
        printf(" ");
    break;
    }
    break;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    case 3:                                                   // MATRIZES
    printf("1 - Determinante\n\n");
    printf("2 - Soma\n\n");
    printf("3 - Subtracao\n\n");
    printf("4 - Produto\n\n");
    printf("5 - Voltar ao Menu Anterior \n\n");

    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &menu);
    system("cls||clear");

    switch(menu){
    int determinate,menudeterminante,produto;
    case 1:

        system("cls||clear");

    printf("1 - Determinante da matriz A 2x2 e ((a11 * a22)-(a21*a12))\n\n");
    printf("2 - Determinante da matriz B 2x2 e ((b11 * b22)-(b21*b12))\n\n");
    printf("3 - Voltar ao Menu anterior \n\n");

    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d",&menudeterminante);
printf("\n");

    system("cls||clear");

switch(menudeterminante){

    int a11,a12,a21,a22,b11,b12,b21,b22,determinanteA,determinanteB;
    case 1:
    printf("Entre com o valor A11 da matriz A : ");
    scanf("%d",&a11);

    printf("Entre com o valor A12 da matriz A : ");
    scanf("%d",&a12);

    printf("Entre com o valor A21 da matriz A : ");
    scanf("%d",&a21);

    printf("Entre com o valor A22 da matriz A : ");
    scanf("%d",&a22);

    printf("\n");

    ///////////////////               CALCULANDO DETERMINANTE DE A            /////////////////////////////

    determinanteA = ((a11*a22)-(a21*a12));

    printf("A determinante da matriz A e: %d\n\n",determinanteA);
    printf("DIGITE PARA RETORNAR PARA O MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar

    break;

    case 2:
    printf("Entre com o valor B11 da matriz B : ");
    scanf("%d",&b11);
    printf("Entre com o valor B12 da matriz B : ");
    scanf("%d",&b12);
    printf("Entre com o valor B21 da matriz B : ");
    scanf("%d",&b21);
    printf("Entre com o valor A11 da matriz A : ");
    scanf("%d",&b22);
    printf("\n");

        ////////////////////           CALCULANDO DETERMINANTE B      //////////////

    determinanteB= ((b11*b22)-(b21*b12));

    printf("A determinante da matriz B e: %d\n\n",determinanteB);
    printf("DIGITE PARA RETORNAR PARA O MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 3:
    printf(" ");

}
}
    system("cls||clear");

    switch(menu){

    int soma1,soma2,soma3,soma4,a11,a12,a21,a22,b11,b12,b21,b22;
    int subtracao1,subtracao2,subtracao3,subtracao4;

    case 2:
    printf("A soma das matrizes A e B 2x2 e dada pela seguinte formula:\n\n ");
    printf(" a11 + b11   a12 + b12\n  a21 + b21   a22 + b22 \n\n");

    printf("ENTRE COM O VALORES A E B: \n\n");

    printf("Entre com o valor A11 da matriz A : ");
    scanf("%d",&a11);
    printf("Entre com o valor B11 da matriz B : ");
    scanf("%d",&b11);
    printf("\n");
    printf("Entre com o valor A12 da matriz A : ");
    scanf("%d",&a12);
    printf("Entre com o valor B12 da matriz B : ");
    scanf("%d",&b12);
    printf("\n");
    printf("Entre com o valor A21 da matriz A : ");
    scanf("%d",&a21);
    printf("Entre com o valor B21 da matriz B : ");
    scanf("%d",&b21);
    printf("\n");
    printf("Entre com o valor A22 da matriz A : ");
    scanf("%d",&a22);
    printf("Entre com o valor B22 da matriz A : ");
    scanf("%d",&b22);
    printf("\n");

    soma1 = a11 + b11;
    soma2 = a21 + b21;
    soma3 = a12 + b12;
    soma4 = a22 + b22;

    printf("A soma das matrizes A e B e:\n %d     %d\n %d     %d",soma1,soma2,soma3,soma4);
    printf("\n\n");

    printf("DIGITE PARA RETORNAR PARA O MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar

    break;

    case 3:
    printf("A subtracao das matrizes A e B 2x2 e dada pela seguinte formula:\n\n ");
    printf(" a11 - b11   a12 - b12\n  a21 - b21   a22 - b22 \n\n");

    printf("ENTRE COM O VALORES A E B:\n\n");


    printf("Entre com o valor A11 da matriz A : ");
    scanf("%d",&a11);
    printf("Entre com o valor B11 da matriz B : ");
    scanf("%d",&b11);

    printf("Entre com o valor A12 da matriz A : ");
    scanf("%d",&a12);
    printf("Entre com o valor B12 da matriz B : ");
    scanf("%d",&b12);

    printf("Entre com o valor A21 da matriz A : ");
    scanf("%d",&a21);
    printf("Entre com o valor B21 da matriz B : ");
    scanf("%d",&b21);

    printf("Entre com o valor A22 da matriz A : ");
    scanf("%d",&a22);
    printf("Entre com o valor A11 da matriz A : ");
    scanf("%d",&b22);
    printf("\n");

    subtracao1 = a11 - b11;
    subtracao2 = a21 - b21;
    subtracao3 = a12 - b12;
    subtracao4 = a22 - b22;

    printf("A subtracao das matrizes A e B e:\n %d     %d\n %d     %d",subtracao1,subtracao2,subtracao3,subtracao4);
    printf("\n\n");

    printf("DIGITE PARA RETORNAR PARA O MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar

    break;


    int multiplicacao1,multiplicacao2,multiplicacao3,multiplicacao4;
    case 4:

    printf("O produto de uma matriz.O numero de linhas A tem que ser igual o numero de colunas B e dada pela seguinte formula linha A * coluna B:\n\n ");
    printf("a11 * b11  a21 * b12\n a12 * b21  a22 * b22");
    printf("\n\n");
    printf("ENTRE COM O VALORES A E B: \n");

    printf("Entre com o valor A11 da matriz A : ");
    scanf("%d",&a11);
    printf("Entre com o valor B11 da matriz B : ");
    scanf("%d",&b11);

    printf("\n");

    printf("Entre com o valor A21 da matriz A : ");
    scanf("%d",&a21);
    printf("Entre com o valor B12 da matriz B : ");
    scanf("%d",&b12);

    printf("\n");

    printf("Entre com o valor A12 da matriz A : ");
    scanf("%d",&a12);
    printf("Entre com o valor B21 da matriz B : ");
    scanf("%d",&b21);

    printf("\n");

    printf("Entre com o valor A22 da matriz A : ");
    scanf("%d",&a22);
    printf("Entre com o valor B22 da matriz A : ");
    scanf("%d",&b22);

    printf("\n");

    multiplicacao1 = a11 * b11;
    multiplicacao2 = a21 * b12;
    multiplicacao3 = a12 * b21;
    multiplicacao4 = a22 * b22;

    printf("A multiplicacao das matrizes A e B e:\n\n %d     %d\n %d     %d",multiplicacao1,multiplicacao3,multiplicacao2,multiplicacao4);
    printf("\n\n");
    printf("DIGITE PARA RETORNAR PARA O MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 5:
    printf(" ");
    break;

    }
    break;



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int analise;
    case 4:                                                   // ANÁLISE COMBINATÓRIA
    printf("1 - Permutacao Simples \n\n");
    printf("2 - Arranjo Simples \n\n");
    printf("3 - Combinacao Simples \n\n");
    printf("4 - Voltar ao Menu Anterior \n\n");

    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &analise);
    system("cls||clear");

    switch(analise){

    int arranj, conj, fat1, fat2, fat3, n1, n2, p1;

    case 1:
        //PERMUTAÇÃO SIMPLES
    printf("DIGITE A QUANTIDADE DE ELEMENTOS NO CONJUNTO: ");
    scanf("%d", &n1) ;
    conj = n1;

    for(fat1 = 1; n1 > 1; n1 = n1 - 1)
    {
      fat1 = fat1 * n1;
    }
    printf("\nP = %d! \nP = %d \n\n",conj,fat1);

    printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 2:
        //ARRANJO SIMPLES
    printf("DIGITE A QUANTIDADE DE ELEMENTOS NO CONJUNTO: ");
    scanf("%d", &n1) ;
    printf("DIGITE A QUANTIDADE DE ELEMENTOS NO ARRANJO: ");
    scanf("%d", &p1) ;
    conj = n1;
    arranj = p1;

    n2=n1-p1;

    for(fat1 = 1; n1 >= 1; n1 = n1 - 1)
    {
        fat1 = fat1 * n1;
    }
    for(fat2 = 1; n2 >= 1; n2 = n2 - 1)
    {
        fat2 = fat2 * n2;
    }

    fat2 = fat1/fat2;

    printf("\nP%d,%d = %d!/(%d-%d)! \nP%d,%d = %d \n\n",conj,arranj,conj,conj,arranj,conj,arranj,fat2);

    printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 3:
    printf("DIGITE A QUANTIDADE DE ELEMENTOS NO CONJUNTO: ");
    scanf("%d", &n1) ;
    printf("DIGITE A QUANTIDADE DE ELEMENTOS NO ARRANJO: ");
    scanf("%d", &p1) ;
    conj = n1;
    arranj = p1;

    n2=n1-p1;

    for(fat1 = 1; n1 >= 1; n1 = n1 - 1)
    {
        fat1 = fat1 * n1;
    }
    for(fat2 = 1; n2 >= 1; n2 = n2 - 1)
    {
        fat2 = fat2 * n2;
    }
    for(fat3 = 1; p1 >= 1; p1 = p1 - 1)
    {
        fat3 = fat3 * p1;
    }

    fat3 = fat1/(fat3*fat2);

    printf("\nP(%d,%d) = %d!/%d!*(%d-%d)! \nP(%d,%d) = %d \n\n",conj,arranj,conj,arranj,conj,arranj,conj,arranj,fat3);


    printf("DIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 4:
    printf(" ");
    system("cls||clear");
    break;

    }
    break;

    case 5:

    printf("1 - Soma\n\n");
    printf("2 - Subtracao\n\n");
    printf("3 - Multiplicacao\n\n");
    printf("4 - Divisao\n\n");
    printf("5 - Voltar ao Menu Anterior\n\n");

    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d",&menu);
    system("cls||clear");

    int soma_1=0,sub=0,multi=1,x;
    float divi_1,x_1;

    switch(menu){

    case 1:

    do {

    printf(" - DIGITE UM NUMERO ou DIGITE 0 PRA CALCULAR: ");
    scanf("%d",&x);
    soma_1+=x;

    }while(x!=0);
    printf("\n");
    printf(" - RESULTADO = %d",soma_1);
    printf("\n");


    printf("\nDIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 2:

    printf(" - DIGITE UM NUMERO ou DIGITE 0 PRA CALCULAR: ");
    scanf("%d",&x);
    sub=x;

    do {

    printf(" - DIGITE UM NUMERO ou DIGITE 0 PRA CALCULAR: ");
    scanf("%d",&x);
    sub-=x;

    }while(x!=0);
    printf("\n");
    printf(" - RESULTADO = %d",sub);
    printf("\n");

    printf("\nDIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 3:

    do{

    printf(" - DIGITE UM NUMERO ou DIGITE 0 PRA CALCULAR: ");
    scanf("%d",&x);

    if(x==0) break;
    multi*=x;

    }while(x!=0);
    printf("\n");
    printf(" - RESULTADO = %d",multi);
    printf("\n");

    printf("\nDIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 4:

    printf(" - DIGITE UM NUMERO ou DIGITE 0 PRA CALCULAR: ");
    scanf("%f",&x_1);
    divi_1=x_1;

    do{
    printf(" - DIGITE UM NUMERO ou DIGITE 0 PRA CALCULAR: ");
    scanf("%f",&x_1);

    if(x_1==0)break;
    divi_1/=x_1;

    }while(x_1!=0);
    printf("\n");
    printf(" - RESULTADO = %f",divi_1);
    printf("\n");

    printf("\nDIGITE PARA RETORNAR AO MENU PRINCIPAL: ");
    scanf("%d", &sair);
    system("cls||clear"); // Limpar
    break;

    case 5:
    printf(" ");
    break;

    }
    break;

    case 6:
    system("cls||clear"); // Limpar
    exit(1); // SAINDO SOMENTE NA OPÇÃO 5


    default:
    printf("** DIGITE UMA OPCAO VALIDA **\n");                  // OPÇÃO INVALIDA
    system("cls||clear"); // Limpar

    }
    }while(1);  // PERMANECER NO MENU


    printf("\n\n\n\n\n\n\n\n\n\n");
    return 0;

}

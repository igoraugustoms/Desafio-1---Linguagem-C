#define ex2

#include <stdio.h>
#include <stdlib.h>

#ifdef ex1
// Igor Augusto Monteiro Silva
/*


1 - Um número inteiro é dito perfeito se o dobro dele é igual à soma de todos os seus divisores. Escreva um programa que liste todos os números perfeitos menores que um inteiro n recebido via teclado.
      Por exemplo, como os divisores de 6 são 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12, 6 é perfeito.

      */

main () {
    int k, i = 1, cont = 1, soma = 0;
    char escolha = ' ';
    for ( ; ; ) {
        do {
            printf("Vamos descobrir todos os numeros perfeitos ate um numero 'n' que voce vai escolher\n");
            printf("Digite agora o numero limite 'n'\n");
            scanf("%d", &k);
            if (k <= 0){
                printf("Numero invalido. Tente de novo\n");
                system("pause");
                system("cls");
            }
        } while(k <= 0);
        for(i = 1; i < k; i++){
            for(cont = 1; cont <= i; cont++){
                if (i % cont == 0){
                    soma += cont;
                }
            }
            cont = 1;
            if (soma == 2 * i){
                printf("O numero %d e considerado perfeito\n", i);
            }
            soma = 0;
        }
        getchar();
        printf("Deseja sair? [S/N]\n");
        escolha = getchar();
        if ((escolha == 'S') || (escolha == 's')){
            printf("Voce escolheu sair. Obrigado\n");

            break;
        }
        system("pause");
        system("cls");
    }
}

#endif // ex1

#ifdef ex2
/*
2 - A sequência de Fibbonaci é a sequência (1, 1, 2, 3, 5, 8, 13, ...).
Escreva um programa que determine o n-ésimo termo desta sequência, n dado.
*/

main (){
int k, F1 = 1, F2 = 1, F3 = 0, cont = 1;
char escolha = ' ';
for ( ; ; ){
    do {
        printf ("Qual n-esimo termo da sequencia de fibbonaci voce quer saber?\n");
        scanf ("%d", &k);
        if (k < 1) {
            printf ("Voce digitou uma sequencia menor que um. Tente de novo\n");
            system("pause");
            system("cls");
        }
    } while (k < 1);
    if ((k == 1) || (k == 2)){
        printf("O termo %d da sequencia de Fibbonaci e 1\n", k);
    } else {
        for ( ; cont < k; cont++) {
            if (cont == k - 1) {
                printf("O termo %d da sequencia de Fibbonaci e %d\n", k, F3);
            }
            F3 = F1 + F2;
            F1 = F2;
            F2 = F3;
        }
    }
getchar();
printf("Voce deseja sair? [S/N]\n");
escolha = getchar();
if ((escolha == 'S') || (escolha == 's')){
    printf("Voce escolheu sair. Obrigado\n");

    break;
}
system("pause");
system("cls");

}

}
#endif

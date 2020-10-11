#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

// Declaração das funções
void escrever(string texto);

int main() {
    // Declaração de variáveis
    int a, b, x;
    float res, exp, i;



    escrever("Log b = x");
    escrever("    a");
    escrever("Quais elementos você deseja atribuir um valor?");

    // Listar opções para o usuário escolher
    printf ("=======================================\n");
    escrever("1) a - Base e b - Logaritmando");
    escrever("2) a - Base e x - Logaritmo");
    escrever("3) b - Logaritmando e x - logaritmo");
    printf ("=======================================\n");


    scanf("%d", &x);
/*
/*
    regras:
só existira log de b quando:
b>0, a>0, a!=1
todo logaritmando =1 o log sempre será 0, e toda base elevada a 0 o log também será 1.

if (b==1)
    {
        printf ("log de 1 é= a: 0");
        printf (" é: 1.");
    }
    else{
        if (a^0)
        {
            printf (" O logaritmando é: 1.\n");
        }
    }
*/
    switch(x) {
        case 1:
//logaritmo
            printf("Digite o valor da base: ");
            scanf("%d", &a);
            printf("Digite o valor do logaritmando: ");
            scanf("%d", &b);
            if (b==1)
            {
            printf ("Quando o logaritmando for = 1, o log será 0.\n");
            }
            else {
                if (a==b)
                {
                    printf ("Quando a base e logaritmando forem iguais o log será: 1.\n");
                }
                else {
                    x= log (b)/ log (a);
                    printf ("\nO log é = %i", x);
            break;
                }
            }
        case 2:
//logaritmando
            printf("Digite o valor da base: ");
            scanf("%d", &a);
            printf("Digite o valor do Logaritmo: ");
            scanf("%f", &exp);

            res = a;
            for(i=0; i<(exp-1); i++) {
            res *= a;
            }
            if (x==0)
            {
            printf ("Todo logaritmo = 0 o logaritmando será 1.\n");
            }
            else {
            printf ("O logaritmando de base %i", a);
            printf (" é %0.f", res);
            break;
            }
        case 3:
// base
            printf("Digite o valor do logaritmando: ");
            scanf("%d", &b);
            printf("Digite o valor do logaritmo: ");
            scanf("%d", &x);
            if (b==1 && x==0)
            {
            printf ("Todo logaritmando = 1 o logaritmo será 0.\n");
            }
            else {
            printf("Log %d = %d \n", a, b);
            printf("    a \n\n");
            break;
            }
        default:
            // Deve haver um tratamento de erros caso o usuário digite um valor inválido
            printf("Valor inválido.");
    }

    return 0;
}

// Escreve um texto passado como parâmetro quebrando linha no final
void escrever(string texto) {
    cout << texto << "\n";
}

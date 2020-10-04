#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// Declara��o das fun��es
void imprimir(string texto);
void pula_linha();
void mensagem();

int main()
{
    // Declara��o de vari�veis
    int num1, num2, opcao1, opcao2;
    char elemento1, elemento2;

    imprimir("log a = x");
    imprimir("    b");
    pula_linha();

    imprimir("Qual elemento voc� deseja atribuir um valor?");
    // Lista os tr�s elementos do logaritmo: Logaritmando, Base e logaritmo
    imprimir("1) a - Logaritmando");
    imprimir("2) b - Base");
    imprimir("3) x - Logaritmo");

    // O usu�rio escolhe apenas uma das tr�s op��es
    scanf("%d", &opcao1);

    // O switch identifica o elemento escolhido com base no que o usu�rio digitou
    switch(opcao1) {
        case 1:
            elemento1 = 'a';
            imprimir("Digite o valor do logaritmando:");
            break;

        case 2:
            elemento1 = 'b';
            imprimir("Digite o valor da base:");
            break;

        case 3:
            elemento1 = 'x';
            imprimir("Digite o valor do logaritmo:");
            break;

        default:
            imprimir("Usu�rio digita um valor inv�lido");
    }

    // Atribui a vari�vel num1 o n�mero que o usu�rio digitou
    scanf("%d", &num1);
    pula_linha();
    // O usu�rio escolhe outro elemento para atribuir um valor, n�o podendo escolher o mesmo elemento
    switch (elemento1) {
        case 'a':
            printf("log %d = x \n", num1);
            imprimir("    b");
            pula_linha();

            mensagem();
            imprimir("1) b - Base");
            imprimir("2) x - Logaritmo");
            break;

        case 'b':
            imprimir("log a = x");
            printf("    %d \n", num1);
            pula_linha();

            mensagem();
            imprimir("1) a - Logaritmando");
            imprimir("2) x - Logaritmo");
            break;

        case 'x':
            printf("log a = %d \n", num1);
            imprimir("    b");
            pula_linha();

            mensagem();
            imprimir("1) a - Logaritmando");
            imprimir("2) b - Base");
            break;

        default:
            imprimir("Usu�rio digita um valor inv�lido");
    }

    scanf("%d", &opcao2);

    switch(elemento1) {
        case 'a':
            switch(opcao2) {
                case 1:
                    elemento2 = 'b';
                    break;
                case 2:
                    elemento2 = 'x';
                    break;
                default:
                    printf("Usu�rio seleciona op��o que n�o existe");
            }

        case 'b':
            switch(opcao2) {
                case 1:
                    elemento2 = 'a';
                    break;
                case 2:
                    elemento2 = 'x';
                    break;
                default:
                    printf("Usu�rio seleciona op��o que n�o existe");
            }

        case 'x':
            switch(opcao2) {
                case 1:
                    elemento2 = 'a';
                    break;
                case 2:
                    elemento2 = 'b';
                    break;
                default:
                    printf("Usu�rio seleciona op��o que n�o existe");
            }

    }
    printf("Elementos escolhidos: %c e %c", elemento1, elemento2);
    return 0;
}

// Exibe uma mensagem qualquer dando quebra de linha na final dela
void imprimir(string texto) {
    cout << texto << "\n";
}

// Faz quebra de linha
void pula_linha() {
    printf("\n");
}

// Exibe mensagem para escolher elemento
void mensagem() {
    printf("Qual outro elemento voc� deseja atribuir um valor? \n");
}

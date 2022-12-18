#include<stdio.h>

#include<stdlib.h>

#include<math.h>

#include<conio.h>

#include<locale.h>


int main () {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    int soma, subtracao, multiplicacao;
    int r1, r2;
    float divisao, d1, d2;
    float resto;
    printf("Calculadora é um dispositivo para a realização de cálculos numéricos.\n");
    printf("O ábaco foi a primeira calculadora da história. Criado pelos chineses no século 6 a.C\n");
    printf("Em 1642 o matemático francês Blaise Pascal, inventou uma máquina automática de cálculos para agilizar o trabalho do seu pai\n");
    printf("Porém sua funcionalidade limitava-se às operações de adição e subtração.\n");
    printf("Em 1671, o filósofo e matemático alemão Gottfried Wilhelm Von Leibniz desenvolveu um mecanismo capaz de realizar as quatro operações:\n");
    printf("\tadição, subtração, multiplicação e divisão: a chamada “roda graduada”.\n");
    printf("Somente no Século XX, em 1947, o austríaco Curt Herzstark desenvolveu o projeto da primeira calculadora mecânica.\n");
    printf("    ---->>CALCULADORA DO ROLUDO!!<<----\n");
    printf("Esta será uma calculadora que realizará somente operações simples!\n");
    printf("Visto que outras calculadoras serão criadas futuramente com uma complexibilidade maior.\n");
    printf("Iremos utilizar 4 tipos de calculos, sendo eles:\n");
    printf("\t\t-->ADIÇÃO<--\n");
    printf("A adição é o ato de juntar elementos, uma das quatro operações básicas da aritmética.\n");
    printf("Sendo ligada a ideia de acrescentar. Toda vez que unimos novos elementos ou valores, estamos adicionando.\n");
    printf("Em matemática utiliza-se o símbolo (+), sendo o mesmo utilizado para a linguagem C.\n");
    printf("\t\t-->SUBTRAÇÃO<--\n");
    printf("Subtração é uma operação básica da Matemática. Sendo a operação inversa da adição.\n");
    printf("Subtrair é retirar uma quantidade ou porção, de algo, ou coleção. Ao separar uma parte de um todo, estamos subtraindo.\n");
    printf("Na linguagem matemática, o símbolo para subtração é um traço (-) e lemos como: menos, sendo o mesmo utilizado para a linguagem C.\n");
    printf("\t\t-->MULTIPLICAÇÃO<--\n");
    printf("A multiplicação é uma dentre as quatro operações básicas da Matemática.\n");
    printf("Conhecemos como multiplicação a soma sucessiva de um número por ele mesmo.\n");
    printf("Para fazer a representação da multiplicação entre dois números, utilizamos o símbolo (x), porém para a linguagem C, é usado (*).\n");
    printf("\t\t-->DIVISÃO<--\n");
    printf("A divisão é operação matemática utilizada para descobrir como separar uma quantidade em partes, ou seja, “fracionar” algo.\n");
    printf("Geralmente, o símbolo utilizado para a operação é (÷) como também (:).\n");
    printf("Porém para a linguagem C, usamos (/).\n");
    printf("\t\t-->RESTO<--\n");
    printf("Ele é o que sobra na aplicação do algoritmo em uma divisão de números inteiros.\n");
    printf("O resto da divisão é um número maior ou igual a zero e menor que o divisor.\n");
    printf("Após a explicação de todos os tipos de calculos que teremos, vamos começar com a adição.\n");
    printf("Insira dois numeros.\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("O resultado da adição é, = %d\n", soma);
    printf("Partindo para a subtração.\n");
    printf("Insira dois numeros.\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    subtracao = n1 - n2;
    printf("O resultado da subtração é, = %d\n", subtracao);
    printf("Agora para a multiplicação.\n");
    printf("Insira dois numeros.\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    multiplicacao = n1 * n2;
    printf("O resultado da multiplicação é, = %d\n", multiplicacao);
    printf("Indo para a divisão.\n");
    printf("Insira dois numeros.\n");
    scanf("%f", &d1);
    scanf("%f", &d2);
    divisao = d1 / d2;
    printf("O resultado da divisão é, = %f\n", divisao);
    printf("E por ultimo o resto.\n");
    printf("Insira dois numeros.\n");
    scanf("%d", &r1);
    scanf("%d", &r2);
    resto = r1 % r2;
    printf("O resultado do resto é, = %f\n", resto);


    return 0;
}

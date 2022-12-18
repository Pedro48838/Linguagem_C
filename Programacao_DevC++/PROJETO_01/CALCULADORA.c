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
    printf("Calculadora � um dispositivo para a realiza��o de c�lculos num�ricos.\n");
    printf("O �baco foi a primeira calculadora da hist�ria. Criado pelos chineses no s�culo 6 a.C\n");
    printf("Em 1642 o matem�tico franc�s Blaise Pascal, inventou uma m�quina autom�tica de c�lculos para agilizar o trabalho do seu pai\n");
    printf("Por�m sua funcionalidade limitava-se �s opera��es de adi��o e subtra��o.\n");
    printf("Em 1671, o fil�sofo e matem�tico alem�o Gottfried Wilhelm Von Leibniz desenvolveu um mecanismo capaz de realizar as quatro opera��es:\n");
    printf("\tadi��o, subtra��o, multiplica��o e divis�o: a chamada �roda graduada�.\n");
    printf("Somente no S�culo XX, em 1947, o austr�aco Curt Herzstark desenvolveu o projeto da primeira calculadora mec�nica.\n");
    printf("    ---->>CALCULADORA DO ROLUDO!!<<----\n");
    printf("Esta ser� uma calculadora que realizar� somente opera��es simples!\n");
    printf("Visto que outras calculadoras ser�o criadas futuramente com uma complexibilidade maior.\n");
    printf("Iremos utilizar 4 tipos de calculos, sendo eles:\n");
    printf("\t\t-->ADI��O<--\n");
    printf("A adi��o � o ato de juntar elementos, uma das quatro opera��es b�sicas da aritm�tica.\n");
    printf("Sendo ligada a ideia de acrescentar. Toda vez que unimos novos elementos ou valores, estamos adicionando.\n");
    printf("Em matem�tica utiliza-se o s�mbolo (+), sendo o mesmo utilizado para a linguagem C.\n");
    printf("\t\t-->SUBTRA��O<--\n");
    printf("Subtra��o � uma opera��o b�sica da Matem�tica. Sendo a opera��o inversa da adi��o.\n");
    printf("Subtrair � retirar uma quantidade ou por��o, de algo, ou cole��o. Ao separar uma parte de um todo, estamos subtraindo.\n");
    printf("Na linguagem matem�tica, o s�mbolo para subtra��o � um tra�o (-) e lemos como: menos, sendo o mesmo utilizado para a linguagem C.\n");
    printf("\t\t-->MULTIPLICA��O<--\n");
    printf("A multiplica��o � uma dentre as quatro opera��es b�sicas da Matem�tica.\n");
    printf("Conhecemos como multiplica��o a soma sucessiva de um n�mero por ele mesmo.\n");
    printf("Para fazer a representa��o da multiplica��o entre dois n�meros, utilizamos o s�mbolo (x), por�m para a linguagem C, � usado (*).\n");
    printf("\t\t-->DIVIS�O<--\n");
    printf("A divis�o � opera��o matem�tica utilizada para descobrir como separar uma quantidade em partes, ou seja, �fracionar� algo.\n");
    printf("Geralmente, o s�mbolo utilizado para a opera��o � (�) como tamb�m (:).\n");
    printf("Por�m para a linguagem C, usamos (/).\n");
    printf("\t\t-->RESTO<--\n");
    printf("Ele � o que sobra na aplica��o do algoritmo em uma divis�o de n�meros inteiros.\n");
    printf("O resto da divis�o � um n�mero maior ou igual a zero e menor que o divisor.\n");
    printf("Ap�s a explica��o de todos os tipos de calculos que teremos, vamos come�ar com a adi��o.\n");
    printf("Insira dois numeros.\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("O resultado da adi��o �, = %d\n", soma);
    printf("Partindo para a subtra��o.\n");
    printf("Insira dois numeros.\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    subtracao = n1 - n2;
    printf("O resultado da subtra��o �, = %d\n", subtracao);
    printf("Agora para a multiplica��o.\n");
    printf("Insira dois numeros.\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    multiplicacao = n1 * n2;
    printf("O resultado da multiplica��o �, = %d\n", multiplicacao);
    printf("Indo para a divis�o.\n");
    printf("Insira dois numeros.\n");
    scanf("%f", &d1);
    scanf("%f", &d2);
    divisao = d1 / d2;
    printf("O resultado da divis�o �, = %f\n", divisao);
    printf("E por ultimo o resto.\n");
    printf("Insira dois numeros.\n");
    scanf("%d", &r1);
    scanf("%d", &r2);
    resto = r1 % r2;
    printf("O resultado do resto �, = %f\n", resto);


    return 0;
}

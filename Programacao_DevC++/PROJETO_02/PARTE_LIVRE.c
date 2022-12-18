#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

int main () {
	
	char c;
	
	printf("Digite um caractere em letra minuscula: ");
	scanf("%c" , &c);	
	if (c >= 'a'){
		printf("\nSegue a letra que voce digitou em maiscula: > %c <\n" , toupper (c));
	    }
	
	return 0;
}


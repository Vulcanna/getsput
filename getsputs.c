 #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char palavras[5][30];
	
	printf("Digite: ");
	gets(palavras[0]);
	
	printf("Digite: ");
	gets(palavras[1]);
	
	printf("Digite: ");
	gets(palavras[2]);
	
	printf("Digite: ");
	gets(palavras[3]);
	
	printf("Digite: ");
	gets(palavras[4]);
		
	printf("\n*** Nomes ***\n");
	puts(palavras[0]);
	puts(palavras[1]);
	puts(palavras[2]);
	puts(palavras[3]);
	puts(palavras[4]);
	
	printf("\n\n");
	system("pause");
	return 0;
}


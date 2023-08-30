#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	char nome[50];
	int ano_atual, ano_nascimento, idade;
	
	
	printf("Entre com seu nome\n\n");
	// Recebe o nome do usuário
	scanf("%s", &nome);
	printf("Digite o ano de nascimento:\n\n");
   //Recebe o ano de nascimento
   scanf("%d" ,&ano_nascimento);
   printf("Digite o ano atual:\n\n");
   //Recebe o ano atual
   scanf("%d" ,&ano_atual);
   idade=(ano_atual - ano_nascimento);
   //Imprimi a idade na tela do usuário
   printf("Sua idade e: %d\n", idade);
	system("pause");
	return 0;
	
}

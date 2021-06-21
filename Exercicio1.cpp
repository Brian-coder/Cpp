#include<bits/stdc++.h>

using namespace std;

int main () {
	
	float peso, altura, imc;
	int idade;
	char letra;
	
	printf("\nDigite o seu peso: ");
	scanf("%f", &peso);
	printf("\nDigite a sua altura: ");
	scanf("%f", &altura);
	printf("\nDigite a sua idade: ");
	scanf("%d", &idade);
	printf("\nDigite o seu sexo <M/F>: ");
	scanf(" %c", &letra);
	
	imc = peso / (altura * altura);
	
	printf("\nPeso: %.2f", peso);
	printf("\nAltura: %.2f", altura);
	printf("\nIdade: %.2d", idade);
	printf("\nSexo: %c", letra);
	
	printf("\nIMC: %.2f", imc);
	
	return(0);
	
}
	

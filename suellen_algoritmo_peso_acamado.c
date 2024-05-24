#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char sexo[50], cor[50], cont = 'S';
int aj, cb, idade;
float peso;
void Introducao();

int main (){
	setlocale(LC_ALL, "portuguese");
	while (cont == 'S' || cont == 's'){
	Introducao ();
		if (strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "MASCUlINO") == 0 || strcmp(sexo, "masculino") == 0){
			if (strcmp(cor, "Negro") == 0 || strcmp(cor, "NEGRO") == 0 || strcmp(cor, "negro") == 0) {
				if (idade <= 19 && idade >= 59){
					peso = (aj * 1.09) + (cb * 3.14) - 83.72;
				} else {
					peso = (aj * 0.44) + (cb * 2.86) - 39.21;
				} 
			} else if (strcmp(cor, "Branca") == 0 || strcmp(cor, "BRANCA") == 0 || strcmp(cor, "branca") == 0) {
				if (idade <= 19 && idade >= 59){
					peso = (aj * 1.19) + (cb * 3.14) - 86.72;
				} else {
					peso = (aj * 1.10) + (cb * 3.07) - 75.81;
				}
			}
				
		} else if (strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "FEMININO") == 0 || strcmp(sexo, "feminino") == 0){
			if (strcmp(cor, "Negro") == 0 || strcmp(cor, "NEGRO") == 0 || strcmp(cor, "negro") == 0){
				if (idade <= 19 && idade >= 59){
					peso = (aj * 1.24) + (cb * 2.97) - 82.48;
				} else {
					peso = (aj * 1.50) + (cb * 2.58) - 84.22;
				}
			} else if (strcmp(cor, "Branca") == 0 || strcmp(cor, "BRANCA") == 0 || strcmp(cor, "branca") == 0){
				if (idade <= 19 && idade >= 59){
					peso = (aj * 1.01) + (cb * 2.81) - 66.04;
				} else {
					peso = (aj * 1.09) + (cb * 2.68) - 65.51;
				}
			}
			
		} else {
			printf("Os sexos são invalidos");
		}
	
		printf("\nO peso estimado é %.2f", peso);
		printf("\nPara continuar digite 'S', se não, presione qualquer letra: ");
		scanf(" %c", &cont);
		system("cls");
	} 
	return 0;
	printf("\nPrograma encerrado, obrigador por utilizar!!!");
}
	
void Introducao (){
	printf("+----------------------------------+\n");
    printf("|CALCULADORA DE PESO PARA ACAMADOS |\n");
    printf("+----------------------------------+\n");
    printf("\nDigite a altura do joelho em cm: ");
    scanf("%d", &aj);
    printf("\nDigite a circunferência do braço em cm: ");
    scanf("%d", &cb);
    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    printf("\nDigite o sexo (Masculino ou Feminino): ");
    scanf("%s", sexo);
    printf("\nDigite o ton de pele (Negro ou Branco): ");
    scanf("%s", cor);
}

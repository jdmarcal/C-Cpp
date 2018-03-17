#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>


//Autor: Jean Dálbert
//e-mail: dalbertmarcal@gmail.com

// 1.2 Ler a idade de uma pessoa e informar a sua classe eleitoral.
// a. Não-eleitor (abaixo de 16 anos)
// b. Eleitor obrigatório (entre 18 e 65 anos)
// c. Eleitor facultativo (entre 16 e 18 e maior de 65 anos)


int main(){
	
	int iIdade;
	
	printf("Informe 0 para sair...\n");
	printf("Informe a idade:");
	scanf("%d",&iIdade);
	while(iIdade !=0){
		if(iIdade < 16){
		printf("Nao eleitor\n");
	}
	else{
		if(iIdade >= 18 && iIdade <= 65){
			printf("Eleitor obrigatorio\n");
		}
		else{
			if(iIdade >=16 && iIdade < 18 || iIdade > 65){
				printf("Eleitor facultativo\n");
			}			
		}
	}
	printf("Informe a idade:");
	scanf("%d",&iIdade);
    }	
  
  system("pause");
  }  
 

//SALVAR ANTES DE COMPILAR!!!!!

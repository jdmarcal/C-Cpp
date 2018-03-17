#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Autor: Jean Dálbert
//e-mail: dalbertmarcal@gmail.com

int main(){
	
	int iCod1,iCod2;
	float fValor = 0, fPrecoSand = 0, fPrecoBebida = 0;
	
	printf("========================================================================\n");
	printf("=                          TABELA DE PRECOS                            =\n");		
	printf("========================================================================\n");
	printf("= Cod |   Lanche       |Preco R$  || Cod |       Bebida     |Preco R$  =\n");
	printf("========================================================================\n");
	printf("= 100 |Cachorro Quente | R$: 1,20 || 201 | Refrigerante     | R$ 1.00  =\n");
	printf("= 101 |Bauru Simples   | R$: 1,30 || 202 | Suco             | R$ 1.50  =\n");
	printf("= 102 |Bauru com ovo   | R$: 1,50 || 203 | Agua Mineral     | R$ 0.70  =\n");
	printf("= 103 |Hambúrguer      | R$: 1,70 ||     |                  |          =\n");
	printf("========================================================================\n");
	
	
	printf("Informe Cod1: ");
	scanf("%i", &iCod1);
	
	printf("Informe Cod2: ");
	scanf("%i", &iCod2);
	
	switch (iCod1){
		case 100:
			printf("Cachorro Quente R$ 1,20\n");
			fPrecoSand = 1.20;
			break;
		case 101:
			printf("Bauru Simples R$ 1,30\n");
			fPrecoSand = 1.30;
			break;
		case 102:
			printf("Bauru com ovo  R$ 1,50\n");
			fPrecoSand = 1.50;
			break;	
		case 103:
			printf("Hambúrguer R$ 1,70\n");
			fPrecoSand = 1.70;
			break;
		default:
		    printf("Cod Invalido \n");	
	}
	switch(iCod2){
		case 201:
		    printf("Refrigerante R$ 1.00 \n");
		    fPrecoBebida = 1.00;
		    break;
		case 202:
		    printf("Suco R$ 1.50 \n");
		    fPrecoBebida = 1.50;
		    break;
	    case 203:
		    printf("Água Mineral  R$ 0.70 \n");
		    fPrecoBebida = 0.70;
		    break;
		default:
		    printf("Cod Invalido \n");  	    	
	}
	 
	 fValor = fPrecoSand + fPrecoBebida;
	 printf("Total: %3.2f \n", fValor);   

system("pause");
}

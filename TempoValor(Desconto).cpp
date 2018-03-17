#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Autor: Jean Dálbert
//e-mail: dalbertmarcal@gmail.com

int main(){
  
 int iTempo;
 float fValor;
 
 printf("Informe Tempo: ");
 scanf("%i", &iTempo);     
 
 if(iTempo > 5){
 	
 	 printf("Informe Valor: ");
     scanf("%f", &fValor);
     
 	if(fValor > 5000){
 		printf("desconto de 20%% \n");
  	 }
  	else{
  		if(fValor > 1000){
  	  	printf("desconto de 10%% \n");
  	  }
	  else{
	  	printf("Sem Desconto\n");
	  }	 
  	}	  
 }
 else{
 	printf("Sem Desconto\n");
 }   
system("pause");
}

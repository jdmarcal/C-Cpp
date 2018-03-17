#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Autor: Jean Dálbert
//e-mail: dalbertmarcal@gmail.com

//O programa abaixo é composto por dois módulos: o principal e a função soma(), que retorna a
//soma de dois valores inteiros. 

int soma(int p_n1, int p_n2);

int main(){
  
 int num1, num2, res;
 
 printf("----------SOMA-----------\n");
 
 printf("Informe o primeiro numero: ");
 scanf("%d",& num1);
 
 printf("Informe o segundo numero: ");
 scanf("%d",& num2); 
 
 res = soma(num1, num2);
 printf("O valor da soma e': %d",res);
   
  return 0;
}
int soma(int p_n1, int p_n2){
	int valor;
	
	valor = p_n1 + p_n2;
	return valor;
}

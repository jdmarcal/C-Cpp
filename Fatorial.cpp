#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Autor: Jean D�lbert
//e-mail: dalbertmarcal@gmail.com

//9) O programa abaixo implementa o c�lculo do fatorial de um n�mero informado pelo cliente
//utilizando recursividade.

int FAT (int x);

int main(){
  
 int num, fatorial;
  
  printf("Digite um numero:");
  scanf("%d",&num);
  fatorial = FAT(num);
 
  printf("\n O fatorial de %d e: %d \n",num,fatorial);
    
  system("pause");
  return 0;
}
int FAT (int p_num){
	
	if(p_num == 0){
		return 1;
	}	
	else{
	    return p_num * FAT(p_num - 1);	
	}
}

//SALVAR ANTES DE COMPILAR!!!!!

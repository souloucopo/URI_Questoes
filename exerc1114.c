#include <stdio.h>
#include <stdlib.h>

int main (){
 
    int senha;
    
    while (senha != 2002){
		scanf("%d", &senha);
		if (senha == 2002){
			printf("Acesso Permitido\n");
			break;
		}else {
			printf("Senha Invalida\n");
		}
	}
    
	
	return 0;
}
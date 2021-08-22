#include <stdio.h>
 
int main() {
 
    int dia, hora, minuto, segundo, diaf, horaf, minutof, segundof;
    
    scanf("Dia %d", &dia);
    scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
    scanf("Dia %d", &diaf);
    scanf("%d : %d : %d", &horaf, &minutof, &segundof);
    
    segundo = segundof - segundo;
    minuto = minutof - minuto;
    hora = horaf - hora;
    dia = diaf - dia;
    
    if(segundo < 0){
		segundo += 60;
		minuto--;
		
	}
	if(minuto < 0){
		minuto += 60;
		hora--;
		
	}
    if(hora < 0){
		hora += 24;
		dia--;
	}
	
	printf("%d dia(s)\n", dia);
	printf("%d hora(s)\n", hora);
	printf("%d minuto(s)\n", minuto);
	printf("%d segundo(s)\n", segundo);
    return 0;
}
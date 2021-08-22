#include <stdio.h>
#include <stdlib.h>

int main () {
	
int num, in, par = 0, impar = 0, positivo = 0, negativo = 0;

for(in = 0;in < 5;in = in + 1){
	scanf("%d", &num);
	if((num % 2 == 0))
		par = par + 1;
	else if ((num % 2 != 0))
		impar = impar + 1;
	if((num > 0))
		positivo = positivo + 1;
	else if ((num < 0))
		negativo = negativo + 1;
}
printf("%d valor(es) par(es)\n", par);
printf("%d valor(es) impar(es)\n", impar);
printf("%d valor(es) positivo(s)\n", positivo);
printf("%d valor(es) negativo(s)\n", negativo);

	
	return 0;
}
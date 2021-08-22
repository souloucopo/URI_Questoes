#include <stdio.h>
#include <stdlib.h>

int main () {
	
float num, soma = 0, media;
int y = 0, n = 0;
for(y = 0;y < 6;y = y + 1){
	scanf("%f", &num);
	if(num > 0){
		n = n + 1;
		soma = soma + num;
	}
}
media = soma / n;
printf("%d valores positivos\n", n);
printf("%.1f\n", media);

	
	return 0;
}
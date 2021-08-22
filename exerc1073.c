#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int N, I, C;
	scanf("%d", &N);
	
	for(I = 1; I <= N ; I++){
		if(I % 2 == 0){
			C = I * I;
			printf("%d^2 = %d\n", I, C);
		}
	}
	
	
	
	return 0;
}
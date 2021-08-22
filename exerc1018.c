#include <stdio.h>
 
int main() {
 
int N, C_100, A, C_50, B, C_20, C, C_10, D, C_5, E, C_2, C_1; 
	scanf("%d", &N); 
	C_100 = N / 100; 
	A = N % 100;
	
	C_50 = A / 50;
	B = A % 50;
	
	C_20 = B / 20;
	C = B % 20;
	
	C_10 = C / 10;
	D = C % 10;
	
	C_5 = D / 5;
	E = D % 5;
	
	C_2 = E / 2;
	C_1 = E % 2;
	 
	printf("%d\n", N); //impressão de todos os resultados
	printf("%d nota(s) de R$ 100,00\n", C_100);
	printf("%d nota(s) de R$ 50,00\n", C_50);
	printf("%d nota(s) de R$ 20,00\n", C_20);
	printf("%d nota(s) de R$ 10,00\n", C_10);
	printf("%d nota(s) de R$ 5,00\n", C_5);
	printf("%d nota(s) de R$ 2,00\n", C_2);
	printf("%d nota(s) de R$ 1,00\n", C_1);
 
    return 0;
}
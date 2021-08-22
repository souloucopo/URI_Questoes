#include <stdio.h>

int main () {
	
	double SF, NS;
	scanf("%lf", &SF);
	scanf("%lf", &NS);
	
	
	if (SF >= 0 && SF <= 400.00) {
		NS = (SF * 0.15) + SF;
		printf("Novo salario: %.2lf\n", NS);
		printf("Reajuste ganho: %.2lf\n", (SF * 0.15));
		printf("Em percentual: 15 %%\n");
}

if (SF >= 400.01 && SF <= 800.00) {
	NS = (SF * 0.12) +SF;
	printf("Novo salario: %.2lf\n", NS);
	printf("Reajuste ganho: %.2lf\n", (SF * 0.12));
	printf("Em percentual: 12 %%\n");
}
 if (SF >= 800.01 && SF <= 1200.00){
 	NS = (SF * 0.10) + SF;
	 printf("Novo salario: %.2lf\n", NS);
	 printf("Reajuste ganho: %.2lf\n", (SF * 0.10));
	 printf("Em percentual: 10 %%\n");
 }
 
 if (SF >= 1200.01 && SF <= 2000.00){
	 NS = (SF * 0.07) + SF;
	 printf("Novo salario: %.2lf\n", NS);
	 printf("Reajuste ganho: %.2lf\n", (SF * 0.07));
	 printf("Em percentual: 7 %%\n");
 }
 if (SF > 2000.00) {
 	NS = (SF * 0.04) + SF;
 printf("Novo salario: %.2lf\n", NS);
 printf("Reajuste ganho: %.2lf\n", (SF * 0.04));
 printf("Em percentual: 4 %%\n");
 }
return 0;

}
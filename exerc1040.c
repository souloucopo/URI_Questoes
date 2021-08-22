#include <stdio.h>

int main () {
	float N1, N2, N3 ,N4, N5 , Media, Media2;
	scanf("%f", &N1); 
	scanf("%f", &N2);
	scanf("%f", &N3);
	scanf("%f", &N4);
	
	Media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
	printf("Media: %.1f\n", Media);
	
	if(Media >= 7.0)
		printf("Aluno aprovado.\n");
	
	if(Media < 5.0)
		printf("Aluno reprovado.\n");
	
	if(Media >= 5.0 && Media <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%f", &N5);
		
		Media2 = (Media + N5) / 2;
		
		if(Media2 >= 5.0){
			printf("Nota do exame: %.1f\n", N5);
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", Media2);
		}
		
		if (Media2 <= 4.9){
			printf("Nota do exame: %.1f\n", N5);
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", Media2);
		}
		}
			return 0;
	
}
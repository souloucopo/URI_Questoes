#include <stdio.h>
#include <stdlib.h>

struct coord
{
	double x,y;
};
int main(){
	struct coord plano;
	
	scanf("%lf", &plano.x);
	scanf("%lf", &plano.y);
	
	if( plano.x==0 && plano.y==0){
		printf("Origem\n");
	}else if (plano.x==0){
		printf("Eixo Y\n");
	}else if(plano.y==0){
		printf("Eixo X\n");
	}else if(plano.x > 0 && plano.y > 0){
		printf("Q1\n");
	}else if(plano.x < 0 && plano.y > 0 ){
		printf("Q2\n");
	}else if(plano.x < 0 && plano.y <0){
		printf("Q3\n");
	}else if(plano.x > 0 && plano.y < 0){
		printf("Q4\n");
	}
	
	return 0;
}
#include <stdio.h>

int main(){
	
	int hi, mi, hf, mf, th,tm;
	
	scanf("%d", &hi);
	scanf("%d", &mi);
	scanf("%d", &hf);
	scanf("%d", &mf);
	


	
	th = hf - hi;
	
	
if (th <= 0){
	th = (24 + hf) - hi;
}
     tm = mf - mi;
		if (tm <= 0){
			tm = (60 + mf) - mi ;
			th--;
		}
		if(th == 24) th = 0;
	if(hi == hf && mi == mf){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else 
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
	
	return 0;
	
}
#include <stdio.h>

int main() {

     int hi,hf,tempo;

  scanf("%d %d",&hi,&hf);

  if(hi>hf){ tempo = (24-hi)+hf;}

  if(hi<hf){ tempo = hf-hi;}

  if(hi==hf){ tempo = 24;}

    printf("O JOGO DUROU %d HORA(S)\n",tempo);

    return 0;
}
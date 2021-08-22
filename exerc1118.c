#include<stdio.h>
#include<stdlib.h>

int main(){
    float tempo1, tempo2, numero;
    int i=0, X;

    while(1)
    {
        scanf("%f", &numero);

        if(numero >= 0 && numero <= 10){
            if(i == 1){
                tempo2 = numero;
                printf("media = %.2f\n", (tempo1 + tempo2) / 2);
                i = 0;
                scanf("%d", &X);
                printf("novo calculo (1-sim 2-nao)\n");

                while(X < 1 || X > 2){
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &X);
                    if(X==1)
                        break;
                    else if(X == 2)
                        exit(0);
                }

                if(X==1)
                        continue;
                else if(X==2)
                    break;

            }else{
                tempo1 = numero;
                i = i + 1;
            }
        }
        else
            printf("nota invalida\n");

    }



    return 0;
}
#include <stdio.h>
 
int main() {
 float tempo, velocidade_media;
 scanf("%f%f", &tempo, &velocidade_media);
 printf("%.3f\n", tempo*velocidade_media/12.0);
 
    return 0;
}
#include <stdio.h>
 
int main() {
 
    int X; // total distance in km
    float Y,average; // Y = spent fuel total 
    
    scanf("%d%f", &X, &Y);
    
    average = X/Y;
    
    printf ("%.3f km/l\n", average);
 
    return 0;
}
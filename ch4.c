#include <stdio.h>

int main() {
    float ms, Kmh;
    
    printf("la vitesse en kilometres par heure:");
    scanf("%f", &Kmh);
    
    ms = Kmh * 0.27778;
    
    printf("Vitesse metres par seconde : %.2f\n", ms);
    
    return 0;
    
    
}
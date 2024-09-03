#include <stdio.h>

int main() {
    float Yards, Km;
    
    printf("la distance en kilomètres:");
    scanf("%f", &Km);
    
    Yards = Km * 1093.61;
    
    printf("Distance en yards : %.2f\n", Yards);
    
    return 0;
    
    
}
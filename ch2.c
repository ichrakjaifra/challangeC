#include <stdio.h>

int main() {
    float C, K;
    
    printf("la température en Celsius :");
    scanf("%f",&C);
    
    K = C + 273.15;
    
    printf("Température en Kelvin : %.2f\n",K);
    
    return 0;
}
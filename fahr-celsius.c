#include <stdio.h>

int main() {
    float fahr, celsius;
    int lowerTemperatureLimit, upperTemperatureLimit, step;

    lowerTemperatureLimit = 0;
    upperTemperatureLimit = 300;
    step = 20;

    fahr = lowerTemperatureLimit;
    while(fahr <= upperTemperatureLimit) {
        celsius = (5.0 / 9.0)* (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }    
}
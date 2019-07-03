#include <stdio.h>

int main() {
    
    float celsius, fahr;
    int lowerTemperatureLimit, upperTemperatureLimit, step;

    lowerTemperatureLimit = 0;
    upperTemperatureLimit = 200;
    step = 10;

    celsius = lowerTemperatureLimit;

    while(celsius <= upperTemperatureLimit) {
        fahr = celsius * 9/5 + 32;
        printf("%3.0f%s %6.1f%s \n", celsius, " C", fahr, " F");
        celsius = celsius + step;
    }
}
#include <stdio.h>

#define LOWER_TEMPERATURE_LIMIT 0
#define UPPER_TEMPERATURE_LIMIT 300
#define STEP 20

int main() {
    int fahr;

    for(fahr = UPPER_TEMPERATURE_LIMIT; fahr >= LOWER_TEMPERATURE_LIMIT; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}
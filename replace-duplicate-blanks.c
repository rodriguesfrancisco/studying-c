#include <stdio.h>

int main() {
    int c, blankCount;

    blankCount = 0;

    while((c = getchar()) != EOF) {        
        if(c != ' ') {
            blankCount = 0;
            putchar(c);
        } else {
            blankCount++;
            if(blankCount == 1) {
                putchar(c);
            }
        }
    }    
}
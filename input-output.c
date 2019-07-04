#include <stdio.h>

int main() {
    int c;
    
    printf("%d", EOF);

    c = getchar();
    while((c = getchar()) != EOF) {
        putchar(c);        
    }    
}
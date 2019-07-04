#include <stdio.h>

int main() {
    int blankCount, tabCount, newLineCount, c;

    blankCount = 0;
    tabCount = 0;
    newLineCount = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            blankCount++;
        }

        if(c == '\t') {
            tabCount++;
        }

        if(c == '\n') {
            newLineCount++;
        }
    }
    
    printf("%s%d\n", "Blank count: ", blankCount);
    printf("%s%d\n", "Tab count: ", tabCount);
    printf("%s%d\n", "NewLine count: ", newLineCount);
}
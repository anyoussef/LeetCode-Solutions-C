#include <stdio.h>
#include <string.h>
#include <ctype.h>

int lengthOfLastWord(char* s){
    
    int len = strlen(s);
    int i = len - 1;

    int wordLength = 0;

    while (i >= 0 && isspace(s[i])) {
        i--;
    }

    while (i >= 0 && isalpha(s[i])) {
        wordLength++;
        --i;
    }

    return wordLength;

}

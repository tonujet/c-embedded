#include "stringUtils.h"

char *toUpperCase(char *string) {
    for (int i = 0;; i++) {
        char currChar = string[i];
        if (currChar == '\0') break;
        char upperChar = toUpperChar(currChar);
        if (currChar != upperChar) string[i] = upperChar;
    }
    return string;
}


char toUpperChar(char c) {
    if (c >= 97 && c <= 122) {
        return c - UPPER_LOVER_OFFSET;
    }
    return c;
}

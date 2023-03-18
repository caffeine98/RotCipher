/*
    RotCipher - Rotate text based on given shift amount
    
    Usage: ./RotCipher <"Text string"> [Shift amount]
    Include shift amount argument to shift to exact value 
    (0 to 25, 26 will loop back to 0)
    Not including shift amount will print all rotations from 0 to 26
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void shiftString (char* str, size_t strLength, int shift) {
    char c;
    size_t i;

    /* Go through each character in the string and shift */
    for (i = 0; i < strLength; ++i) {
        c = str[i];
        if (isalpha(c) && isupper(c)) {
            c = (((c - 'A') + shift) % 26) + 'A';
        }
        else if (isalpha(c) && islower(c)) {
            c = (((c - 'a') + shift) % 26) + 'a';
        }
        str[i] = c;
    }

    str[strLength] = '\0';
}

int main(int argc, char* argv[]) {
    char* argStr;
    int argRotNum;
    int counter = 0;

    argStr = argv[1];
    
    if (argc < 2 || argc > 3) {
        fprintf(stderr, "Error, invalid amount of arguments\n");
        fprintf(stderr, "Usage: ./RotCipher <\"Your string here\">\n");
        return -1;
    }

    if (argc == 3) {
        argRotNum = atol(argv[2]);
        if (argRotNum < 0) {
            argRotNum = (argRotNum % 26) + 26;
        }

        printf("ROT-0: %s\n", argStr);
        shiftString(argStr, strlen(argStr), argRotNum);
        printf("ROT-%d: %s\n", (argRotNum % 26), argStr);

        return 0;
    }

    printf("ROT-0: %s\n", argStr);

    while(counter < 26) {
        ++counter;
        shiftString(argStr, strlen(argStr), 1);
        printf("ROT-%d: %s\n", counter, argStr);
    }

    return 0;
}

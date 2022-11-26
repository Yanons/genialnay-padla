#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print(char *stack);
void print(char *stack) { printf("%s", stack); }
int main(int srgc, char **srgv)
{
    if (srgc > 2) {
        puts("Не стандартное выражение");

    } else {
        int lEn = strlen(srgv[1]);
        char *ints;
        char *chars;
        ints = (char *)calloc(lEn, sizeof(char));
        chars = (char *)calloc(lEn, sizeof(char));
        int in = 0, ch = 0;
        for (int i = 0; i < lEn; ++i) {
            if (srgv[1][i] >= '0' && srgv[1][i] <= '9') {
                ints[in] = srgv[1][i];
                ++in;
            } else if (srgv[1][i] >= 40 && srgv[1][i] <= 48) {
                chars[ch] = srgv[1][i];
                ++ch;
            } else {
                puts("Не стандартное выражение");
                exit(EXIT_SUCCESS);
            }
        }
        print(ints);
        puts("\n");
        print(chars);
        puts("\n");
    }
}
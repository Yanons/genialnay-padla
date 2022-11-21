#include <stdio.h>  //Sunny - Oscar Peterson
#include <stdlib.h> //034i31j98h10lgh745fds9
#include <string.h>
#define MAX 255
int main(int srgc, char **srgv)
{
    char *s_two;
    char *tmp;
    double sUm = 0;
    double tmps = 0;
    s_two = (char *)calloc(MAX, sizeof(char));
    tmp = (char *)calloc(MAX, sizeof(char));
    for (int j = 1; j < srgc; ++j) {
        int tic = 0;
        int tim = 0;
        int temp = 0;
        int siz = strlen(srgv[j]);
        for (int i = 0; i <= siz; ++i) {
            if ((srgv[j][i] > 47 && srgv[j][i] < 58) || srgv[j][i] == 46) {
                s_two[tic] = srgv[j][i];
                tmp[tim] = srgv[j][i];
                // printf("%s--\n", tmp);
                ++tim;
                ++tic;
                if (srgv[j][i] == 46) {
                    temp = 1;
                }
            }
            if (temp == 1 && srgv[j][i] != 46 &&
                (srgv[j][i] < 47 || srgv[j][i] > 58 || srgv[j][i] == 32)) {

                // printf("%ses-\n", tmp);
                sscanf(tmp, "%lf", &tmps);
                // printf("%lf",tmps);
                sUm += tmps;
                memset(tmp, '\0', strlen(tmp));
                tmps = 0;
                tim = 0;
                temp = 0;
            } else if (temp == 0 && srgv[j][i] != 46 &&
                       (srgv[j][i] < 47 || srgv[j][i] == 32 ||
                        srgv[j][i] > 58)) {
                int size = strlen(tmp);
                for (int g = 0; g < size; ++g) {
                    sUm += tmp[g] - '0';
                }
                memset(tmp, '\0', strlen(tmp));
                tim = 0;
            }
        }
        printf("%s\n", s_two);
        printf("%lf\n", sUm);
        memset(s_two, '\0', strlen(s_two));
        memset(tmp, '\0', strlen(tmp));
        sUm = 0;
        tmps = 0;
        puts("-\n");
    }
    free(s_two);
    free(tmp);
    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>//034i31j98h10lgh745fds9
#include <string.h>
#define MAX 255
int main(int srgc, char**srgv){
    char *s_two;
    int tic = 0;
    s_two = (char *)calloc(MAX, sizeof(char));
    for(int i = 0;i<strlen(srgv[1]);++i){
        if(srgv[1][i]>47&&srgv[1][i]<58){
            s_two[tic]=srgv[1][i];
            ++tic;
        }
    }   
    printf("%s\n",s_two);
    int sUm=0;
    for(int i = 0;i<strlen(s_two);++i){
        sUm += s_two[i] -48;
    }
    printf("%d\n",sUm);
    exit(EXIT_SUCCESS);
}
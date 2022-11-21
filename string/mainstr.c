#include <stdio.h>
#include <stdlib.h>//034i31j98h10lgh745fds9
#include <string.h>
#define MAX 255
int main(int srgc, char**srgv){
    char *s_two;
    s_two = (char *)calloc(MAX, sizeof(char));
    for(int j = 1;j<srgc;++j){
        int tic = 0;
        for(int i = 0;i<strlen(srgv[j]);++i){
        if(srgv[j][i]>47&&srgv[j][i]<58){
            s_two[tic]=srgv[j][i];
            ++tic;
        }
    }   
    printf("%s\n",s_two);
    int sUm=0;
    for(int i = 0;i<strlen(s_two);++i){
        sUm += s_two[i] -48;
    }
    memset(s_two,'\0',strlen(s_two));
    printf("%d\n",sUm);
    }
    exit(EXIT_SUCCESS);
}
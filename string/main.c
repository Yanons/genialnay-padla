#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 255

int main()
{
    char *s_one;
    char *s_two;
    int tic= 0;
    s_one = (char *)calloc(MAX, sizeof(char));
    s_two = (char *)calloc(MAX, sizeof(char));
    strcpy(s_one,"034i31j98h10lgh745fds9");//03431981017459
    for(int i = 0;i<strlen(s_one);++i){
        if(s_one[i]>47&&s_one[i]<58){
            s_two[tic]=s_one[i];
            ++tic;
        }
    }   
    printf("%s\n",s_two);
    int sUm=0;
    for(int i = 0;i<strlen(s_two);++i){
        sUm += s_two[i] -48;
    }
    // int s_int = atoi(s_two);
    // printf("%d\n",s_int);
    // int e = 0;
    // while (s_int > 0)  { бляяяяяяяяяяяяяяяяяяяяяяяя
    //     sUm += s_int%10; я не навижу это наебалово с strtol и atoi кто их придумал?  проще -48 сделать и не ебаться
    //     s_int /= 10;
    //     //sUm = s_int-e;
    // }
    printf("%d",sUm);
    // char s_three[MAX];
    // char *end;
    // char id = 'l';
    // char a = 'a';
    //fgets(s_one, MAX, stdin);
    //fgets(s_two, MAX, stdin);
    // printf("1 = %s\n2 = %s\n", s_one, s_two);
    // printf("len 1 = %ld\nlen 2 = %ld\n", strlen(s_one), strlen(s_two));
    // printf("res = %d, s = %d\n", strcmp(s_one, s_two));
    //  printf("%s\n%s", s_one, s_two);
    //      memcpy(s_three, s_one, sizeof(s_one));
    //      printf("\n%s", s_three);
    //      memset(s_one, '$', 3);
    //      printf("%s", s_one);
    //      strcat(s_one, s_two);
    //      printf("\n%s", s_one);
    //      end = strchr(s_one, id);
    //      printf("%s", end);
    // strcpy(s_one, "WOWO");
    // printf("1 = %s\n2 = %s\n", s_one, s_two);
    // char *res = strrchr(s_one, a);
    // printf("%d", res - s_one);
}
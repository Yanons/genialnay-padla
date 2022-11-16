#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 255

int main()
{
    char *s_one;
    char *s_two;
    s_one = (char *)calloc(MAX, sizeof(char));
    s_two = (char *)calloc(MAX, sizeof(char));
    // char s_three[MAX];
    // char *end;
    // char id = 'l';
    // char a = 'a';
    fgets(s_one, MAX, stdin);
    fgets(s_two, MAX, stdin);
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
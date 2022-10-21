#include <stdio.h>
int main()
{
    int a, b, c = 3, d = 3, M = 3, N = 3;
    int A[3][3];
    printf("Какую матрицу? 1/2");
    scanf("%d", &a);
    for (int k = 0; k == 0;) {
        if (a == 1) {
            for (c; c >= M; c--) {
                for (d; d >= N; d--) {
                    printf("%d %d", c, d, "Ячейка");
                    scanf("%d", &b);
                    A[c][d] = b;
                }
            }
        } else {
        }
    }
}
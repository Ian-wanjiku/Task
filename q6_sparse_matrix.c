#include <stdio.h>
int main() {
    int m[3][3] = {{0,0,3},{0,5,0},{7,0,0}};
    int s[10][3], i, j, k = 0;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (m[i][j] != 0) {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = m[i][j];
                k++;
            }

    printf("Row Col Value\n");
    for (i = 0; i < k; i++)
        printf("%d   %d   %d\n", s[i][0], s[i][1], s[i][2]);
    return 0;
}

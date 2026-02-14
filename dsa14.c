#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[100][100];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j) {
                if (a[i][j] != 1) {
                    flag = 0;
                }
            }
            else {
                if (a[i][j] != 0) {
                    flag = 0;
                }
            }

        }
    }

    if (flag == 1)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}

#include <stdio.h>

int main() {
    int mat[3][3] = {1,2,3,4,5,6,7,8,9}, zeroCount = 0, totalElements = 9,i,j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    if (zeroCount > totalElements / 2) {
        printf("The matrix is sparse.\n");
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}


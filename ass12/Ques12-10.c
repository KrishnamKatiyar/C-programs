#include <stdio.h>

int main() {
    int i,j , flag = 1;
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
    }

    if (flag) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}


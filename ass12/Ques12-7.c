#include <stdio.h>


int determinant(int matrix[3][3], int n) {
    int det = 0,x,i,j;
    
    // Base case for 2x2 matrix
    if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }
    
    int subMatrix[3][3];
    for ( x = 0; x < n; x++) {
        int sub_i = 0;
        for (i = 1; i < n; i++) {
            int sub_j = 0;
            for ( j = 0; j < n; j++) {
                if (j == x) continue;
                subMatrix[sub_i][sub_j] = matrix[i][j];
                sub_j++;
            }
            sub_i++;
        }
        int sign = (x % 2 == 0) ? 1 : -1;
        det += sign * matrix[0][x] * determinant(subMatrix, 3 - 1);
    }
    return det;
}

int main() {

    int matrix[3][3]={1,2,3,4,5,6,7,8,9};

    int det = determinant(matrix, 3);
    printf("The determinant of the matrix is: %d\n", det);

    return 0;
}


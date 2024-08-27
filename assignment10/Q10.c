#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n) {
	int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void separateAndSort(int arr[], int n) {
	int i;
    int even[n], odd[n];
    int evenCount = 0, oddCount = 0;

    // Separate even and odd elements
    for ( i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    // Sort even and odd arrays
    sortArray(even, evenCount);
    sortArray(odd, oddCount);

    // Merge sorted even and odd arrays back into original array
    for (i = 0; i < evenCount; i++) {
        arr[i] = even[i];
    }
    for (i = 0; i < oddCount; i++) {
        arr[evenCount + i] = odd[i];
    }
}

void printArray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    separateAndSort(arr, n);

    printf("Array with even and odd elements sorted separately:\n");
    printArray(arr, n);

    return 0;
}


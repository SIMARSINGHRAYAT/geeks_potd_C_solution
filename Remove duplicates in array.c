#include <stdio.h>

int main() {
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0;
    int result[100];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = 1;
                found = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[k++] = arr[i];
        }
    }

    if (!found) {
        printf("No duplicate element present in the array.\n");
    } else {
        printf("Duplicate elements removed.\n New array:\n");
        for (int i = 0; i < k; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}

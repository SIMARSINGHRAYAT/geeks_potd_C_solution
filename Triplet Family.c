#include<stdio.h>
#include<stdbool.h>

int main() {
    int arr[100];
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int found = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(k != i && k != j && arr[i] + arr[j] == arr[k]) {
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
        if (found) break;
    }

    if(!found) {
        printf("False\n");
    } else {
        printf("True\n");
    }

    return 0;
}

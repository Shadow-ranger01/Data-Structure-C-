//ternarysearch 1/3 searching system 

#include <stdio.h>

int ternarysearch(char A[], int n, char item) {
    int low = 0, high = n - 1;

    while (low <= high) {
        //Find two mid points becouse it needs 1/3 portion to search
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;

        //Check if item is at mid1 or mid2
        if (A[mid1] == item) {
            return mid1;
        }
        if (A[mid2] == item) {
            return mid2;
        }

        //item is in left part
        if (item < A[mid1]) {
            high = mid1 - 1;
        }
        //item is in right part
        else if (item > A[mid2]) {
            low = mid2 + 1;
        }
        //Else item is in middle part
        else {
            low = mid1 + 1;
            high = mid2 - 1;
        }
    }
    return -1; // Error handling....
}

int main() {
    char A[] = {'a','b','c','d','e','f','g','h'};
    int n = sizeof(A) / sizeof(A[0]);
    char item;

    printf("Enter the item you are searching: ");
    scanf(" %c", &item);

    int result = ternarysearch(A, n, item);

    if (result != -1) {
        printf("The char '%c' is available at index %d\n", item, result);
    } else {
        printf("The char '%c' is not available in the array\n", item);
    }

    return 0;
}

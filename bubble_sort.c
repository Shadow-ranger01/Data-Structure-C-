#include <stdio.h>

//bubble er function
void bubbleSort(int A[], int n) {

    //nested loop lagbea karon 2 ta veriable dhoray dhoray swap
    //laga decriment
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {

            //cehinta koro.... holo ki!!!
            if (A[j] > A[j+1]) {
                
                //mar swap... i mean main swaping algorithom 
                int temp = A[j]; 
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main() {

    //ami input compile time marsi tomra chilay run time mairo...

    int A[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(A)/sizeof(A[0]);

    //hala ray call disi
    bubbleSort(A, n);

    //hala print hoisay sort hoiyea
    printf("Bubble Sorted: ");
    for (int i = 0; i < n; i++){ 
        printf("%d ", A[i]);
    }

    return 0;
}

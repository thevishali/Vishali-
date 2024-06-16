#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

// Main function
int main() {
    int n, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Choose sorting technique:\n");
    printf("1. Quick Sort\n2. Merge Sort\n3. Bubble Sort\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            quickSort(arr, 0, n - 1);
            printf("Sorted array using Quick Sort: ");
            break;
        case 2:
            mergeSort(arr, 0, n - 1);
            printf("Sorted array using Merge Sort: ");
            break;
        case 3:
            bubbleSort(arr, n);
            printf("Sorted array using Bubble Sort: ");
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

       }
    }

    // If we reach here, the element was not present
    printf("Key %d not found in the array\n", key);
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    binarySearch(arr, size, key);

    return 0;
}




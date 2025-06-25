#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];           // Current element to insert
        int prev = i - 1;

        // Shift elements of arr[0..i-1] that are greater than key
        while (prev >= 0 && arr[prev] > key) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        // Place key at its correct position
        arr[prev + 1] = key;
    }
}

int main() {
    int arr[] = {4, 3, 6, 4, 3, 2, 4, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>  // For input-output operations
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { 
            i++;              
            swap(arr[i], arr[j]); 
        }
    }
    swap(arr[i + 1], arr[high]); 
    return (i + 1);
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) { 
        int pi = partition(arr, low, high); // Partition the array

        // Recursively sort the two halves
        quickSort(arr, low, pi - 1);  // Left part
        quickSort(arr, pi + 1, high); // Right part
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Finding the size of the array

    quickSort(arr, 0, n - 1); // Calling Quick Sort

    cout << "Sorted array: ";
    printArray(arr, n); // Printing the sorted array

    return 0; // Successful termination of the program
}

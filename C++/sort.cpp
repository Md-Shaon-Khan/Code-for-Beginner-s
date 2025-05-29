#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]); 
            }
        }
    }
}

int main() {
    cout << "Enter the size of an array: ";
    int size;
    cin >> size;

    int array[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    
    bubbleSort(array, size);

    cout << "Sorted numbers: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    return 0;
}

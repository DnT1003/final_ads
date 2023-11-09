#include <iostream>
#include <algorithm>
using namespace std;

void doubleSelectionSort(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int minIndex = i, maxIndex = i;
        for (int k = i; k <= j; k++) {
            if (arr[k] < arr[minIndex])
                minIndex = k;
            if (arr[k] > arr[maxIndex])
                maxIndex = k;
        }
        swap(arr[i], arr[minIndex]);
        if (arr[i] == arr[maxIndex])
            maxIndex = minIndex;
        swap(arr[j], arr[maxIndex]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    doubleSelectionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// Justification
// Time Complexity best case: O(n^2) with n is number of elements in array
// Time Complexity worst case: O(n^2) with n is number of elements in array
// Time Complexity average case: O(n^2) with n is number of elements in array
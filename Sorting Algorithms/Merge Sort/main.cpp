#include <iostream>
using namespace std;

// Function to print the Elements of Array
void print_Array(int A[], int size) {
    cout << "The Elements of the Array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void merge(int A[], int start, int mid, int end) {
    // Create L = A[start..mid] and R = A[mid+1..end]
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = A[start + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = A[mid + 1 + j];
    }

    // Maintain current index of sub-arrays and main array
    int i = 0, j = 0, k = start;

    // Until we reach either end of either L or R, pick larger among
    // elements L and R and place them in the correct position at A[start..end]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or R,
    // pick up the remaining elements and put in A[start..end]
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

// Function to sort using Merge Sort Algorithm
void merge_sort(int A[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(A, start, mid);
        merge_sort(A, mid + 1, end);
        merge(A, start, mid, end);
    }
}

int main() {
    int n;
    cout << "Enter the Size of the Array:";
    cin >> n;
    const int SIZE = n;
    int x[SIZE];
    cout << "Enter the Elements of the Array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> x[i];
    }
    merge_sort(x, 0, SIZE);
    print_Array(x, SIZE);
    return 0;
}

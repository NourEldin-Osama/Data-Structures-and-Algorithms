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

// Function to sort using Bubble Sort Algorithm
void bubble_sort(int A[], int size) {
    for (int i = 0; i < (size - 1); ++i) {
        for (int j = size; j > i; --j) {
            // compare two adjacent elements
            if (A[j - 1] > A[j]) {
                // swapping elements if elements are not in the right order
                swap(A[j - 1], A[j]);
            }
        }
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
    bubble_sort(x, SIZE);
    print_Array(x, SIZE);
    return 0;
}

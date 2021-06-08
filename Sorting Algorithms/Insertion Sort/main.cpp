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

// Function to sort using Insertion sort algorithm
void insertion_sort(int A[], int size) {
    int key, j;
    for (int i = 1; i < size; ++i) {
        key = A[i];
        j = i - 1;
        while ((j >= 0) && (A[j] > key)) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
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
    insertion_sort(x, SIZE);
    print_Array(x, SIZE);
    return 0;
}

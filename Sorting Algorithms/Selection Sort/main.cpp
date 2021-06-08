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

// Function to sort using Selection Sort Algorithm
void selection_sort(int A[], int size) {
    int index_min;
    for (int i = 0; i < size - 1; ++i) {
        index_min = i;
        // find minimum
        for (int j = i + 1; j < size; ++j) {
            if (A[j] < A[index_min]) {
                index_min = j;
            }
        }
        // put min at the correct index
        swap(A[index_min], A[i]);
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
    selection_sort(x, SIZE);
    print_Array(x, SIZE);
    return 0;
}

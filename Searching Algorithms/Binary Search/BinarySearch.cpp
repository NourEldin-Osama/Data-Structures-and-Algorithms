#include <iostream>
using namespace std;

// Function to search in array using Binary Search Algorithm
int binarySearch(int A[], int number, int low, int high) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (A[mid] == number) {
        return mid;
    }
    // Search the left half
    if (A[mid] > number) {
        return binarySearch(A, number, low, mid - 1);
    }
    // Search the right half
    return binarySearch(A, number, mid + 1, high);
}


int main() {
    int n;
    cout << "Enter the Size of the Array:";
    cin >> n;
    const int SIZE = n;  // make the SIZE constant
    int array[SIZE];
    cout << "Enter the elements of the array in Ascending Order:" << endl;
    // take the elements of the Array as input
    for (int i = 0; i < SIZE; ++i) {
        cin >> array[i];
    }
    cout << "Please enter the number you want to search for";
    cin >> n;
    int index = binarySearch(array, n, 0, SIZE-1);
    if (index != -1) {
        cout << "the Elements is in index: " << index << endl;
    } else {
        cout << "the Elements isn't in the Array";
    }
    return 0;
}

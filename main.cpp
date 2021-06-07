#include <iostream>
using namespace std;

void selection_sort(int A[],int SIZE){
    int index_min, temp;
    for (int i = 0; i < SIZE-1; ++i) {
        index_min = i;
        for (int j = i+1; j < SIZE; ++j) {
            if (A[j]<A[index_min]){
                index_min=j;
            }
        }
        // put min at the correct index
        temp = A[index_min];
        A[index_min]=A[i];
        A[i] = temp;
    }
}

int main (){
    int n;
    cout<<"Enter the Size of the Array:";
    cin>>n;
    const int SIZE = n;
    int x[SIZE];
    cout<<"Enter the Elements of the Array:";
    for (int i = 0; i < SIZE; ++i) {
        cin>>x[i];
    }
    selection_sort(x,SIZE);
    cout<<"The Elements of the Array:";
    for (int i = 0; i < SIZE; ++i) {
        cout<<x[i]<<" ";
    }

    return 0;
}

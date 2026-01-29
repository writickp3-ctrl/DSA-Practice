#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int smallestIdx = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }

        swap(arr[i], arr[smallestIdx]);
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = v[i];
    }

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
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

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}

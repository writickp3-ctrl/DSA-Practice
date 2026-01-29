#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[end];
    int smallerIndex = start - 1;

    for (int current = start; current < end; current++) {
        if (arr[current] <= pivot) {
            smallerIndex++;
            swap(arr[smallerIndex], arr[current]);
        }
    }

    smallerIndex++;
    swap(arr[smallerIndex], arr[end]);

    return smallerIndex;
}

void quickSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int pivotPos = partition(arr, start, end);

        quickSort(arr, start, pivotPos - 1);
        quickSort(arr, pivotPos + 1, end);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted data: ";
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}

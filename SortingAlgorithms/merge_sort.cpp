#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int start, int mid, int end);

void mergeSORT(vector<int>& arr, int start, int end){
    if(start < end){
        int mid = start + (end - start) / 2;
        mergeSORT(arr, start, mid);
        mergeSORT(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void merge(vector<int>& arr, int start, int mid, int end){
    int left = start;
    int right = mid + 1;

    vector<int> merged;

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            merged.push_back(arr[left]);
            left++;
        } else {
            merged.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        merged.push_back(arr[left]);
        left++;
    }

    while(right <= end){
        merged.push_back(arr[right]);
        right++;
    }

    for(int k = 0; k < merged.size(); k++){
        arr[start + k] = merged[k];
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSORT(arr, 0, n - 1);

    cout << "Sorted data: ";
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}

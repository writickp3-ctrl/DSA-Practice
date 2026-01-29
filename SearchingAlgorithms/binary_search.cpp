#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(const vector<int>& arr, int target, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;

        if(target < arr[mid]){
            return binarySearch(arr, target, st, mid - 1);
        }
        else if(target > arr[mid]){
            return binarySearch(arr, target, mid + 1, end);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "enter number of elements : ";
    cin >> n;

    vector<int> arr(n);

    cout << "enter the elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());   // ensure sorted

    int target;
    cout << "target = ";
    cin >> target;

    cout << "the index of our target is : "
         << binarySearch(arr, target, 0, arr.size() - 1);

    return 0;
}

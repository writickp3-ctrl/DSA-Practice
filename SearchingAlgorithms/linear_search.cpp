#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& arr, int key){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
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

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, key);

    if(result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}

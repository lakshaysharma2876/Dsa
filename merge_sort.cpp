#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid+1;
    //pointer is maintained to compare left and right arrays for smaller elements to maintain the ascending order
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    //if elements left in the left array so they have to be pushed into the temp array
    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    //if elements left in the right array so they have to be pushed into the temp array
    while(right<=high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++) {
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main() {
    vector<int> arr = {3,1,2,4,1,5,2,6,4};
    mergeSort(arr,0,8);

    for(int i:arr) cout << i << " ";

    return 0;
}

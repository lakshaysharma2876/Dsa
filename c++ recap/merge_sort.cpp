#include <bits/stdc++.h>

using namespace std;

class MergeSort {
    public :
    static void mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high) return;
        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
        traverse(arr);
    }
    
    static void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid+1;
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
        //if right array is exhausted
        while(left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        //if left array is exhausted
        while(right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
    
        for(int i=low; i<=high; i++) {
            arr[i] = temp[i-low];
        }
    }

    static void traverse(vector<int>& arr) {
        cout << "[";
        for(int i:arr) {
            cout << i << " ";
        }
        cout << "]";
    }
};

int main() {
    vector<int> a = {9,8,7,6,5,4,3,2};
    
    //using static functions
    MergeSort::traverse(a);
    MergeSort::mergeSort(a,0,a.size()-1);
    MergeSort::traverse(a);

    return 0;
}


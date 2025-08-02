#include <bits/stdc++.h>

using namespace std;

vector<int> bubble_sort(vector<int>& arr, int n) {
    for(int i=n-1; i>=1; i--) {
        bool swapped = false;
        for(int j=0; j<=i-1; j++) {
            //since there will be no elemment after the last element so j<=i-1 since last element cant be compared using j+1
            if(arr[j]>arr[j+1]) {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
                //swap
            }
        }
        if(swapped == false) break;
    }
    return arr;
}

int main() {
    vector<int> arr = {13,46,24,2,20,9};
    vector<int> result = bubble_sort(arr, 6);

    for(int i:result) cout << i << " ";

    return 0;
}
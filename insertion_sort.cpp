#include <bits/stdc++.h>

using namespace std;

vector<int> insertion_sort(vector<int> &arr, int n) {
    for(int i=0; i<=n-1; i++) {
        int j =i;
        //we will compare from the end of the array [0->i] and check whether the j-1 > j, if so then swap
        while(j>0 && arr[j] < arr[j-1]) {
            //swap
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            //swap
            j--;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {13,46,24,2,20,9};
    vector<int> result = insertion_sort(arr, 6);

    for(int i:result) cout << i << " ";
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

vector<int> selection_sort(vector<int>& arr, int n) {
    for(int i=0; i<=n-2; i++) {
        int mini = i;
        for(int j=i; j<=n-1; j++){ 
            // here j is the index of the array to be sorted thats why we have taken the loop to n-1 
            if(arr[j] < arr[mini]) mini = j;
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }

    return arr;
}

int main() {
    vector<int> arr = {13,46,24,52,20,9};
    vector<int> result = selection_sort(arr,6);
    for(int i:result) cout << i << " ";

    return 0;
}
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int n1=a.size();
        int n2=b.size();
        int i=0;
        int j=0;
        vector<int> union_arr;
        
        while(i<n1 && j<n2) {
            if(a[i] <= b[j]) {
                if(union_arr.size()==0 || union_arr.back() != a[i]) {
                    union_arr.push_back(a[i]);
                }
                i++;
            }
            else {
                if(union_arr.size()==0 || union_arr.back() != a[j]) {
                    union_arr.push_back(a[j]);
                }
                j++;
            }
        }
        
        //if any of the array gets exhausted then remaining elements need to be put in union array
        while(i<n1) {
            if(union_arr.size()==0 || union_arr.back() != a[i]) {
                    union_arr.push_back(a[i]);
                }
                i++;
        }
        while(j<n2) {
            if(union_arr.size()==0 || union_arr.back() != a[j]) {
                    union_arr.push_back(a[j]);
                }
                j++;
        }
        return union_arr;
    }
};



//{ Driver Code Starts.
int main() {
    // vector<int> a = {1,1,2,3,4,5};
    // vector<int> b = {2,3,4,4,5,6};
    // Solution s1;
    // vector<int> result = s1.findUnion(a,b);
    // for(auto i : result) cout << i << " ";
    int a[5];
    cout << a[3] << endl;

    return 0;
}

// } Driver Code Ends
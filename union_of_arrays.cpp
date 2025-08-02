#include <bits/stdc++.h>

using namespace std;


vector<int> union_of_arrays(vector<int> &a, vector<int> &b) {
    set<int> st;
    for(int i=0; i<a.size(); i++) {
        st.insert(a[i]);
    }
    
    for(int i=0; i<b.size(); i++) {
        st.insert(b[i]);
    }

    vector<int> temp;
    for(auto i : st) temp.push_back(i);

    return temp;
}

int main() {
    vector<int> a = {1,1,2,3,4,5};
    vector<int> b = {2,3,4,4,5,6,7,8,8,9};

    vector<int> union_array = union_of_arrays(a,b);

    for(auto i : union_array) cout << i << " ";

    return 0;
}
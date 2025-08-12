// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
    
    vector<int> s = {3,1,2};
    s.erase(s.begin());

    for(auto i:s) cout << i << " ";
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for(int k=0; k<2*i+1; k++) {
            cout << "*";
        }
        for(int l=0; l<n-i-1; l++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    nStarTriangle(5);
    return 0;
}
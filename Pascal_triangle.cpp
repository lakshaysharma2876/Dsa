#include <bits/stdc++.h>

using namespace std;

//first type of problem we use formula (n-1)C(r-1)
long long nCr(int n, int r) {
    long long res =1;
    for(int i=0; i<r; i++) {
        res = res * (n-i);
        res = res/(i+1);
    }
    return res;
}

//print the nth row
vector<int> row_of_triangle(int row) {
    vector<int> res;
    int ans = 1;
    res.push_back(ans);
    for(int i=1; i<row; i++) {
        ans = ans* (row-i)/i;
        res.push_back(ans);
    }

    return res;
}

int main() {
    //there are 3 types of problems for pascal triangle

    // 1. what element appears at "R" row and "C" column
    // 2. print the nth row
    // 3. print the entire pascal triangle 


    // cout << "Enter the number of rows and colums :" << endl;
    // int r,c;

    //cin >> r >> c;
    
    //long long res = nCr(r-1,c-1);
    //cout << "The element at 'r'th row and 'c'th column is : " << res;

    int n;
    cout << "Enter the row number : ";
    cin >> n;

    cout << n << "th row is : ";
    for(auto i : row_of_triangle(n)) cout << i << " ";
    return 0;
}
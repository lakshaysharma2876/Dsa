#include <bits/stdc++.h>

using namespace std;

int countStudents(vector<int> book, int pages) {
    int currStudent = 1;
    int noOfPages = 0;
    for (int i=0; i<book.size(); i++) {
        if(book[i] + noOfPages > pages) {
            noOfPages = book[i];
            currStudent++;
        }
        else {
            noOfPages += book[i];
        }
    }
    return currStudent;
}

int allocateBooks(vector<int> book, int m) {
    int low = *max_element(book.begin(),book.end());
    int high = 0;
    for(int i:book) high += i;

    // for(int i=low; i<=high; i++) {
    //     
    //     if(cnt == m) return i;
    // }
    while(low <= high) {
        int mid = (low+high)/2;
        int cnt = countStudents(book,mid);
        if(cnt <= m) {
            high = mid-1;
        }
        else low = mid+1;
    }
    return low;
}

int main() {
    vector<int> books = {25,46,28,49,24};
    int m =4;

    int ans = allocateBooks(books, m);
    cout << ans;

    return 0;
}
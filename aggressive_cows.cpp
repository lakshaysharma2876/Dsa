#include <bits/stdc++.h>

using namespace std;

int canWePlace(vector<int> distance, int i, int cows ) {
    int cntCows = 1;
    int last = distance[0];
    for(int j=0; j<distance.size(); j++) {
        if(distance[j] - last >= i) {
            cntCows++;
            last = distance[j];
        }
        if(cntCows >= cows) return true;
        
    }
    return false;
}

int aggresive_Cows(int cows, vector<int> distance) {
    sort(distance.begin(),distance.end());

    int maxi = *max_element(distance.begin(),distance.end()); // distance[distance.size()-1]
    int mini = *min_element(distance.begin(),distance.end()); // distance[0]

    // for(int i=1; i<=(maxi-mini); i++) {
    //     if(canWePlace(distance, i, cows) == true) continue;
    //     else return (i-1);
    // }

    //TC = O(maxi-mini + N) ⁓ O(N²)

    //we can use binary search to minimize this

    int low = 1;
    int high = (maxi-mini);
    int ans =0;
    while(low <= high) {
        int mid = (low+high)/2;
        
        if (canWePlace(distance,mid,cows) == true) {
            low = mid+1;
        }
        else high = mid-1;
        
    }
    return high;
    
}

int main() {
    int cows = 4;
    vector<int> distance = {0,3,4,7,9,10};
    int min_dist = aggresive_Cows(cows, distance);
    cout << min_dist;

    return 0;
}
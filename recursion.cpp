#include <bits/stdc++.h>

using namespace std;

class Recursion {
    public :
        void printName5Times(int n) {
            if(n==0) return;
            cout << "My name is Lakshay"  << n << endl;
            printName5Times(n-1);
        }

        void _1toN_b(int n) {
            if(n==0) return;
            _1toN_b(n-1);
            cout << n << endl;
        }

        void _Nto1_b(int n) {
            if(n==0) return;
            cout << n << endl;
            _Nto1_b(n-1);
        }
};

int main() {
    Recursion r;
    //r.printName5Times(5);
    //r._1toN_b(5);
    //r._Nto1_b(5);

    return 0;
}
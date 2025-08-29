#include <bits/stdc++.h>

using namespace std;

class HeapClass {
    

    public : 

    int size;
    int arr[100];
         
    HeapClass() {
        arr[0] =-1;
        size = 0;
    }

    void insertion(int data) {
        size++;
        int index = size;
        arr[index] = data;

        while(index>1) {
            int parent = index/2;

            if(arr[parent] < arr[index]) {
                swap(arr[parent],arr[index]);
                index = parent;
            }

            else {
                return;
            }
        }
    }

    void deletion(int data) {
        if(size==0) return;

        arr[1] = arr[size];

        size--;

        int i=1;
        while(i<size) {
            int leftNode = 2*i;
            int rightNode = (2*i)+1;

            if(leftNode < size && arr[leftNode] > arr[i]) {
                swap(arr[leftNode],arr[i]);
                i = leftNode;
            }
            else if(rightNode < size && arr[rightNode] > arr[i]) {
                swap(arr[rightNode],arr[i]);
                i = rightNode;
            }
            else  {
                return;
            }
        }   
    }

    void print() {
        for(int i=1; i<=size; i++) cout << arr[i] << " ";
    }
};

int main() {
    HeapClass h;
    h.insertion(50);
    h.insertion(100);
    h.insertion(20);
    h.insertion(60);
    h.insertion(64);
    h.print();

    cout << endl;
    
    h.deletion(60);
    h.print();

    return 0;
}
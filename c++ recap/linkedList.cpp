#include <iostream>

using namespace std;

class Node {
    public :
        int data;
        Node* next;

        Node(int d) {
            data = d;
            next = nullptr;
        }
};

class LinkedList {
    public :
        Node* head;
        LinkedList(int data) {
            head = new Node(data);
        }

        void traverse() {
            Node* temp = head;
            while(temp != nullptr) {
                cout << temp->data << "-->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }

        void insert_after_beginning(int data) {
            Node* n = new Node(data);
            n->next = head;
            head = n;
        }

        void insert_after_end(int data) {
            Node* n = new Node(data);
            Node* temp = head;
            while(temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = n;
        }

        void insert_after_specific_node(int data, Node* specific_node) {
            Node* n = new Node(data);
            n->next = specific_node->next;
            specific_node->next = n;
        }

        void delete_node(Node* to_be_deleted) {
            if(to_be_deleted == head) {
                Node* temp = head;
                head = temp->next;
                delete to_be_deleted; 
            }
            else {
                Node* temp = head;
                while(temp->next != to_be_deleted) {
                    temp = temp->next;
                }
                temp->next = to_be_deleted->next;
                to_be_deleted->next = nullptr;
                delete to_be_deleted;
            }
        }
};


int main() {
    LinkedList ll(10);
    ll.head->next = new Node(20);
    ll.head->next->next = new Node(30);

    
    ll.insert_after_beginning(40);
    // ll.traverse();

    ll.insert_after_end(50);
    // ll.traverse();

    // ll.insert_after_specific_node(100,ll.head->next->next);
    // ll.traverse();

    ll.delete_node(ll.head->next->next->next);
    ll.traverse();
    return 0; 
}
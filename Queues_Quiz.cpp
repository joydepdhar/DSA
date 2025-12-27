#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    long long val;
    Node* next;

    Node(long long val) {
        this->val = val;
        this->next = nullptr;
    }
};
void printList(Node* head) {
    if (head == nullptr) {
        cout << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertHead(Node* &head,long long val) {
    Node* newNode = new Node(val);
    newNode->next=head;
    head=newNode;
}
void insertTail(Node* &head, long long val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void deleteAtIndex(Node* &head, long long idx) {
    if (head == nullptr) return;

    if (idx == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    for (int i = 0; i < idx - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }

    if (curr == nullptr || curr->next == nullptr) return;

    Node* del = curr->next;
    curr->next = del->next;
    delete del;
}
int main() {
    int t;
    cin>>t;
    Node* head = nullptr;
    while (t--)
    {
        int x;
        long long v;
        cin>>x>>v;
        if(x==0){
            insertHead(head, v);
            printList(head);
        }else if(x==1){
            insertTail(head, v);
            printList(head);
        }else if(x=2){
            deleteAtIndex(head,v);
            printList(head);
        }
    }
    // printList(head);
    return 0;
}
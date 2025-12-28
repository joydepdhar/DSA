#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
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


void insertTail(Node* &head,long long val) {
    Node* newNode = new Node(val);

    if (head==nullptr) {
        head=newNode;
        return;
    }

    Node* temp=head;
    while (temp->next != nullptr) {
        temp=temp->next;
    }
    temp->next=newNode;
}
void removeDuplicates(Node* head) {
    Node* curr=head;

    while (curr != nullptr) {
        Node* prev=curr;
        Node* runner=curr->next;

        while (runner != nullptr) {
            if (runner->val == curr->val) {
                prev->next = runner->next;
                delete runner;
                runner = prev->next;
            } else {
                prev = runner;
                runner = runner->next;
            }
        }
        curr = curr->next;
    }
}
int main() {
    Node* head=nullptr;
    int n;
    while (true)
    {
        cin>>n;
        if(n==-1)break;
        insertTail(head,n);
    }
    removeDuplicates(head);
    printList(head);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            this->next=nullptr;
        }
};
int main() {
    int n;
    Node* head=nullptr;
    Node* tail=nullptr;

    while (true)
    {
        cin>>n;
        if(n==-1){
            break;
        }else{
            
          Node* newNode = new Node(n);
          
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }  
        }
    }
    if (head == nullptr) {
        cout << 0;
        return 0;
    }
    int mn=head->val;
    int mx=head->val;
    Node* temp=head;
    while (temp != nullptr) {
        mn=min(mn, temp->val);
        mx=max(mx, temp->val);
        temp=temp->next;
    }
    cout << mx - mn;
    return 0;
}
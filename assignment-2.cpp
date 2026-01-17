// #include <bits/stdc++.h>
// #include <stack>
// #include <queue>
// using namespace std;

// int main() {
//     // cout<<"Hello Phiton";
//     int n,m;
//     cin>>n>>m;
//     stack<int>st;
//     queue<int>q;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         st.push(x);
//     }
//     for(int i=0;i<m;i++){
//         int x;
//         cin>>x;
//         q.push(x);
//     }
//     if(n!=m){
//         cout<<"NO\n";
//         return 0;
//     }
//     while(!st.empty()&& !q.empty()){
//         if(st.top() != q.front()){
//             cout<<"NO\n";
//             return 0;
//         }
//         st.pop();
//         q.pop();
//     }
//     cout<<"YES\n";
//     return 0;
// }
// ------------------------------2nd Question---------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,m;
//     cin>>n>>m;
//     int stackArr[n];
//     int top=-1;
//     int queueArr[m];
//     int front=0,rear=-1;

//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         stackArr[++top]=x;
//     }
//     for(int i=0;i<m;i++){
//         int x;
//         cin>>x;
//         queueArr[++rear]=x;
//     }
//     if(n!=m){
//         cout<<"NO\n";
//         return 0;
//     }
//     while(top>=0 && front<=rear){
//         if(stackArr[top] != queueArr[front]){
//             cout<<"NO\n";
//             return 0;
//         }
//         top--;
//         front++;
//     }
//     cout<<"YES\n";
//     return 0;
// }
// ------------3rd Question-------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         string s;
//         cin >> s;

//         stack<char> st;

//         for (char c : s) {
//             if (!st.empty()) {
//                 if ((st.top() == '1' && c == '0') ||
//                     (st.top() == '0' && c == '1')) {
//                     st.pop();
//                 } else {
//                     st.push(c);
//                 }
//             } else {
//                 st.push(c);
//             }
//         }
//         if (st.empty())
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }
// -------------------------4th Question------------------------
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int val) {
//         data = val;
//         prev = next = NULL;
//     }
// };
// Node* head = NULL;
// Node* tail = NULL;
// int sz = 0;
// void printForward() {
//     cout << "L -> ";
//     Node* temp = head;
//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void printBackward() {
//     cout << "R -> ";
//     Node* temp = tail;
//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->prev;
//     }
//     cout << endl;
// }
// void insertAtIndex(int idx, int val) {
//     if (idx < 0 || idx > sz) {
//         cout << "Invalid\n";
//         return;
//     }
//     Node* newNode = new Node(val);
//     if (idx == 0) {
//         if (head == NULL) {
//             head = tail = newNode;
//         } else {
//             newNode->next = head;
//             head->prev = newNode;
//             head = newNode;
//         }
//     }
//     else if (idx == sz) {
//         tail->next = newNode;
//         newNode->prev = tail;
//         tail = newNode;
//     }
//     else {
//         Node* curr = head;
//         for (int i = 0; i < idx - 1; i++) {
//             curr = curr->next;
//         }
//         newNode->next = curr->next;
//         newNode->prev = curr;
//         curr->next->prev = newNode;
//         curr->next = newNode;
//     }
//     sz++;
//     printForward();
//     printBackward();
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int X, V;
//         cin >> X >> V;
//         insertAtIndex(X, V);
//     }
//     return 0;
// }
// ------------------------5th Question--------------------------
#include <bits/stdc++.h>
using namespace std;

struct Node {
    string data;
    Node* prev;
    Node* next;

    Node(string val) {
        data = val;
        prev = next = NULL;
    }
};
Node* head = NULL;
Node* tail = NULL;
Node* current = NULL;
void insertNode(string val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
Node* searchNode(string val) {
    Node* temp = head;
    while (temp) {
        if (temp->data == val)
            return temp;
        temp = temp->next;
    }
    return NULL;
}
int main() {
    string s;
    while (cin >> s) {
        if (s == "end") break;
        insertNode(s);
    }
    current = head;
    int t;
    cin >> t;
    while (t--) {
        string cmd;
        cin >> cmd;
        if (cmd == "visit") {
            string addr;
            cin >> addr;
            Node* found = searchNode(addr);
            if (found) {
                current = found;
                cout << current->data << "\n";
            } else {
                cout << "Not Available\n";
            }
        }
        else if (cmd == "next") {
            if (current && current->next) {
                current = current->next;
                cout << current->data << "\n";
            } else {
                cout << "Not Available\n";
            }
        }
        else if (cmd == "prev") {
            if (current && current->prev) {
                current = current->prev;
                cout << current->data << "\n";
            } else {
                cout << "Not Available\n";
            }
        }
    }
    return 0;
}

// // // // // // // // #include <bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // struct Node{
// // // // // // // //     int val;
// // // // // // // //     Node* left;
// // // // // // // //     Node* right;
// // // // // // // //     Node(int v){
// // // // // // // //         val=v;
// // // // // // // //         left=right=nullptr;
// // // // // // // //     }
// // // // // // // // };
// // // // // // // // Node* buildTree(vector<int>&level){
// // // // // // // //     if(level.empty() || level[0]==-1){
// // // // // // // //         return nullptr;
// // // // // // // //     }
// // // // // // // //     Node* root =new Node(level[0]);
// // // // // // // //     queue<Node*>q;
// // // // // // // //     q.push(root);
// // // // // // // //     int i = 1;
// // // // // // // //     while (!q.empty() && i < level.size()) {
// // // // // // // //         Node* curr = q.front();
// // // // // // // //         q.pop();
// // // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // // //             curr->left = new Node(level[i]);
// // // // // // // //             q.push(curr->left);
// // // // // // // //         }
// // // // // // // //         i++;
// // // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // // //             curr->right = new Node(level[i]);
// // // // // // // //             q.push(curr->right);
// // // // // // // //         }
// // // // // // // //         i++;
// // // // // // // //     }
// // // // // // // //     return root;
// // // // // // // // }
// // // // // // // // void getLeafNodes(Node* root, vector<int>& leaves) {
// // // // // // // //     if (!root) return;
// // // // // // // //     if (!root->left && !root->right) {
// // // // // // // //         leaves.push_back(root->val);
// // // // // // // //         return;
// // // // // // // //     }
// // // // // // // //     getLeafNodes(root->left, leaves);
// // // // // // // //     getLeafNodes(root->right, leaves);
// // // // // // // // }
// // // // // // // // int main() {
// // // // // // // //     vector<int> level;
// // // // // // // //     int x;
// // // // // // // //     while (cin >> x) {
// // // // // // // //         level.push_back(x);
// // // // // // // //     }
// // // // // // // //     Node* root = buildTree(level);
// // // // // // // //     vector<int> leaves;
// // // // // // // //     getLeafNodes(root, leaves);
// // // // // // // //     sort(leaves.begin(), leaves.end(), greater<int>());
// // // // // // // //     for (int val : leaves)
// // // // // // // //         cout << val << " ";
// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // struct Node{
// // // // // // //     int val;
// // // // // // //     Node* left;
// // // // // // //     Node* right;
// // // // // // //     Node(int v){
// // // // // // //         val=v;
// // // // // // //         left=right=nullptr;
// // // // // // //     }
// // // // // // // };
// // // // // // // Node* buildTree(vector<int>& level) {
// // // // // // //     if (level.empty() || level[0] == -1)
// // // // // // //         return nullptr;

// // // // // // //     Node* root = new Node(level[0]);
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);

// // // // // // //     size_t i = 1;
// // // // // // //     while (!q.empty() && i < level.size()) {
// // // // // // //         Node* curr = q.front();
// // // // // // //         q.pop();

// // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // //             curr->left = new Node(level[i]);
// // // // // // //             q.push(curr->left);
// // // // // // //         }
// // // // // // //         i++;

// // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // //             curr->right = new Node(level[i]);
// // // // // // //             q.push(curr->right);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //     }

// // // // // // //     return root;
// // // // // // // }
// // // // // // // int getDepth(Node* root) {
// // // // // // //     int depth = 0;
// // // // // // //     while (root) {
// // // // // // //         depth++;
// // // // // // //         root = root->left;
// // // // // // //     }
// // // // // // //     return depth;
// // // // // // // }
// // // // // // // bool isPerfectUtil(Node* root, int depth, int level = 1) {
// // // // // // //     if (!root)
// // // // // // //         return true;
// // // // // // //     if (!root->left && !root->right)
// // // // // // //         return depth == level;
// // // // // // //     if (!root->left || !root->right)
// // // // // // //         return false;
// // // // // // //     return isPerfectUtil(root->left, depth, level + 1) &&
// // // // // // //            isPerfectUtil(root->right, depth, level + 1);
// // // // // // // }
// // // // // // // bool isPerfect(Node* root) {
// // // // // // //     int depth = getDepth(root);
// // // // // // //     return isPerfectUtil(root, depth);
// // // // // // // }
// // // // // // // int main() {
// // // // // // //     vector<int> level;
// // // // // // //     int x;
// // // // // // //     while (cin >> x) {
// // // // // // //         level.push_back(x);
// // // // // // //     }

// // // // // // //     Node* root = buildTree(level);

// // // // // // //     if (isPerfect(root))
// // // // // // //         cout << "YES";
// // // // // // //     else
// // // // // // //         cout << "NO";
// // // // // // //     return 0;
// // // // // // // }
// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // struct Node {
// // // // // // //     int val;
// // // // // // //     Node* left;
// // // // // // //     Node* right;

// // // // // // //     Node(int v) {
// // // // // // //         val = v;
// // // // // // //         left = right = nullptr;
// // // // // // //     }
// // // // // // // };
// // // // // // // Node* buildTree(vector<int>& level) {
// // // // // // //     if (level.empty() || level[0] == -1)
// // // // // // //         return nullptr;
// // // // // // //     Node* root = new Node(level[0]);
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);
// // // // // // //     size_t i = 1;
// // // // // // //     while (!q.empty() && i < level.size()) {
// // // // // // //         Node* curr = q.front();
// // // // // // //         q.pop();
// // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // //             curr->left = new Node(level[i]);
// // // // // // //             q.push(curr->left);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // //             curr->right = new Node(level[i]);
// // // // // // //             q.push(curr->right);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //     }
// // // // // // //     return root;
// // // // // // // }

// // // // // // // int main() {
// // // // // // //     string line;
// // // // // // //     getline(cin, line);
// // // // // // //     stringstream s(line);
// // // // // // //     int x;
// // // // // // //     vector<int> levelOrder;
// // // // // // //     while (s >> x) {
// // // // // // //         levelOrder.push_back(x);
// // // // // // //     }

// // // // // // //     int X;
// // // // // // //     cin >> X;
// // // // // // //     Node* root = buildTree(levelOrder);
// // // // // // //     if (!root) {
// // // // // // //         cout << "Invalid";
// // // // // // //         return 0;
// // // // // // //     }
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);
// // // // // // //     int currLevel = 0;
// // // // // // //     bool found = false;
// // // // // // //     while (!q.empty()) {
// // // // // // //         int sz = q.size();
// // // // // // //         if (currLevel == X) {
// // // // // // //             found = true;
// // // // // // //             while (sz--) {
// // // // // // //                 Node* curr = q.front();
// // // // // // //                 q.pop();
// // // // // // //                 cout << curr->val << " ";
// // // // // // //             }
// // // // // // //             break;
// // // // // // //         }
// // // // // // //         while (sz--) {
// // // // // // //             Node* curr = q.front();
// // // // // // //             q.pop();
// // // // // // //             if (curr->left) q.push(curr->left);
// // // // // // //             if (curr->right) q.push(curr->right);
// // // // // // //         }
// // // // // // //         currLevel++;
// // // // // // //     }
// // // // // // //     if (!found)
// // // // // // //         cout << "Invalid";
// // // // // // //     return 0;
// // // // // // // }
// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // struct Node {
// // // // // // //     int val;
// // // // // // //     Node* left;
// // // // // // //     Node* right;
// // // // // // //     Node(int v) {
// // // // // // //         val = v;
// // // // // // //         left = right = nullptr;
// // // // // // //     }
// // // // // // // };
// // // // // // // Node* buildTree(const vector<int>& level) {
// // // // // // //     if (level.empty() || level[0] == -1) return nullptr;
// // // // // // //     Node* root = new Node(level[0]);
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);
// // // // // // //     size_t i = 1;
// // // // // // //     while (!q.empty() && i < level.size()) {
// // // // // // //         Node* curr = q.front(); q.pop();
// // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // //             curr->left = new Node(level[i]);
// // // // // // //             q.push(curr->left);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // //             curr->right = new Node(level[i]);
// // // // // // //             q.push(curr->right);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //     }
// // // // // // //     return root;
// // // // // // // }
// // // // // // // void printLevel(Node* root, int X) {
// // // // // // //     if (!root || X < 0) {
// // // // // // //         cout << "Invalid";
// // // // // // //         return;
// // // // // // //     }
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);
// // // // // // //     int currLevel = 0;
// // // // // // //     while (!q.empty()) {
// // // // // // //         int sz = q.size();
// // // // // // //         vector<int> levelNodes;
// // // // // // //         for (int i = 0; i < sz; i++) {
// // // // // // //             Node* curr = q.front(); q.pop();
// // // // // // //             if (currLevel == X) levelNodes.push_back(curr->val);
// // // // // // //             if (curr->left) q.push(curr->left);
// // // // // // //             if (curr->right) q.push(curr->right);
// // // // // // //         }
// // // // // // //         if (currLevel == X) {
// // // // // // //             if (levelNodes.empty()) {
// // // // // // //                 cout << "Invalid";
// // // // // // //             } else {
// // // // // // //                 for (size_t i = 0; i < levelNodes.size(); i++) {
// // // // // // //                     if (i > 0) cout << " ";
// // // // // // //                     cout << levelNodes[i];
// // // // // // //                 }
// // // // // // //             }
// // // // // // //             return;
// // // // // // //         }
// // // // // // //         currLevel++;
// // // // // // //     }
// // // // // // //     cout << "Invalid";
// // // // // // // }
// // // // // // // int main() {
// // // // // // //     string line;
// // // // // // //     getline(cin, line);
// // // // // // //     stringstream ss(line);
// // // // // // //     int x;
// // // // // // //     vector<int> levelOrder;
// // // // // // //     while (ss >> x) levelOrder.push_back(x);
// // // // // // //     int X;
// // // // // // //     cin >> X;
// // // // // // //     Node* root = buildTree(levelOrder);
// // // // // // //     printLevel(root, X);
// // // // // // //     return 0;
// // // // // // // }
// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // struct Node {
// // // // // // //     int val;
// // // // // // //     Node* left;
// // // // // // //     Node* right;
// // // // // // //     Node(int v) : val(v), left(nullptr), right(nullptr) {}
// // // // // // // };
// // // // // // // Node* buildTree(const vector<int>& level) {
// // // // // // //     if (level.empty() || level[0] == -1) return nullptr;
// // // // // // //     Node* root = new Node(level[0]);
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);
// // // // // // //     size_t i = 1;
// // // // // // //     while (!q.empty() && i < level.size()) {
// // // // // // //         Node* curr = q.front(); q.pop();
// // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // //             curr->left = new Node(level[i]);
// // // // // // //             q.push(curr->left);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //         if (i < level.size() && level[i] != -1) {
// // // // // // //             curr->right = new Node(level[i]);
// // // // // // //             q.push(curr->right);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //     }
// // // // // // //     return root;
// // // // // // // }
// // // // // // // void printLevel(Node* root, int X) {
// // // // // // //     if (!root || X < 0) {
// // // // // // //         cout << "Invalid";
// // // // // // //         return;
// // // // // // //     }
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);
// // // // // // //     int currLevel = 0;
// // // // // // //     while (!q.empty()) {
// // // // // // //         int sz = q.size();
// // // // // // //         if (currLevel == X) {
// // // // // // //             for (int i = 0; i < sz; i++) {
// // // // // // //                 if (i > 0) cout << " ";
// // // // // // //                 cout << q.front()->val;
// // // // // // //                 q.pop();
// // // // // // //             }
// // // // // // //             return;
// // // // // // //         }
// // // // // // //         for (int i = 0; i < sz; i++) {
// // // // // // //             Node* curr = q.front(); q.pop();
// // // // // // //             if (curr->left) q.push(curr->left);
// // // // // // //             if (curr->right) q.push(curr->right);
// // // // // // //         }
// // // // // // //         currLevel++;
// // // // // // //     }
// // // // // // //     cout << "Invalid";
// // // // // // // }
// // // // // // // int main() {
// // // // // // //     string line;
// // // // // // //     getline(cin, line);
// // // // // // //     stringstream ss(line);
// // // // // // //     vector<int> levelOrder;
// // // // // // //     int x;
// // // // // // //     while (ss >> x) levelOrder.push_back(x);
// // // // // // //     int X;
// // // // // // //     cin >> X;
// // // // // // //     Node* root = buildTree(levelOrder);
// // // // // // //     printLevel(root, X);
// // // // // // //     return 0;
// // // // // // // }
// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // struct Node {
// // // // // // //     int data;
// // // // // // //     Node* left;
// // // // // // //     Node* right;

// // // // // // //     Node(int val) {
// // // // // // //         data = val;
// // // // // // //         left = right = nullptr;
// // // // // // //     }
// // // // // // // };
// // // // // // // Node* buildTree(vector<int>& arr) {
// // // // // // //     if (arr.empty() || arr[0] == -1) return nullptr;
// // // // // // //     Node* root = new Node(arr[0]);
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);
// // // // // // //     int i = 1;
// // // // // // //     while (!q.empty() && i < arr.size()) {
// // // // // // //         Node* cur = q.front();
// // // // // // //         q.pop();

// // // // // // //         if (arr[i] != -1) {
// // // // // // //             cur->left = new Node(arr[i]);
// // // // // // //             q.push(cur->left);
// // // // // // //         }
// // // // // // //         i++;

// // // // // // //         if (i < arr.size() && arr[i] != -1) {
// // // // // // //             cur->right = new Node(arr[i]);
// // // // // // //             q.push(cur->right);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //     }
// // // // // // //     return root;
// // // // // // // }
// // // // // // // bool isLeaf(Node* node) {
// // // // // // //     return node && !node->left && !node->right;
// // // // // // // }
// // // // // // // void printOuterTree(Node* root) {
// // // // // // //     if (!root) return;
// // // // // // //     vector<int> leftBoundary, rightBoundary;
// // // // // // //     Node* cur = root->left;
// // // // // // //     while (cur) {
// // // // // // //         if (!isLeaf(cur))
// // // // // // //             leftBoundary.push_back(cur->data);
// // // // // // //         cur = cur->left ? cur->left : cur->right;
// // // // // // //     }
// // // // // // //     cur = root->right;
// // // // // // //     while (cur) {
// // // // // // //         if (!isLeaf(cur))
// // // // // // //             rightBoundary.push_back(cur->data);
// // // // // // //         cur = cur->right ? cur->right : cur->left;
// // // // // // //     }
// // // // // // //     cur = root;
// // // // // // //     while (cur->left)
// // // // // // //         cur = cur->left;
// // // // // // //     int leftLeaf = cur->data;
// // // // // // //     cur = root;
// // // // // // //     while (cur->right)
// // // // // // //         cur = cur->right;
// // // // // // //     int rightLeaf = cur->data;
// // // // // // //     cout << leftLeaf << " ";
// // // // // // //     for (int i = leftBoundary.size() - 1; i >= 0; i--)
// // // // // // //         cout << leftBoundary[i] << " ";
// // // // // // //     cout << root->data << " ";
// // // // // // //     for (int val : rightBoundary)
// // // // // // //         cout << val << " ";
// // // // // // //     cout << rightLeaf;
// // // // // // // }
// // // // // // // int main() {
// // // // // // //     vector<int> levelOrder;
// // // // // // //     int x;
// // // // // // //     while (cin >> x)
// // // // // // //         levelOrder.push_back(x);
// // // // // // //     Node* root = buildTree(levelOrder);
// // // // // // //     printOuterTree(root);

// // // // // // //     return 0;
// // // // // // // }
// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // struct Node {
// // // // // // //     int data;
// // // // // // //     Node *left, *right;
// // // // // // //     Node(int v) : data(v), left(nullptr), right(nullptr) {}
// // // // // // // };

// // // // // // // Node* buildTree(vector<int>& arr) {
// // // // // // //     if (arr.empty() || arr[0] == -1) return nullptr;

// // // // // // //     Node* root = new Node(arr[0]);
// // // // // // //     queue<Node*> q;
// // // // // // //     q.push(root);

// // // // // // //     int i = 1;
// // // // // // //     while (!q.empty() && i < arr.size()) {
// // // // // // //         Node* cur = q.front(); q.pop();

// // // // // // //         if (arr[i] != -1) {
// // // // // // //             cur->left = new Node(arr[i]);
// // // // // // //             q.push(cur->left);
// // // // // // //         }
// // // // // // //         i++;

// // // // // // //         if (i < arr.size() && arr[i] != -1) {
// // // // // // //             cur->right = new Node(arr[i]);
// // // // // // //             q.push(cur->right);
// // // // // // //         }
// // // // // // //         i++;
// // // // // // //     }
// // // // // // //     return root;
// // // // // // // }
// // // // // // // vector<int> getLeftBoundary(Node* root) {
// // // // // // //     vector<int> left;
// // // // // // //     Node* cur = root;
// // // // // // //     while (cur) {
// // // // // // //         left.push_back(cur->data);
// // // // // // //         if (cur->left)
// // // // // // //             cur = cur->left;
// // // // // // //         else
// // // // // // //             cur = cur->right;
// // // // // // //     }
// // // // // // //     reverse(left.begin(), left.end()); // bottom → up
// // // // // // //     return left;
// // // // // // // }
// // // // // // // vector<int> getRightBoundary(Node* root) {
// // // // // // //     vector<int> right;
// // // // // // //     Node* cur = root->right;
// // // // // // //     while (cur) {
// // // // // // //         right.push_back(cur->data);
// // // // // // //         if (cur->right)
// // // // // // //             cur = cur->right;
// // // // // // //         else
// // // // // // //             cur = cur->left;
// // // // // // //     }
// // // // // // //     return right;
// // // // // // // }
// // // // // // // int main() {
// // // // // // //     vector<int> arr;
// // // // // // //     int x;
// // // // // // //     while (cin >> x)
// // // // // // //         arr.push_back(x);
// // // // // // //     Node* root = buildTree(arr);
// // // // // // //     if (!root) return 0;
// // // // // // //     vector<int> left = getLeftBoundary(root);
// // // // // // //     vector<int> right = getRightBoundary(root);
// // // // // // //     for (int v : left) cout << v << " ";
// // // // // // //     for (int v : right) cout << v << " ";
// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;

// // // // // // struct Node {
// // // // // //     int data;
// // // // // //     Node* left;
// // // // // //     Node* right;
// // // // // //     Node(int v) {
// // // // // //         data = v;
// // // // // //         left = NULL;
// // // // // //         right = NULL;
// // // // // //     }
// // // // // // };
// // // // // // Node* buildTree(vector<int>& arr) {
// // // // // //     if (arr.size() == 0 || arr[0] == -1) return NULL;

// // // // // //     Node* root = new Node(arr[0]);
// // // // // //     queue<Node*> q;
// // // // // //     q.push(root);

// // // // // //     int i = 1;
// // // // // //     while (!q.empty() && i < arr.size()) {
// // // // // //         Node* cur = q.front();
// // // // // //         q.pop();

// // // // // //         if (arr[i] != -1) {
// // // // // //             cur->left = new Node(arr[i]);
// // // // // //             q.push(cur->left);
// // // // // //         }
// // // // // //         i++;

// // // // // //         if (i < arr.size() && arr[i] != -1) {
// // // // // //             cur->right = new Node(arr[i]);
// // // // // //             q.push(cur->right);
// // // // // //         }
// // // // // //         i++;
// // // // // //     }
// // // // // //     return root;
// // // // // // }
// // // // // // int main() {
// // // // // //     vector<int> arr;
// // // // // //     int x;
// // // // // //     while (cin >> x) {
// // // // // //         arr.push_back(x);
// // // // // //     }
// // // // // //     Node* root = buildTree(arr);
// // // // // //     if (root == NULL) return 0;
// // // // // //     Node* cur = root;
// // // // // //     while (cur != NULL) {
// // // // // //         cout << cur->data << " ";
// // // // // //         if (cur->left != NULL)
// // // // // //             cur = cur->left;
// // // // // //         else
// // // // // //             cur = cur->right;
// // // // // //     }
// // // // // //     return 0;
// // // // // // }
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // struct Node {
// // // // //     int data;
// // // // //     Node* left;
// // // // //     Node* right;
// // // // //     Node(int v) {
// // // // //         data = v;
// // // // //         left = NULL;
// // // // //         right = NULL;
// // // // //     }
// // // // // };

// // // // // Node* buildTree(vector<int>& arr) {
// // // // //     if (arr.size() == 0 || arr[0] == -1) return NULL;

// // // // //     Node* root = new Node(arr[0]);
// // // // //     queue<Node*> q;
// // // // //     q.push(root);

// // // // //     int i = 1;
// // // // //     while (!q.empty() && i < arr.size()) {
// // // // //         Node* cur = q.front();
// // // // //         q.pop();

// // // // //         if (arr[i] != -1) {
// // // // //             cur->left = new Node(arr[i]);
// // // // //             q.push(cur->left);
// // // // //         }
// // // // //         i++;

// // // // //         if (i < arr.size() && arr[i] != -1) {
// // // // //             cur->right = new Node(arr[i]);
// // // // //             q.push(cur->right);
// // // // //         }
// // // // //         i++;
// // // // //     }
// // // // //     return root;
// // // // // }

// // // // // int main() {
// // // // //     vector<int> arr;
// // // // //     int x;
// // // // //     while (cin >> x) arr.push_back(x);
// // // // //     Node* root = buildTree(arr);
// // // // //     if (root == NULL) return 0;
// // // // //     if (root->left == NULL && root->right != NULL) {
// // // // //         Node* cur = root;
// // // // //         while (cur != NULL) {
// // // // //             cout << cur->data << " ";
// // // // //             cur = cur->right ? cur->right : cur->left;
// // // // //         }
// // // // //         return 0;
// // // // //     }
// // // // //     if (root->left != NULL && root->right == NULL) {
// // // // //         vector<int> path;
// // // // //         Node* cur = root;
// // // // //         while (cur != NULL) {
// // // // //             path.push_back(cur->data);
// // // // //             cur = cur->left ? cur->left : cur->right;
// // // // //         }
// // // // //         reverse(path.begin(), path.end());
// // // // //         for (int v : path) cout << v << " ";
// // // // //         return 0;
// // // // //     }
// // // // //     vector<int> leftPath;
// // // // //     Node* cur = root;
// // // // //     while (cur != NULL) {
// // // // //         leftPath.push_back(cur->data);
// // // // //         cur = cur->left ? cur->left : cur->right;
// // // // //     }
// // // // //     reverse(leftPath.begin(), leftPath.end());
// // // // //     vector<int> rightPath;
// // // // //     cur = root->right;
// // // // //     while (cur != NULL) {
// // // // //         rightPath.push_back(cur->data);
// // // // //         cur = cur->right ? cur->right : cur->left;
// // // // //     }
// // // // //     for (int v : leftPath) cout << v << " ";
// // // // //     for (int v : rightPath) cout << v << " ";
// // // // //     return 0;
// // // // // }
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // struct TreeNode {
// // // // //     int val;
// // // // //     TreeNode* left;
// // // // //     TreeNode* right;
// // // // //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// // // // // };
// // // // // TreeNode* buildTree(vector<int>& levelOrder) {
// // // // //     if (levelOrder.empty() || levelOrder[0] == -1) {
// // // // //         return nullptr;
// // // // //     }
    
// // // // //     TreeNode* root = new TreeNode(levelOrder[0]);
// // // // //     queue<TreeNode*> q;
// // // // //     q.push(root);
    
// // // // //     int i = 1;
// // // // //     while (!q.empty() && i < levelOrder.size()) {
// // // // //         TreeNode* curr = q.front();
// // // // //         q.pop();
// // // // //         if (i < levelOrder.size()) {
// // // // //             if (levelOrder[i] != -1) {
// // // // //                 curr->left = new TreeNode(levelOrder[i]);
// // // // //                 q.push(curr->left);
// // // // //             }
// // // // //             i++;
// // // // //         }
// // // // //         if (i < levelOrder.size()) {
// // // // //             if (levelOrder[i] != -1) {
// // // // //                 curr->right = new TreeNode(levelOrder[i]);
// // // // //                 q.push(curr->right);
// // // // //             }
// // // // //             i++;
// // // // //         }
// // // // //     }
    
// // // // //     return root;
// // // // // }
// // // // // void printLevel(TreeNode* root, int X) {
// // // // //     if (root == nullptr) {
// // // // //         cout << "Invalid" << endl;
// // // // //         return;
// // // // //     }
// // // // //     if (X < 0) {
// // // // //         cout << "Invalid" << endl;
// // // // //         return;
// // // // //     }
    
// // // // //     queue<TreeNode*> q;
// // // // //     q.push(root);
// // // // //     int currentLevel = 0;
// // // // //     while (!q.empty()) {
// // // // //         int levelSize = q.size();
// // // // //         if (currentLevel == X) {
// // // // //             vector<int> result;
// // // // //             for (int i = 0; i < levelSize; i++) {
// // // // //                 TreeNode* node = q.front();
// // // // //                 q.pop();
// // // // //                 result.push_back(node->val);
// // // // //             }
// // // // //             for (int i = 0; i < result.size(); i++) {
// // // // //                 if (i > 0) cout << " ";
// // // // //                 cout << result[i];
// // // // //             }
// // // // //             cout << endl;
// // // // //             return ;
// // // // //         }
        
// // // // //         for (int i = 0; i < levelSize; i++) {
// // // // //             TreeNode* node = q.front();
// // // // //             q.pop();
            
// // // // //             if (node->left != nullptr) {
// // // // //                 q.push(node->left);
// // // // //             }
// // // // //             if (node->right != nullptr) {
// // // // //                 q.push(node->right);
// // // // //             }
// // // // //         }
        
// // // // //         currentLevel++;
// // // // //     }
// // // // //     cout << "Invalid" << endl;
// // // // // }

// // // // // int main() {

// // // // //     vector<int> levelOrder;
// // // // //     int val;
    
// // // // //     while (cin >> val) {
// // // // //         levelOrder.push_back(val);
// // // // //         if (cin.peek() == '\n') break;
// // // // //     }
// // // // //     int X;
// // // // //     cin >> X;
// // // // //     TreeNode* root = buildTree(levelOrder);
// // // // //     printLevel(root, X);
// // // // //     return 0;
// // // // // }
// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // // struct TreeNode {
// // // //     int val;
// // // //     TreeNode* left;
// // // //     TreeNode* right;
// // // //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// // // // };

// // // // TreeNode* buildTree(vector<int>& arr) {
// // // //     if (arr.empty() || arr[0] == -1) {
// // // //         return nullptr;
// // // //     }
    
// // // //     TreeNode* root = new TreeNode(arr[0]);
// // // //     queue<TreeNode*> q;
// // // //     q.push(root);
    
// // // //     int i = 1;
// // // //     while (!q.empty() && i < (int)arr.size()) {
// // // //         TreeNode* curr = q.front();
// // // //         q.pop();
// // // //         if (i < (int)arr.size()) {
// // // //             if (arr[i] != -1) {
// // // //                 curr->left = new TreeNode(arr[i]);
// // // //                 q.push(curr->left);
// // // //             }
// // // //             i++;
// // // //         }
// // // //         if (i < (int)arr.size()) {
// // // //             if (arr[i] != -1) {
// // // //                 curr->right = new TreeNode(arr[i]);
// // // //                 q.push(curr->right);
// // // //             }
// // // //             i++;
// // // //         }
// // // //     }   
// // // //     return root;
// // // // }
// // // // void printLevel(TreeNode* root, int X) {
// // // //     if (root == nullptr || X < 0) {
// // // //         cout << "Invalid" << endl;
// // // //         return;
// // // //     }
// // // //     queue<TreeNode*> q;
// // // //     q.push(root);
// // // //     int currentLevel = 0;
// // // //     while (!q.empty()) {
// // // //         int levelSize = q.size();
// // // //         if (currentLevel == X) {
// // // //             vector<int> result;
// // // //             for (int i = 0; i < levelSize; i++) {
// // // //                 TreeNode* node = q.front();
// // // //                 q.pop();
// // // //                 result.push_back(node->val);
// // // //             }
// // // //             for (int i = 0; i < (int)result.size(); i++) {
// // // //                 if (i > 0) cout << " ";
// // // //                 cout << result[i];
// // // //             }
// // // //             cout << endl;
// // // //             return;
// // // //         }
// // // //         for (int i = 0; i < levelSize; i++) {
// // // //             TreeNode* node = q.front();
// // // //             q.pop();
            
// // // //             if (node->left != nullptr) {
// // // //                 q.push(node->left);
// // // //             }
// // // //             if (node->right != nullptr) {
// // // //                 q.push(node->right);
// // // //             }
// // // //         }
        
// // // //         currentLevel++;
// // // //     }
// // // //     cout << "Invalid" << endl;
// // // // }

// // // // int main() {
// // // //     string line;
// // // //     if (!getline(cin, line)) {
// // // //         cout << "Invalid" << endl;
// // // //         return 0;
// // // //     }
// // // //     vector<int> arr;
// // // //     stringstream ss(line);
// // // //     int val;
// // // //     while (ss >> val) {
// // // //         arr.push_back(val);
// // // //     }
// // // //     int X;
// // // //     if (!(cin >> X)) {
// // // //         cout << "Invalid" << endl;
// // // //         return 0;
// // // //     }
// // // //     if (arr.empty()) {
// // // //         cout << "Invalid" << endl;
// // // //         return 0;
// // // //     }
// // // //     TreeNode* root = buildTree(arr);
// // // //     printLevel(root, X);
// // // //     return 0;
// // // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // struct TreeNode {
// // //     int val;
// // //     TreeNode* left;
// // //     TreeNode* right;
// // //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// // // };

// // // TreeNode* buildTree(vector<int>& arr) {
// // //     if (arr.empty() || arr[0] == -1) {
// // //         return nullptr;
// // //     }
    
// // //     TreeNode* root = new TreeNode(arr[0]);
// // //     queue<TreeNode*> q;
// // //     q.push(root);
    
// // //     int i = 1;
// // //     while (!q.empty() && i < (int)arr.size()) {
// // //         TreeNode* curr = q.front();
// // //         q.pop();
        
// // //         // Left child
// // //         if (i < (int)arr.size()) {
// // //             if (arr[i] != -1) {
// // //                 curr->left = new TreeNode(arr[i]);
// // //                 q.push(curr->left);
// // //             }
// // //             i++;
// // //         }
        
// // //         // Right child
// // //         if (i < (int)arr.size()) {
// // //             if (arr[i] != -1) {
// // //                 curr->right = new TreeNode(arr[i]);
// // //                 q.push(curr->right);
// // //             }
// // //             i++;
// // //         }
// // //     }
    
// // //     return root;
// // // }
// // // bool isLeaf(TreeNode* node) {
// // //     return node != nullptr && node->left == nullptr && node->right == nullptr;
// // // }
// // // int sumNonLeafNodes(TreeNode* root) {
// // //     if (root == nullptr) {
// // //         return 0;
// // //     }
    
// // //     int sum = 0;
// // //     queue<TreeNode*> q;
// // //     q.push(root);
    
// // //     while (!q.empty()) {
// // //         TreeNode* node = q.front();
// // //         q.pop();
// // //         if (!isLeaf(node)) {
// // //             sum += node->val;
// // //         }
// // //         if (node->left != nullptr) {
// // //             q.push(node->left);
// // //         }
// // //         if (node->right != nullptr) {
// // //             q.push(node->right);
// // //         }
// // //     }
    
// // //     return sum;
// // // }

// // // int main() {
// // //     string line;
// // //     getline(cin, line);
// // //     vector<int> arr;
// // //     stringstream ss(line);
// // //     int val;
// // //     while (ss >> val) {
// // //         arr.push_back(val);
// // //     }
// // //     if (arr.empty()) {
// // //         cout << 0 << endl;
// // //         return 0;
// // //     }
// // //     TreeNode* root = buildTree(arr);
// // //     int result = sumNonLeafNodes(root);
// // //     cout << result << endl;
    
// // //     return 0;
// // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // struct TreeNode {
// // //     int val;
// // //     TreeNode* left;
// // //     TreeNode* right;
// // //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// // // };
// // // TreeNode* buildTree(const vector<int>& arr) {
// // //     if (arr.empty() || arr[0] == -1) return nullptr;

// // //     TreeNode* root = new TreeNode(arr[0]);
// // //     queue<TreeNode*> q;
// // //     q.push(root);

// // //     int i = 1; 
// // //     while (!q.empty() && i < arr.size()) {
// // //         TreeNode* node = q.front(); q.pop();
// // //         if (i < arr.size()) {
// // //             if (arr[i] != -1) {
// // //                 node->left = new TreeNode(arr[i]);
// // //                 q.push(node->left);
// // //             }
// // //             i++;
// // //         }
// // //         if (i < arr.size()) {
// // //             if (arr[i] != -1) {
// // //                 node->right = new TreeNode(arr[i]);
// // //                 q.push(node->right);
// // //             }
// // //             i++;
// // //         }
// // //     }

// // //     return root;
// // // }
// // // bool isLeaf(TreeNode* node) {
// // //     return node && !node->left && !node->right;
// // // }
// // // int sumNonLeafNodes(TreeNode* root) {
// // //     if (!root) return 0;
// // //     int sum = 0;
// // //     queue<TreeNode*> q;
// // //     q.push(root);

// // //     while (!q.empty()) {
// // //         TreeNode* node = q.front(); q.pop();
// // //         if (!isLeaf(node)) sum += node->val;
// // //         if (node->left) q.push(node->left);
// // //         if (node->right) q.push(node->right);
// // //     }
// // //     return sum;
// // // }

// // // int main() {
// // //     string line;
// // //     getline(cin, line);
// // //     stringstream ss(line);
// // //     vector<int> arr;
// // //     int val;
// // //     while (ss >> val) arr.push_back(val);

// // //     TreeNode* root = buildTree(arr);
// // //     cout << sumNonLeafNodes(root) << endl;

// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // struct TreeNode {
// //     int val;
// //     TreeNode* left;
// //     TreeNode* right;

// //     TreeNode(int x) {
// //         val = x;
// //         left = nullptr;
// //         right = nullptr;
// //     }
// // };

// // TreeNode* buildTree(const vector<int>& arr) {
// //     if (arr.empty() || arr[0] == -1) return nullptr;

// //     TreeNode* root = new TreeNode(arr[0]);
// //     queue<TreeNode*> q;
// //     q.push(root);

// //     int i = 1;

// //     while (!q.empty() && i < (int)arr.size()) {
// //         TreeNode* curr = q.front();
// //         q.pop();
// //         if (i < (int)arr.size() && arr[i] != -1) {
// //             curr->left = new TreeNode(arr[i]);
// //             q.push(curr->left);
// //         }
// //         i++;
// //         if (i < (int)arr.size() && arr[i] != -1) {
// //             curr->right = new TreeNode(arr[i]);
// //             q.push(curr->right);
// //         }
// //         i++;
// //     }

// //     return root;
// // }

// // void printLevel(TreeNode* root, int X) {
// //     if (!root || X < 0) {
// //         cout << "Invalid";
// //         return;
// //     }

// //     queue<TreeNode*> q;
// //     q.push(root);
// //     int level = 0;

// //     while (!q.empty()) {
// //         int size = q.size();

// //         if (level == X) {
// //             for (int i = 0; i < size; i++) {
// //                 cout << q.front()->val;
// //                 q.pop();
// //                 if (i < size - 1) cout << " ";
// //             }
// //             return;
// //         }

// //         for (int i = 0; i < size; i++) {
// //             TreeNode* node = q.front();
// //             q.pop();

// //             if (node->left) q.push(node->left);
// //             if (node->right) q.push(node->right);
// //         }

// //         level++;
// //     }

// //     cout << "Invalid";
// // }

// // void freeTree(TreeNode* root) {
// //     if (!root) return;
// //     freeTree(root->left);
// //     freeTree(root->right);
// //     delete root;
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     string line;
// //     getline(cin, line);

// //     vector<int> arr;
// //     stringstream ss(line);
// //     int x;
// //     while (ss >> x) {
// //         arr.push_back(x);
// //     }
// //     int X;
// //     cin >> X;

// //     TreeNode* root = buildTree(arr);
// //     printLevel(root, X);

// //     freeTree(root);
// //     return 0;
// // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     string line;
// //     if (!getline(cin, line)) {
// //         cout << "Invalid";
// //         return 0;
// //     }

// //     stringstream ss(line);
// //     vector<int> arr;
// //     int val;
// //     while (ss >> val) arr.push_back(val);

// //     int X;
// //     if (!(cin >> X)) {
// //         cout << "Invalid";
// //         return 0;
// //     }

// //     if (arr.empty() || arr[0] == -1 || X < 0) {
// //         cout << "Invalid";
// //         return 0;
// //     }

// //     queue<int> q;
// //     q.push(arr[0]);

// //     int idx = 1;
// //     int level = 0;

// //     while (!q.empty()) {
// //         int size = q.size();

// //         if (level == X) {
// //             for (int i = 0; i < size; i++) {
// //                 cout << q.front();
// //                 q.pop();
// //                 if (i < size - 1) cout << " ";
// //             }
// //             return 0;
// //         }

// //         for (int i = 0; i < size; i++) {
// //             q.pop();

// //             if (idx < (int)arr.size() && arr[idx] != -1)
// //                 q.push(arr[idx]);
// //             idx++;

// //             if (idx < (int)arr.size() && arr[idx] != -1)
// //                 q.push(arr[idx]);
// //             idx++;
// //         }

// //         level++;
// //     }

// //     cout << "Invalid";
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     string line;
//     getline(cin, line);
//     stringstream ss(line);
//     vector<int> arr;
//     int x;
//     while (ss >> x) arr.push_back(x);
//     if (arr.empty() || arr[0] == -1) {
//         cout << 0;
//         return 0;
//     }
//     queue<int> q;
//     q.push(arr[0]);
//     int idx = 1;
//     long long sum = 0;
//     while (!q.empty()) {
//         int curr = q.front();
//         q.pop();
//         bool hasLeft = false, hasRight = false;
//         if (idx < (int)arr.size() && arr[idx] != -1) {
//             q.push(arr[idx]);
//             hasLeft = true;
//         }
//         idx++;
//         if (idx < (int)arr.size() && arr[idx] != -1) {
//             q.push(arr[idx]);
//             hasRight = true;
//         }
//         idx++;
//         if (hasLeft || hasRight) {
//             sum += curr;
//         }
//     }

//     cout << sum;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string line;
//     getline(cin, line);
//     stringstream ss(line);
//     vector<int> arr;
//     int x;
//     while (ss >> x) arr.push_back(x);
//     int n = arr.size();
//     long long sum = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == -1) continue;

//         int left = 2 * i + 1;
//         int right = 2 * i + 2;

//         bool hasLeft = (left < n && arr[left] != -1);
//         bool hasRight = (right < n && arr[right] != -1);
//         if (hasLeft || hasRight) {
//             sum += arr[i];
//         }
//     }

//     cout << sum;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int val;
//     Node* left;
//     Node* right;
//     Node(int v) : val(v), left(nullptr), right(nullptr) {}
// };
// Node* buildTree(const vector<int>& level_order) {
//     if (level_order.empty() || level_order[0] == -1)
//         return nullptr;
    
//     Node* root = new Node(level_order[0]);
//     queue<Node*> q;
//     q.push(root);
//     int i = 1;

//     while (!q.empty() && i < level_order.size()) {
//         Node* node = q.front();
//         q.pop();

//         if (i < level_order.size() && level_order[i] != -1) {
//             node->left = new Node(level_order[i]);
//             q.push(node->left);
//         }
//         i++;

//         if (i < level_order.size() && level_order[i] != -1) {
//             node->right = new Node(level_order[i]);
//             q.push(node->right);
//         }
//         i++;
//     }

//     return root;
// }

// int sumWithoutLeaf(Node* root) {
//     if (!root) return 0;

//     int total = 0;
//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* node = q.front();
//         q.pop();

//         if (node->left || node->right)
//             total += node->val;

//         if (node->left) q.push(node->left);
//         if (node->right) q.push(node->right);
//     }

//     return total;
// }

// int main() {
//     vector<int> level_order;
//     int x;
//     while (cin >> x) {
//         level_order.push_back(x);
//     }

//     Node* root = buildTree(level_order);
//     cout << sumWithoutLeaf(root) << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};
Node* buildTree(const vector<int>& level) {
    if (level.empty() || level[0] == -1) return nullptr;

    Node* root = new Node(level[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < level.size()) {
        Node* curr = q.front(); q.pop();
        if (i < level.size() && level[i] != -1) {
            curr->left = new Node(level[i]);
            q.push(curr->left);
        }
        i++;
        if (i < level.size() && level[i] != -1) {
            curr->right = new Node(level[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}
void printLevelX(Node* root, int X) {
    if (!root) {
        cout << "Invalid\n";
        return;
    }

    queue<Node*> q;
    q.push(root);
    int level = 0;

    while (!q.empty()) {
        int sz = q.size();

        if (level == X) {
            for (int i = 0; i < sz; i++) {
                Node* node = q.front(); q.pop();
                cout << node->val;
                if (i != sz - 1) cout << " ";
            }
            cout << "\n";
            return;
        }

        for (int i = 0; i < sz; i++) {
            Node* node = q.front(); q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        level++;
    }
    cout << "Invalid\n";
}

int main() {
    vector<int> levelOrder;
    int val;
    while (cin >> val) {
        levelOrder.push_back(val);
    }
    int X = levelOrder.back();
    levelOrder.pop_back();
    Node* root = buildTree(levelOrder);
    printLevelX(root, X);

    return 0;
}

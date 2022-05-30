// https://code.ptit.edu.vn/student/question/DSA11004
// DUYỆT CÂY THEO MỨC

#include <bits/stdc++.h>
#define ll long long
#define II pair<int, int>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void MakeNode(Node *root, int n1, int n2, char c) {
    switch (c) {
        case 'L':
            root->left = new Node(n2);
            break;
        case 'R':
            root->right = new Node(n2);
            break;
    }
}

void Insert(Node *root, int n1, int n2, char c) {
    if (root == NULL)
        return;
    if (root->data == n1)
        MakeNode(root, n1, n2, c);
    else {
        Insert(root->left, n1, n2, c);
        Insert(root->right, n1, n2, c);
    }
}

void LevelOrder(Node *root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node *p = q.front();
        q.pop();
        cout << p->data << " ";
        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
}

void TestCase() {
    int n; cin >> n;
    Node *root = NULL;
    while (n--) {
        int n1, n2;
        char c;
        cin >> n1 >> n2 >> c;
        if (root == NULL) {
            root = new Node(n1);
        } 
        Insert(root, n1, n2, c);
    }
    LevelOrder(root);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
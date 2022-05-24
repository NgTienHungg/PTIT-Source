#include <bits/stdc++.h>
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

void ReverseLevelOrder(Node *root) {
    queue<Node*> q;
    q.push(root);
    stack<int> st;
    while (!q.empty()) {
        Node* p = q.front(); q.pop();
        st.push(p->data);
        if (p->right != NULL)
            q.push(p->right);
        if (p->left != NULL)
            q.push(p->left);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

void TestCase() {
    int n; cin >> n;
    Node *root = NULL;
    queue<Node*> q;
    while (n--) {
        int n1, n2;
        char c;
        cin >> n1 >> n2 >> c;
        if (root == NULL) {
            root = new Node(n1);
        } 
        Insert(root, n1, n2, c);
    }
    ReverseLevelOrder(root);
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
/*
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R
*/
// https://code.ptit.edu.vn/student/question/DSA11008
// KIỂM TRA NODE LÁ

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

void MakeNode(Node *root, int data, char c) {
    switch (c)
    {
    case 'L':
        root->left = new Node(data);
        break;
    case 'R':
        root->right = new Node(data);
        break;
    }
}

void Insert(Node *root, int x, int y, char c) {
    if (root == NULL)
        return;
    if (root->data == x)
        MakeNode(root, y, c);
    else {
        Insert(root->left, x, y, c);
        Insert(root->right, x, y, c);
    }
}

int CountLeaf(Node *root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return CountLeaf(root->left) + CountLeaf(root->right);
}

void TestCase() {
    int n; cin >> n;
    Node *root = NULL;
    while (n--) {
        int x, y; char c;
        cin >> x >> y >> c;
        if (root == NULL) {
            root = new Node(x);
        }
        Insert(root, x, y, c);
    }
    cout << (CountLeaf(root->left) == CountLeaf(root->right));
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
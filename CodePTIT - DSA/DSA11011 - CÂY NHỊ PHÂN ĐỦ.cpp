// https://code.ptit.edu.vn/student/question/DSA11011
// CÂY NHỊ PHÂN ĐỦ

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
    if (c == 'L')
        root->left = new Node(data);
    else
        root->right = new Node(data);
}

void Insert(Node *root, int x, int y, char c) {
    if (root == NULL) return;
    if (root->data == x)
        MakeNode(root, y, c);
    else {
        Insert(root->left, x, y, c);
        Insert(root->right, x, y, c);
    }
}

bool IsFullBinTree(Node *root) {
    if (root == NULL) return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    if (!(root->left != NULL && root->right != NULL))
        return false;
    return IsFullBinTree(root->left) && IsFullBinTree(root->right);
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
    cout << IsFullBinTree(root);
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
// https://code.ptit.edu.vn/student/question/DSA11012
// CÂY NHỊ PHÂN BẰNG NHAU

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

bool IsEqual(Node *A, Node *B) {
    if (A == NULL && B == NULL)
        return true;
    if (A != NULL && B != NULL && A->data == B->data)
        return IsEqual(A->left, B->left) && IsEqual(A->right, B->right);
    return false;
}

void TestCase() {
    Node *a = NULL;
    int n; cin >> n;
    while (n--) {
        int x, y; char c;
        cin >> x >> y >> c;
        if (a == NULL) {
            a = new Node(x);
        }
        Insert(a, x, y, c);
    }
    Node *b = NULL;
    int m; cin >> m;
    while(m--) {
        int x, y; char c;
        cin >> x >> y >> c;
        if (b == NULL) {
            b = new Node(x);
        }
        Insert(b, x, y, c);
    }
    cout << IsEqual(a, b);
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
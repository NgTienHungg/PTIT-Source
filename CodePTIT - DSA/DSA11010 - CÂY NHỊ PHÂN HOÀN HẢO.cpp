// https://code.ptit.edu.vn/student/question/DSA11010
// CÂY NHỊ PHÂN HOÀN HẢO

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

bool isPerfect;

void MakeNode(Node *root, int data, char c) {
    if (c == 'L')
        root->left = new Node(data);
    else
        root->right = new Node(data);
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
    if (!(root->left != NULL && root->right != NULL)) {
        isPerfect = false;
        return 0;
    }
    return CountLeaf(root->left) + CountLeaf(root->right);
}

void TestCase() {
    isPerfect = true;
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
    int cntLeft = CountLeaf(root->left), cntRight = CountLeaf(root->right);
    if (isPerfect && cntLeft == cntRight)
        cout << "Yes";
    else
        cout << "No";
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
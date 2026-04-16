#include <iostream>
using namespace std;

struct Node {
    char data;
    Node *left;
    Node *right;
};

int n;
Node arr[26];

void preorder(Node *n) {
    cout << n->data;
    if (n->left != nullptr)
        preorder(n->left);
    if (n->right != nullptr)
        preorder(n->right);
}

void inorder(Node *n) {
    if (n->left != nullptr)
        inorder(n->left);
    cout << n->data;
    if (n->right != nullptr)
        inorder(n->right);
}

void postorder(Node *n) {
    if (n->left != nullptr)
        postorder(n->left);
    if (n->right != nullptr)
        postorder(n->right);
    cout << n->data;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        arr[i].data = 'A' + i;
        arr[i].left = nullptr;
        arr[i].right = nullptr;
    }

    for (int i = 0; i < n; i++) {
        char x, l, r;
        cin >> x >> l >> r;

        if (l != '.')
            arr[x - 'A'].left = &arr[l - 'A'];

        if (r != '.')
            arr[x - 'A'].right = &arr[r - 'A'];
    }

    preorder(&arr[0]);
    cout << '\n';
    inorder(&arr[0]);
    cout << '\n';
    postorder(&arr[0]);

    return 0;
}

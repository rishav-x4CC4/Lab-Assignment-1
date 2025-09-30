#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

struct BSTRecursive {
    Node* root;
    BSTRecursive() { root = NULL; }

    Node* insert(Node* node, int val) {
        if(!node) return new Node(val);
        if(val < node->data) node->left = insert(node->left, val);
        else if(val > node->data) node->right = insert(node->right, val);
        return node;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    Node* search(Node* node, int key) {
        if(!node || node->data == key) return node;
        if(key < node->data) return search(node->left, key);
        return search(node->right, key);
    }

    Node* search(int key) {
        return search(root, key);
    }
};

int main() {
    BSTRecursive tree;
    int arr[] = {50, 30, 20, 40, 70, 60, 80};
    for(int x : arr) tree.insert(x);

    int key;
    cout<<"enter the key u want to search: ";
    cin>>key;
    Node* r = tree.search(key);
    if(r) cout << "Recursive: Found " << key << endl;
    else cout << "Recursive: Not Found" << endl;

    return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

struct BSTIterative {
    Node* root;
    BSTIterative() { root = NULL; }

    Node* insert(Node* node, int val) {
        if(!node) return new Node(val);
        if(val < node->data) node->left = insert(node->left, val);
        else if(val > node->data) node->right = insert(node->right, val);
        return node;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    Node* search(int key) {
        Node* node = root;
        while(node) {
            if(node->data == key) return node;
            if(key < node->data) node = node->left;
            else node = node->right;
        }
        return NULL;
    }
};

int main() {
    BSTIterative tree;
    int arr[] = {50, 30, 20, 40, 70, 60, 80};
    for(int x : arr) tree.insert(x);

    int key;
    cout<<"enter the key u want to search: ";
    cin>>key;
    Node* i = tree.search(key);
    if(i) cout << "Iterative: Found " << key << endl;
    else cout << "Iterative: Not Found" << endl;

    return 0;
}

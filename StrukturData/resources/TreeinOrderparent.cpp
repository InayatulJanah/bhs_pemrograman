#include <iostream>
using namespace std;

//Definisi struktur node
struct Node{
    int data;
    Node* left;
    Node* right;
    Node* parent;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
};

// fungsi untuk menambahkan node baru ke tree
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }

    Node* newNode = new Node(val);
    Node* current = root;
    Node* parent = nullptr;

    while (current != nullptr) {
        parent = current;
        if (val < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    newNode->parent = parent;
    if (val < parent->data) {
        parent->left = newNode;
    } else {
        parent->right = newNode;
    }
    return root;
}

// fungsi untuk menampilkan tree dalam urutan inorder
void inorder(Node* root) {
    if(root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root ->right);
    }
}

// fungsi untuk menemukan parent dari node tertentu
Node* findParent(Node* root, int val){
    Node* current = root;
    while (current != nullptr && current->data != val){
        if (val < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    return (current != nullptr) ? current->parent : nullptr;
}

// Fungsi Utama
int main() {
    Node* root = nullptr;
    root = insert(root, 50); // root node
    insert(root, 30);        // anak kiri dari 50
    insert(root, 20);        // anak kiri dari 30
    insert(root, 40);        // anak kiri dari 30
    insert(root, 70);        // anak kiri dari 50
    insert(root, 60);        // anak kiri dari 70
    insert(root, 80);        // anak kiri dari 70

    cout << "inorder traversal of the binary tree is: ";
    inorder(root);
    cout << endl;

    int val = 40;
    Node* parent = fingerParent(root, val);
    if (parent != nullptr) {
        cout << "parent of node " << val << " is : " << parent->data <, endl;
    } else {
        cout << "Node " << val << "does not have a parent (it might be the root or not exist)." << endl;
    }

    return 0;
}
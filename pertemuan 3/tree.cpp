#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

void addNode(Node** root, int value) {
    if (*root == NULL) {
        Node* baru = new Node;
        baru->data = value;
        baru->kiri = NULL;
        baru->kanan = NULL;
        *root = baru;
    } 
    else if (value < (*root)->data) {
        addNode(&(*root)->kiri, value);
    } 
    else {
        addNode(&(*root)->kanan, value);
    }
}

void inOrder(Node* akar) {
    if (akar != NULL) {
        inOrder(akar->kiri);
        cout << akar->data << " ";
        inOrder(akar->kanan);
    }
}

void preOrder(Node* akar) {
    if (akar != NULL) {
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

void postOrder(Node* akar) {
    if (akar != NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

int main() {
    system("cls");

    // Membuat tree
    Node* akar = NULL;

    addNode(&akar, 15);
    addNode(&akar, 10);
    addNode(&akar, 30);
    addNode(&akar, 25);
    addNode(&akar, 29);

    // Traversal tree
    cout << "Tampilan In-Order: ";
    inOrder(akar);

    cout << endl;

    cout << "Tampilan Pre-Order: ";
    preOrder(akar);

    cout << endl;

    cout << "Tampilan Post-Order: ";
    postOrder(akar);

    cout << endl;

    system("pause");
    return 0;
}
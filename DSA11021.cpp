#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int x) {
        key = x;
        left = right = NULL;
    }
};

Node* insert(Node* node, int X) {
    if (node == NULL)
        return new Node(X);
	
	if(node->key==X) return node;
	
    if (X < node->key)
        node->left = insert(node->left, X);
    else if (X > node->key)
        node->right = insert(node->right, X);

    return node;
}

void printLeaf(Node* node) {
    if (node == NULL) return;

    if (node->left == NULL && node->right == NULL) {
        cout << node->key << " ";
        return;
    }

    printLeaf(node->left);
    printLeaf(node->right);
}

int main() {
	int T; cin >> T;
	
	while(T--){
		
    Node* root = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    printLeaf(root);
    
	cout<<endl;
	}
	return 0;
}
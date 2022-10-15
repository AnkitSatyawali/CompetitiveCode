#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
	int data;
	Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void printPostorder(Node* node)
{
	if (node == NULL)
		return;
	printPostorder(node->left);
	printPostorder(node->right);
    cout << node->data << " ";
}

int main()
{
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	cout << "\nPostorder traversal of binary tree is \n";
	printPostorder(root);
	return 0;
}

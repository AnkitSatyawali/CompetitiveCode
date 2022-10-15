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

void printPreorder(Node* node)
{
	if (node == NULL)
		return;
	cout << node->data << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

int main()
{
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);
	return 0;
}

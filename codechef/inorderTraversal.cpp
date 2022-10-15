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

void printInorder(Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
    cout << node->data << " ";
	printInorder(node->right);
}

int main()
{
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);
	return 0;
}

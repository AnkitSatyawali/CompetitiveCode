#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
	Node* head = new Node(4);
	head->next = new Node(6);
	head->next->next = new Node(8);
	head->next->next->next = new Node(9);
	int ans = 0;
	while(head!=NULL) {
	    ans++;
	    head = head->next;
	}
	cout<<ans;
	return 0;
}
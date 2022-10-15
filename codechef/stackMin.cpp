#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<int> s;
	s.push(1);
	s.push(23);
	s.push(75);
	s.push(-34);
	int min = INT_MAX;
	while(s.size()>0) {
	    int temp = s.top();
	    if(min>temp) {
	        min = s.top();
	    }
	    s.pop();
	}
	cout<<min;
	return 0;
}
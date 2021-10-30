#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1,0,3,4,1};
    int cnt = 0;
    for(int i=0;i<5;i++) {
        if(arr[i]==1)
        cnt++;
    }
    cout<<cnt;
    return 0;
}
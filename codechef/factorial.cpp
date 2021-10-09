#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    int ans = 1;
    while(num>0) {
        ans = ans*num;
        num--;
    } 
    cout<<ans<<"\n";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans = 0;
    while(n>0) {
        ans = ans*10 + (n%10);
        n = n/10;
    }
    cout<<ans<<"\n";
    return 0;
}
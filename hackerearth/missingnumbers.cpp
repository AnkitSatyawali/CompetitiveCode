#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int temp, ans = 0;
    for(int i=0;i<n;i++){
        cin>>temp;
        ans = ans ^ temp;
    }
    cout<<ans<<"\n";
    return 0;
}
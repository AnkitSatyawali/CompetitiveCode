#include<bits/stdc++.h>
using namespace std;

int main() {
    string binaryNumber;
    cin>>binaryNumber;
    int ans = 0;
    for(int i=0;i<binaryNumber.size()-1;i++) {
        if(binaryNumber[i]=='1') {
            ans = ans * 2 + 2;
        }
    }
    if(binaryNumber[binaryNumber.size()-1]=='1')
    ans = ans+1;
    cout<<ans<<"\n";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    int ans = 0;
    while(num>0) {
        ans = ans*10 + (num%10);
        num = num/10;
    } 
    cout<<ans<<"\n";
    return 0;
}
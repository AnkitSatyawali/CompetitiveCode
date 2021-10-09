#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum = 0,num=n;
    while(n>0) {
        int temp = n%10;
        sum += (temp*temp*temp);
        n = n/10;
    }
    if(sum==num)
    cout<<"True"<<"\n";
    else
    cout<<"False"<<"\n";
    return 0;
}
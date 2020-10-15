#include<bits/stdc++.h>
using namespace std;
long long solve(long long num){
    if(num==1) return 0;
    if(num==2) return 6;
    long long ans = 4*(num-1)*(num-2);
    long long ret = (num*num)*(num*num-1)/2-ans;
    return ret;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout << solve(i) << endl;
    }
}
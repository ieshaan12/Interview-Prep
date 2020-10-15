#include<bits/stdc++.h>
using namespace std;
void solve(long long  x,long long y){
    long long m = max(x,y);
    if(m%2==0){
        long long ans  = m*m - (m-1) + (x-y);
        cout << ans << endl;
    }else{
        long long ans = m*m - (m-1)+(y-x);
        cout << ans << endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        solve(x,y);
    }
}
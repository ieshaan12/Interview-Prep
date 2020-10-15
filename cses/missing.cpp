#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n-1;i++){
        int tmp;
        cin>>tmp;
        sum+=tmp;
    }
    long long ans = (long long)n*(n+1)/2 - sum;
    cout << ans << endl;
}
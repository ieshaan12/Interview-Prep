#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> a,vector<int> b,int k){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=a.size()-1;
    int count=0;
    for(int j=b.size()-1;j>=0;j--){
        while(i>=0 && a[i]+k>=b[j]){
            if(b[j]>=a[i]-k && b[j]<=a[i]+k){
                count++;
                i--;
                break;
            }
            i--;
        }
        if(i<0) break;
    }
    cout << count << endl;
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    solve(a,b,k);
}
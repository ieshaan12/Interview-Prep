#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> p,int x){
    sort(p.begin(),p.end());
    int count=0;
    int i=0,j=p.size()-1;
    while(i<=j){
        if(p[i]+p[j]<=x){
            i++;
            j--;
            count++;
        }else{
            j--;
            count++;
        }
    }
    cout << count << endl;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    solve(p,x);
}
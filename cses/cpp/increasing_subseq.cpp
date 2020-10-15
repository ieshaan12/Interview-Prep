#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> arr){
    const int INF=1e9;
    int n=arr.size();
    vector<int> d(n+1,INF);
    d[0]=-INF;
    for(int i=0;i<n;i++){
        int j=upper_bound(d.begin(),d.end(),arr[i])-d.begin();
        if(d[j-1]<arr[i] && arr[i]<d[j]){
            d[j]=arr[i];
        }
    }
    int ans=0;
    for(int i=0;i<d.size();i++){
        if(d[i]!=INF) ans=i; 
    }
    return ans;
}
int main(){
    int size;
    cin>>size;
    vector<int> arr;
    while(size--){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    cout << solve(arr) << endl;
}
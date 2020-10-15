#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> h,vector<int>s,int x){
    vector<vector<int>> arr(s.size()+1,vector<int>(x+1));
    for(int i=0;i<arr.size();i++){
        arr[i][0]=0;
    }
    for(int i=0;i<arr[0].size();i++){
        arr[0][i]=0;
    }
    for(int i=1;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            // cout <<i <<j <<endl;
            arr[i][j]=max((j-h[i-1]>=0)?(arr[i-1][j-h[i-1]]+s[i-1]):INT_MIN,arr[i-1][j]);
        }
    }
    // for(auto it:arr){
    //     for(auto ti:it){
    //         cout << ti << " ";
    //     }
    //     cout << endl;
    // }
    cout << arr[arr.size()-1][arr[0].size()-1] << endl;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> h,s;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        h.push_back(tmp);
    }
    while(n--){
        int tmp;
        cin>>tmp;
        s.push_back(tmp);
    }
    solve(h,s,x);
}
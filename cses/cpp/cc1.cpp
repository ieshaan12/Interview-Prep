#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr;
    while(n--){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    vector<int> ret(x+1,0);
    for(int i=0;i<arr.size();i++){
        if(arr[i]<ret.size()) ret[arr[i]]=1;
    }
    for(int i=0;i<ret.size();i++){
        // cout <<i << endl;
        for(int j=0;j<arr.size();j++){
            ret[i]+=(i-arr[j]>=0)?ret[i-arr[j]]:0;
            ret[i]=ret[i]%mod;
        }
    }
    cout << ret[x] << endl;
}
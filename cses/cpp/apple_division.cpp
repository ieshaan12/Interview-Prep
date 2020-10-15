#include<bits/stdc++.h>
using namespace std;
void count(vector<int> arr,long tot,long& sum,int index,long& min_diff){
    if(index>=arr.size()){
        min_diff=min(min_diff,labs(sum-(tot-sum)));
        return;
    }
    // cout << index <<endl;
    sum+=arr[index];
    count(arr,tot,sum,index+1,min_diff);
    sum-=arr[index];
    count(arr,tot,sum,index+1,min_diff);
}
void solve(vector<int> arr){
    //find all possible subset sum 
    long tot=0;
    for(auto it:arr){
        tot+=it;
    }
    long sum=0;
    long min_diff=LONG_MAX;
    count(arr,tot,sum,0,min_diff);
    cout << min_diff << endl;
}
int main(){
    // x (W-x)
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr);
}
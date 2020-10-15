#include<bits/stdc++.h>
using namespace std;
vector<int> find_digits(int n){
    vector<int> ret;
    if(n<10){
        ret.push_back(n);
        return ret;
    }
    while(n!=0){
        if(n%10!=0) ret.push_back(n%10);
        n=n/10;
    }
    return ret;
}
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    // time_t start,end;
    // time(&start);
    int n;
    cin>>n;
    vector<int> arr(n+1,0);
    for(int i=1;i<arr.size();i++){
        vector<int> tmp = find_digits(i);
        int mi=INT_MAX;
        for(int j=0;j<tmp.size();j++){
            mi=min(mi,arr[i-tmp[j]]);
        }
        mi++;
        arr[i]=mi;
    }
    // for(int i=0;i<arr.size();i++){
    //     cout << i << ":" << arr[i]<<endl;
    // }
    // cout << endl;
    cout << arr[n] << endl;
    // time(&end);
    // cout << end-start <<endl;
}
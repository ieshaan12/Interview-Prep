#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,char>> arr;
    for(int i=0;i<n;i++){
        int a,d;
        cin>>a>>d;
        arr.push_back({a,'a'});
        arr.push_back({d,'d'});
    }
    sort(arr.begin(),arr.end());
    
}
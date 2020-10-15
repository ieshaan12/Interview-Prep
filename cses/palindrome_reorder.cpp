#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(auto it:s){
        mp[it]++;
    }
    int n=s.size();
    string ret(n,'-');
    bool valid=true;
    int l=0,r=ret.size()-1;
    for(auto it:mp){
        if(it.second%2==0){
            for(int i=0;i<it.second/2;i++){
                ret[l]=it.first;
                ret[r]=it.first;
                l++;
                r--;
            }
        }else{
            if(valid){
                for(int i=0;i<it.second/2;i++){
                    ret[l]=it.first;
                    ret[r]=it.first;
                    l++;
                    r--;
                }
                ret[ret.size()/2]=it.first;
                valid=false;
            }else{
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }
    cout << ret << endl;
}
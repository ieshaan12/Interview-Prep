#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> ret;
    do{
        ret.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout << ret.size() << endl;
    for(auto it:ret){
        cout << it << endl;
    }
}
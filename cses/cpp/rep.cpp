#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=0;
    int i=0;
    while(i<s.size()){
        int tmp=1;
        while(i+1<s.size() && s[i]==s[i+1]){
            tmp++;
            i++;
        }
        if(ans<tmp) ans=tmp;
        i++;
    }
    cout << ans << endl;
}
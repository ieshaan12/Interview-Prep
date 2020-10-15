#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    multiset<int> st;
    vector<int> t(m);
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        st.insert(tmp);
    }
    for(int i=0;i<m;i++){
        cin>>t[i];
    }
    for(int i=0;i<t.size();i++){ 
        auto it = lower_bound(st.begin(),st.end(),t[i]);
        if(it==st.begin()) {
            if(*it==t[i]){
                cout << *(it) << endl;
                st.erase(it);
            }else cout << -1 << endl;
        }
        else if(*it==t[i]){
            cout << *(it) <<endl;
            st.erase(it);
        }
        else {
            cout << *(--it) << endl;
            st.erase(it);
        }
    }
}
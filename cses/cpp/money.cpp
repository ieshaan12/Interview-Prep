#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int> arr;
    for(int i=0;i<size;i++){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    // sort(arr.begin(),arr.end());
    set<int>st;
    for(int i=0;i<arr.size();i++){
        vector<int> tmp;
        for(auto it:st){
            tmp.push_back(it+arr[i]);
        }
        st.insert(arr[i]);
        for(auto it:tmp){
            st.insert(it);
        }
    }
    cout << st.size() << endl;
    for(auto it:st){
        cout <<it <<" ";
    }
    cout << endl;
}
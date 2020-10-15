#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr({3,2,1,5,4});
    for(int i=0;i<arr.size();i++){
        arr[i]--;        
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]==i) continue;
        int tmp=arr[i];
        int j=i;
        while(arr[j]!=j){
            int tmp1=arr[j];
            arr[j]=j;
            j=tmp1;
        }
    }
    for(int i=0;i<arr.size();i++){
        arr[i]++;
    }
    for(auto it:arr){
        cout << it << endl;
    }
}
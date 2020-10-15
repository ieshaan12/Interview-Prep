#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    long long ans=0;
    for(int i=0;i<size;i++){
        int tmp;
        cin>>tmp;
        arr[i]=tmp;
        if(i>0 && arr[i]<arr[i-1]) {
            ans+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout << ans << endl;
}
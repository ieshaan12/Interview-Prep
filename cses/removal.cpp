#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr[i]=tmp;
    }
    long ret[n][n];
    for(int i=0;i<n;i++){
        ret[i][i]=arr[i];
    }
    for(int i=0;i<n-1;i++){
        ret[i][i+1]=max(arr[i],arr[i+1]);
    }
    for(int j=2;j<n;j++){
        for(int i=0;i<n;i++){
            if(i+j>=n) break;
            ret[i][i+j]=max(
                arr[i]+min(ret[i+1][i+j-1],ret[i+2][i+j]),
                arr[i+j]+min(ret[i][i+j-2],ret[i+1][i+j-1])
            );
        }
    }
    cout << ret[0][n-1] << endl;
}
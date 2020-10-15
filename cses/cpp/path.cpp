#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            char c;
            cin>>c;
            if(c=='*'){
                arr[i][j]=-1;
            }else arr[i][j]=1;
        }
    }
    if(arr[0][0]==-1 || arr[size-1][size-1]==-1){
        cout << 0 << endl;
        return 0;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==0 && j==0) continue;
            if(arr[i][j]==-1) continue;
            int left,up;
            if(j-1<0||arr[i][j-1]==-1) left=0;
            else left=arr[i][j-1];
            if(i-1<0 || arr[i-1][j]==-1) up=0;
            else up=arr[i-1][j];
            arr[i][j]=(left+up)%mod;
        }
    }
    cout << arr[size-1][size-1]%mod <<endl;
}
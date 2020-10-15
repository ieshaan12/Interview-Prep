#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    string src;
    cin>>src;
    string dst;
    cin>>dst;
    vector<vector<int>> arr(src.size()+1,vector<int>(dst.size()+1));
    for(int i=0;i<arr.size();i++){
        arr[i][0]=i;
    }
    for(int i=0;i<arr[0].size();i++){
        arr[0][i]=i;
    }
    for(int i=1;i<arr.size();i++){
        for(int j=1;j<arr[0].size();j++){
            if(src[i-1]==dst[j-1]) arr[i][j]=arr[i-1][j-1];
            else{
                arr[i][j]=min(arr[i][j-1],min(arr[i-1][j],arr[i-1][j-1]))+1;
            }
        }
    }
    cout << arr[arr.size()-1][arr[0].size()-1] << endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr(n,vector<char>(m,'.'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            arr[i][j]=c;
        }
    }
    unordered_map<int,int> parent;
    queue<int> q;
    
}
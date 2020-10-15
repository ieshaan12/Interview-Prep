#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int num,x;
    cin>> num>>x;
    vector<int> arr;
    while(num--){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(),arr.end());
    vector<vector<int>> ret(arr.size()+1,vector<int>(x+1,0));
    int col=ret[0].size();
    int row=ret.size();
    for(int i=0;i<col;i++){
        ret[0][i]=INT_MAX;
    }
    for(int i=0;i<row;i++){
        ret[i][0]=0;
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            ret[i][j]=min(ret[i-1][j],(j-arr[i-1]>=0 && ret[i][j-arr[i-1]]!=INT_MAX)?(1+ret[i][j-arr[i-1]]):INT_MAX);
            // ret[i][j]=ret[i][j]%INT_MAX;
        }
    }
    // for(auto it:ret){
    //     for(auto ti:it){
    //         cout << ti <<  " ";
    //     }
    //     cout << endl;
    // }
    if(ret[row-1][col-1]==INT_MAX) cout<< -1 <<endl;
    else cout << ret[row-1][col-1]<< endl;
    return 0;
}
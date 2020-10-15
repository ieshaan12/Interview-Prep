#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> arr(max(row,col)+1,vector<int>(max(row,col)+1,0));
    for(int i=0;i<min(row,col);i++){
        arr[i][i]=0;
    }
    for(int i=1;i<arr.size();i++){
        for(int j=i+1;j<arr[0].size();j++){
            // cout <<i <<j << endl;
            int min_val=INT_MAX;
            for(int k=1;k<j;k++){
                min_val=min(min_val,arr[i][k]+arr[i][j-k]);
            }
            for(int k=1;k<i;k++){
                min_val=min(min_val,arr[k][j]+arr[i-k][j]);
            }
            // cout << min_val<<endl;
            arr[i][j]=min_val+1;
            arr[j][i]=arr[i][j];
        }
    }
    // for(auto it:arr){
    //     for(auto ti:it){
    //         cout <<ti <<" ";
    //     }
    //     cout <<endl;
    // }
    cout << arr[row][col]<<endl;
}
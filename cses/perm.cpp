#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> arr){
    for(int i=1;i<arr.size()-1;i++){
        if(abs(arr[i]-arr[i+1])!=1 && abs(arr[i]-arr[i-1])!=1) continue;
        else return false;
    }
    if(abs(arr[0]-arr[1])==1) return false;
    if(abs(arr[arr.size()-1]-arr[arr.size()-2])==1) return false;
    return true;
}
int main(){
    int size;
    cin>>size;
    if(size==1){
        cout << 1<< endl;
        return 0;
    }
    if(size<4){
        cout << "NO SOLUTION" <<endl;
        return 0;
    } 
    if(size==4){
        cout << 2 << " "<< 4 <<" " <<1 << " " << 3 << endl;
        return 0;

    }
    vector<int> arr(size,0);
    int num=1;
    for(int i=0;i<arr.size();i++){
        arr[i]=num;
        num++;
        i++;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0) continue;
        arr[i]=num;
        num++;
    }
    for(auto it:arr){
        cout << it << " ";
    }
    cout <<endl;
}
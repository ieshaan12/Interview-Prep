#include<bits/stdc++.h>
using namespace std;
void recur(vector<string>&paths,int x,int y,vector<bool>&arr,string&s){
    if(arr[x*7+y]==true) return;
    arr[x*7+y]=true;
    int i;
    for(i=0;i<49;i++){
        if(arr[i]==false) break;
    }
    if(i==49){
        paths.push_back(s);
        arr[x*7+y]=false;
        return;
    } 
    if(x-1>=0) {
        s.push_back('U');
        recur(paths,x-1,y,arr,s);
        s.pop_back();
    }
    if(x+1<7) {
        s.push_back('D');
        recur(paths,x+1,y,arr,s);
        s.pop_back();
    }
    if(y-1>=0) {
        s.push_back('L');
        recur(paths,x,y-1,arr,s);
        s.pop_back();
    }
    if(y+1<7) {
        s.push_back('R');
        recur(paths,x,y+1,arr,s);
        s.pop_back();
    }
    arr[x*7+y]=false;
}
int main(){
    vector<string> paths;
    vector<bool> visited(49,false);
    string s="";
    recur(paths,0,0,visited,s);
    // for(auto it:paths){
    //     cout <<it << endl;
    // }
    cout << paths.size() << endl;
}
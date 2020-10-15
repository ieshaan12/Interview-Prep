#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    cout.tie(NULL);
    long long num;
    cin>>num;
    while(num!=1){
        cout << num << " ";
        if(num%2==0) num=num/2;
        else{
            num=num*3+1;
        }
    }
    cout << num << endl;
}